#include "Contatos.h"

void Contatos::AdicionarContato(vector<string> nomes, string nome, vector<string> telefones1, string telefone1,
	vector<string> telefones2, string telefone2, vector<bool> favoritos, bool favorito)
{
	nomes.push_back(nome);
	telefones1.push_back(telefone1);
	telefones2.push_back(telefone2);
	favoritos.push_back(false);
}

void Contatos::ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++)
	{
		Contatos::ImprimirContato(nomes[i], telefones1[i], telefones2[i], favoritos[i]);
		cout << "" << endl;
	}
}

void Contatos::ListarContatos(vector<string> nomes, vector<string> telefones1, vector<string> telefones2, vector<bool> favoritos, char letraContato)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++)
	{
		string nome = nomes[i];
		if (toupper(nome[0]) == toupper(letraContato)) {
			Contatos::ImprimirContato(nomes[i], telefones1[i], telefones2[i], favoritos[i]);
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
			Contatos::ImprimirContato(nomes[i], telefones1[i], telefones2[i], favoritos[i]);
			cout << " " << endl;
		}
	}
}

void Contatos::FavoritarContato(vector<string> nomes, string nome, vector<bool>& favoritos)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++) {

		if (nomes[i]._Equal(nome)) {
			if (favoritos[i]) {
				std::cout << "O contato já está favoritado!";
				std::cout << "\n";
				return;
			}
			favoritos[i] = true;
			std::cout << "Contato foi favoritado com sucesso!";
			return;
		}		
	}

	std::cout << "Contato não encontrado!";
}

void Contatos::DesfavoritarContato(vector<string> nomes, string nome, vector<bool>& favoritos)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++) {

		if (nomes[i] == nome) {
			if (!favoritos[i]) {
				std::cout << "O contato não está favoritado!";
				std::cout << "\n";
				return;
			}
			favoritos[i] = false;
			std::cout << "Contato foi desfavoritado com sucesso!";
			std::cout << "\n";

		}
	}
	std::cout << "Contato não encontrado!";
}

void Contatos::ImprimirContato(string nome, string telefone1, string telefone2, bool favorito)
{
	cout << "Nome: " << nome << endl;
	cout << "Telefone 1: " << telefone1 << endl;
	cout << "Telefone 2: " << telefone2 << endl;
	string favorito1 = favorito ? "Sim" : "Não";
	cout << "Favorito: " << favorito1;
	std::cout << "\n";
}
