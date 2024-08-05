#include "Imagem.h"
#include <iostream>
#include <fstream>
#include <filesystem>
/**
 *  ...
 */


/**
 * @brief 
 * Função responsável por tornar o atributo do pixel par.
 *
 * @param valor componente do pixel a ser alterado.
 */
void tornar_par(int &valor)
{
    if (valor % 2 != 0)
    {
        valor--;
    }
}
/**
 * @brief 
 * Função responsável por tornar o atributo do pixel ímpar.
 * 
 * @param valor componente do pixel a ser alterado.
 */
void tornar_impar(int &valor)
{
    if (valor % 2 == 0)
    {
        valor++;
    }
}
/**
 * @brief
 * Função que realiza a operação de potenciação entre dois valores.
 * 
 * @param base base da potência
 * @param expoente expoente da potência
 * @return operação de potência da base pelo expoente
 */
int potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        int resultado = 1;
        for (int i = 0; i < expoente; ++i)
        {
            resultado *= base;
        }
        return resultado;
    }
}
/**
 * @brief
 * Função que retorna a altura da objeto.
 * 
 * @return altura do objeto
 */

int Imagem::get_altura()
{
    return Imagem::altura;
}
/**
 * @brief
 * Função que altera a altura do objeto.
 * 
 * @param altura altura do objeto
 */
void Imagem::set_altura(int altura)
{
    this->altura = altura;
}
/**
 * @brief
 * Função que retorna a largura do objeto.
 * 
 * @return largura do objeto
 */

int Imagem::get_largura()
{
    return Imagem::largura;
}
/**
 * @brief
 * Função responsável por alterar a largura da imagem.
 * 
 * @param largura
 */
void Imagem::set_largura(int largura)
{
    this->largura = largura;
}
/**
 * @brief
 * Função que aloca a memória dinamicamente para uma matriz de pixels.
 */
void Imagem::alocar_memoria()
{
    pixels = new Pixel *[altura];

    for (int i = 0; i < altura; ++i)
    {
        pixels[i] = new Pixel[largura];
    }
}
/**
 * @brief
 * Função que cria o objeto do tipo Imagem.
 * 
 * @param arquivo_entrada arquivo a ser lido pela função.
 */
void Imagem::criar_imagem(string arquivo_entrada)
{

    ifstream arquivo(arquivo_entrada);
    if (arquivo.is_open())
    {
        string linha;
        getline(arquivo, linha);
        if (linha != "P3")
        {
            cerr << "Tipo de arquivo PPM não suportado: " << linha << endl;
            return;
        }

        int largura, altura, valor_maximo_cor;

        arquivo >> largura >> altura >> valor_maximo_cor;
        set_largura(largura);
        set_altura(altura);
        alocar_memoria();

        for (int i = 0; i < altura; i++)
        {
            for (int j = 0; j < largura; j++)
            {
                int r, g, b;
                arquivo >> r >> g >> b;
                get_pixels()[i][j] = {r, g, b};
            }
        }
        arquivo.close();
    }
    else
    {
        cerr << "Erro ao abrir o arquivo: " << arquivo_entrada << endl;
    }
}
/**
 * @brief
 * Função responsável por codificar a mensagem dentro da imagem criada.
 *
 * @param mensagem Mensagem a ser codificada.
 * @return confirmação sobre a codificação da mensagem. 
 */
