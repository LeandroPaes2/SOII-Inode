#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string stringPrincipal, char delimitador = ' ')
{
    istringstream stringStream(stringPrincipal);
    string stringAuxiliar;
    vector<string> retorno;

    while (getline(stringStream, stringAuxiliar, delimitador))
    {
        retorno.push_back(stringAuxiliar);
    }

    return retorno;
}

vector<string> splitPath(string stringPrincipal)
{
    vector<string> caminhoOrigem;

    if (!stringPrincipal.empty() && stringPrincipal.at(0) == '/') {
        caminhoOrigem.push_back("/");

        vector<string> partes = split(stringPrincipal, '/');
        for (size_t i = 0; i < partes.size(); i++) 
        {
            if (partes[i] != "")
                caminhoOrigem.push_back(partes[i]);
        }
    }
    else {
        caminhoOrigem = split(stringPrincipal, '/');
    }

    return caminhoOrigem;
}


string lastPosition(vector<string> vec)
{
    return vec.at(vec.size() - 1);
}

int ocorrenciaString(string conteudo, char caracterBuscado)
{
    int qtd = 0;
    for (int i = 0; i < conteudo.size(); i++)
    {
        if (caracterBuscado == conteudo.at(i))
            qtd++;
    }

    return qtd;
}

string stringToLower(string palavra)
{
    for (size_t i = 0; i < palavra.size(); i++) {
        palavra[i] = tolower(palavra[i]);
    }
    return palavra;
}

