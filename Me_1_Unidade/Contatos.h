#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Contatos
{
public:
	static void AdicionarContato(vector<string> nomes, string nome, vector<string> telefones1, string telefone1, 
		vector<string> telefones2, string telefone2, vector<bool> favoritos, bool favorito);
	static void ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos);
	static void ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos, char letraContato);
	static void ListarFavoritos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos);
	static void FavoritarContato(vector<string> nomes, string nome, vector<bool>& favoritos);
	static void DesfavoritarContato(vector<string> nomes, string nome, vector<bool>& favoritos);
	static void EditarContato(vector<string> nomes, string nome, vector<string>& telefones1, string telefone1, vector<string>& telefones2, string telefone2, int opcao);
private:
	static void ImprimirContato(string nome, string telefone1, string telefone2, bool favorito);
};