bool Imagem::codificar(std::string mensagem)
{
    if (mensagem.size() * 8 >= get_largura() * get_altura() * 3)
    {
        cout << "Mensagem maior que a capacidade da imagem." << endl;
        return false;
    }

    int *array = new int[mensagem.size() + 1];
    array[0] = mensagem.size();
    int i = 1;

    for (auto c : mensagem)
    {
        array[i] = static_cast<int>(c);
        i++;
    }

    int count = 7;
    int k = 0;

    for (int j = 2; j < 3 + mensagem.size(); j++)
    {
        int value1 = array[k];

        for (int i = 0; i < 8; i++)
        {
            int pixel_x = (count / 3) / get_largura();
            int pixel_y = (count / 3) % get_largura();
            auto &pixel = get_pixels()[pixel_x][pixel_y];

            if (count % 3 == 0)
            {
                value1 % 2 == 0 ? tornar_par(pixel.r) : tornar_impar(pixel.r);
            }
            else if (count % 3 == 1)
            {
                value1 % 2 == 0 ? tornar_par(pixel.g) : tornar_impar(pixel.g);
            }
            else if (count % 3 == 2)
            {
                value1 % 2 == 0 ? tornar_par(pixel.b) : tornar_impar(pixel.b);
            }

            value1 /= 2;
            count--;

            if (count < 0)
            {
                count = (8 * (j + 1)) - 1;
            }
        }

        if (array[k] == 0)
        {
            for (int prev_count = count + 1; prev_count <= (8 * j) - 1; prev_count++)
            {
                int prev_pixel_x = (prev_count / 3) / get_largura();
                int prev_pixel_y = (prev_count / 3) % get_largura();
                auto &prev_pixel = get_pixels()[prev_pixel_x][prev_pixel_y];

                if (prev_count % 3 == 0)
                {
                    tornar_par(prev_pixel.r);
                }
                else if (prev_count % 3 == 1)
                {
                    tornar_par(prev_pixel.g);
                }
                else if (prev_count % 3 == 2)
                {
                    tornar_par(prev_pixel.b);
                }
            }
        }

        k++;
        count = (8 * j) - 1;
    }

    delete[] array;
    return true;
}
/**
 * @brief
 * Função responsável por salvar a imagem codificada em um arquivo de saída.
 * 
 * @param arquivo_saida Arquivo de destino da imagem codificada.
 */
void Imagem::salvar(string arquivo_saida)
{
    ofstream arquivo(arquivo_saida);
    if (arquivo.is_open())
    {
        arquivo << "P3" << endl;
        arquivo << get_largura() << " " << get_altura() << endl;
        arquivo << "255" << endl;

        for (int i = 0; i < get_altura(); i++)
        {
            for (int j = 0; j < get_largura(); j++)
            {
                arquivo << get_pixels()[i][j].r << " ";
                arquivo << get_pixels()[i][j].g << " ";
                arquivo << get_pixels()[i][j].b << "   ";
            }
            arquivo << endl;
        }
        arquivo.close();
    }
}
/**
 * @brief
 * Função que retorna a matriz de pixels da imagem.
 * 
 * @return matriz de pixels.
 */
Pixel **Imagem::get_pixels()
{
    return pixels;
}
/**
 * @brief
 * Função responsável por decodificar a mensagem codificada em uma imagem.
 * 
 * @param arquivo_entrada Arquivo que contém a mensagem à ser decodificada.
 */
void Imagem::decodificar(string arquivo_entrada)
{
    int tamanho = 0, acumulad = 0;

    for (int i = 7; i >= 0; i--)
    {
        int pixel_y = (i / 3) % get_largura();
        auto &pixel = get_pixels()[0][pixel_y];

        if (i % 3 == 0)
        {
            tamanho += (pixel.r % 2) * potencia(2, acumulad);
        }
        else if (i % 3 == 1)
        {
            tamanho += (pixel.g % 2) * potencia(2, acumulad);
        }
        else if (i % 3 == 2)
        {
            tamanho += (pixel.b % 2) * potencia(2, acumulad);
        }

        acumulad++;
    }

    if (tamanho * 8 >= get_largura() * get_altura() * 3)
    {
        cout << "Tamanho da mensagem maior que a capacidade da imagem." << endl;
        return;
    }

    int count = 15;
    for (int j = 3; j < tamanho + 3; j++)
    {

        int soma = 0, acumulado = 0;

        for (int i = 0; i < 8; i++)
        {
            int pixel_x = (count / 3) / get_largura();
            int pixel_y = (count / 3) % get_largura();
            auto &pixel = get_pixels()[pixel_x][pixel_y];

            if (count % 3 == 0)
            {
                soma += (pixel.r % 2) * potencia(2, acumulado);
            }
            else if (count % 3 == 1)
            {
                soma += (pixel.g % 2) * potencia(2, acumulado);
            }
            else if (count % 3 == 2)
            {
                soma += (pixel.b % 2) * potencia(2, acumulado);
            }
            if (i + 1 == 8)
            {
                cout << (char)soma;
            }
            acumulado++;
            count--;
        }
        count = (8 * j) - 1;
    }
    cout << endl;
}

