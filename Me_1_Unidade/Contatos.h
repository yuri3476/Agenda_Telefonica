#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Contatos
{
public:
	void AdicionarContato(vector<string> nomes, string nome, vector<string> telefones1, string telefone1, 
		vector<string> telefones2, string telefone2, vector<bool> favoritos, bool favorito);
	void ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos);
	void ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos, char letraContato);
	void ListarFavoritos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos);

private:
	void ImprimirContato(string nome, string telefone1, string telefone2, bool favorito);
};

