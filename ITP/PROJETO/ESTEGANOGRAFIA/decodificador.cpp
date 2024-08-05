#include <iostream>
#include <fstream>
#include <filesystem>
#include "src/Imagem.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        cout << "Quantidade inválida de argumentos." << endl;
        return 0;
    }

    string arquivo_entrada = argv[1];

    fstream arquivo(arquivo_entrada);

    if (filesystem::exists(arquivo_entrada))
    {
        if (arquivo.is_open())
        {
            Imagem imagem(arquivo_entrada);
            imagem.decodificar(arquivo_entrada);
        }
        else
        {
            cout << "Erro de permissão!" << endl;
        }
    }
    else
    {
        cout << "Arquivo não existe!." << endl;
    }

    return 0;
}