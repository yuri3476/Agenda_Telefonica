#include "Contatos.h"

void Contatos::AdicionarContato(vector<string> nomes, string nome, vector<string> telefones1, string telefone1,
	vector<string> telefones2, string telefone2, vector<bool> favoritos, bool favorito)
{
	
}

void Contatos::ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++)
	{
		ImprimirContato(nomes[i], telefones1[i], telefones2[i], favoritos[i]);
	}
}

void Contatos::ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos, char letraContato)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++)
	{
		string nome = nomes[i];
		if (nome[i] == letraContato) {
			ImprimirContato(nomes[i], telefones1[i], telefones2[i], favoritos[i]);
		}
	}
}

void Contatos::ListarFavoritos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++)
	{
		if (favoritos[i]) 
		{
			ImprimirContato(nomes[i], telefones1[i], telefones2[i], favoritos[i]);
		}
	}
}

void Contatos::ImprimirContato(string nome, string telefone1, string telefone2, bool favorito)
{
	cout << "Nome: " << nome << endl;
	cout << "Telefone 1: " << telefone1 << endl;
	cout << "Telefone 2: " << telefone2 << endl;
	cout << "Favorito: " << favorito ? "Sim" : "Não";
}
