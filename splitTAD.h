#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string principal, char delimitador = ' ')
{
    istringstream stringStream(principal);
    string aux;
    vector<string> retorno;

    while (getline(stringStream, aux, delimitador))
        retorno.push_back(aux);

    return retorno;
}

vector<string> splitPath(string principal)
{
    vector<string> origem;

    if (!principal.empty() && principal.at(0) == '/') 
    {
        origem.push_back("/");

        vector<string> partes = split(principal, '/');
        for (size_t i = 0; i < partes.size(); i++) 
            if (partes[i] != "")
                origem.push_back(partes[i]);
    }
    else 
        origem = split(principal, '/');

    return origem;
}


string lastPosition(vector<string> vec)
{
    return vec.at(vec.size() - 1);
}

int ocorrenciaString(string conteudo, char buscado)
{
    int quantidade = 0;
    for (int i = 0; i < conteudo.size(); i++)
        if (buscado == conteudo.at(i))
            quantidade++;

    return quantidade;
}

string stringToLower(string palavra)
{
    for (size_t i = 0; i < palavra.size(); i++) 
        palavra[i] = tolower(palavra[i]);
    return palavra;
}
