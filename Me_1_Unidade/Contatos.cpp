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
				std::cout << "O contato ja esta favoritado!";
				std::cout << "\n";
				return;
			}
			favoritos[i] = true;
			std::cout << "Contato foi favoritado com sucesso!";
			return;
		}
	}

	std::cout << "Contato nao encontrado!";
}

void Contatos::DesfavoritarContato(vector<string> nomes, string nome, vector<bool>& favoritos)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++) {

		if (nomes[i] == nome) {
			if (!favoritos[i]) {
				std::cout << "O contato nao esta favoritado!";
				std::cout << "\n";
				return;
			}
			favoritos[i] = false;
			std::cout << "Contato foi desfavoritado com sucesso!";
			std::cout << "\n";

		}
	}
	std::cout << "Contato nao encontrado!";
}

void Contatos::EditarContato(vector<string> nomes, string nome, vector<string>& telefones1, string telefone1, vector<string>& telefones2, string telefone2, int opcao)
{
	int tamanho = nomes.size();
	for (int i = 0; i < tamanho; i++) {
		if (opcao == 1) {
			if (nomes[i]._Equal(nome)) {
				telefones1[i] = telefone1;
				std::cout << "Telefone alterado com sucesso!";
				std::cout << "\n";
				return;
			}
		}
		if (opcao == 2) {
			if (nomes[i]._Equal(nome)) {
				telefones2[i] = telefone2;
				std::cout << "Telefone alterado com sucesso!";
				std::cout << "\n";
				return;
			}
		}
	}
	std::cout << "Contato nao encontrado!";
	std::cout << "\n";
}

void Contatos::BuscarContato(vector<string> nomes, string nomeBusca, vector<string> telefones1, vector<string> telefones2, vector<bool> favorito)
{
	vector<char> palavraBusca;
	vector<char> palavra;
	int contadorEncontrados;
	for (int i = 0; i < nomeBusca.size(); i++)
		palavraBusca.push_back(toupper(nomeBusca[i]));
	
	for (int i = 0; i < nomes.size(); i++)
	{
		Contatos::AdicionaChar(nomes[i], palavra);
		int contador = 0;
		if (!(palavraBusca.size() > palavra.size())) {
			for (int j = 0; j < palavraBusca.size(); j++)
			{
				if (palavraBusca[j] == palavra[j]) {
					contador += 1;
				}

				if (contador == palavraBusca.size()) {
					Contatos::ImprimirContato(nomes[i], telefones1[i], telefones2[i], favorito[i]);
					contadorEncontrados++;
					cout << " " << endl;
				}
			}
			palavra.clear();
		}
	}

	if(contadorEncontrados == 0)
		std::cout << "Contato nao encontrado " << std::endl;
}

void Contatos::AdicionaChar(string nomes, vector<char>& palavra)
{
	for (int i = 0; i < nomes.size(); i++)
	{
		palavra.push_back(toupper(nomes[i]));
	}
}
void Contatos::ImprimirContato(string nome, string telefone1, string telefone2, bool favorito)
{
	cout << "Nome: " << nome << endl;
	cout << "Telefone 1: " << telefone1 << endl;
	cout << "Telefone 2: " << telefone2 << endl;
	string favorito1 = favorito ? "Sim" : "Nao";
	cout << "Favorito: " << favorito1;
	std::cout << "\n";
}

