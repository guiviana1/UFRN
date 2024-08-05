#include "Pixel.h"

using namespace std;
/**
 * @brief
 * Representa uma imagem composta por uma matriz de pixels e com altura e largura definida.
 */
class Imagem
{
  int largura, altura;
  Pixel **pixels; // matriz de pixels iniciada pela classe.

public:
/**
 * @brief
 * Construtor da imagem.
 * 
 * @param arquivo_entrada Arquivo lido pelo código para a criação da imagem.
 */
  Imagem(string arquivo_entrada)
  {
    criar_imagem(arquivo_entrada);
  }
/**
 * @brief
 * Todas as funções abaixo estão documentadas no imagem.cpp.
 */
  void alocar_memoria();

  int get_altura();

  void set_altura(int altura);

  Pixel **get_pixels();

  int get_largura();

  void set_largura(int largura);

  void criar_imagem(string arquivo_entrada);

  bool codificar(std::string mensagem);

  void salvar(std::string arquivo_saida);

  void decodificar(std::string arquivo_entrada);
};
