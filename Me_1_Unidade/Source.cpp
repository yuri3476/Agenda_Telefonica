#include <iostream>
#include <string>
#include <vector>
#include "Contatos.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	vector<string> nomes;
	vector<string> telefones1;
	vector<string> telefones2;
	vector<bool> favoritos;

	while (true) {
		int opcao = -1;
		system("cls||clear");
		std::cout << "\n";
		std::cout << "-=-=-=-=AGENDA TELEFÔNICA-=-=-=-=" << "\n";
		std::cout << "1 - Criar Contato" << "\n"
			<< "2 - Editar Contato " << "\n"
			<< "3 - Listar Contato " << "\n"
			<< "4 - Buscar Contato" << "\n"
			<< "5 - Favoritar Contato  " << "\n"
			<< "6 - Desfavoritar Contato " << "\n"
			<< "0 - Listar Contatos favoritos " << "\n";
		std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-" << "\n";
		std::cout << "\n";
		cin >> opcao;
		if (opcao == 1) {
			system("cls||clear");

			string nome;
			string tel1;
			string tel2;

			std::cout << "Informe seu nome: " << "\n";
			cin >> nome;
			std::cout << "Informe seu telefone 1: " << "\n";
			cin >> tel1;
			std::cout << "Informe seu telefone 2: " << "\n";
			cin >> tel2;
			nomes.push_back(nome);
			telefones1.push_back(tel1);
			telefones2.push_back(tel2);
			favoritos.push_back(false);

		}

		if (opcao == 3) {
			system("cls||clear");

			std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-" << "\n";
			std::cout << "\n";
			std::cout << "-=-=-=-=ESCOLHA 1 OPÇÃO-=-=-=-=" << "\n";
			std::cout << "1 - Listar todos os contatos" << "\n"
				<< "2 - Listar contato a partir da primeira letra" << "\n";
			std::cout << "\n";
			cin >> opcao;

			if (opcao == 1) {
				system("cls||clear");
				Contatos::ListarContatos(nomes, telefones1, telefones2, favoritos);
				std::cout << "\n";
				std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-" << "\n";
				opcao = -1;
				system("pause");

			}
			if (opcao == 2) {
				system("cls||clear");
				string letra;
				std::cout << "Digite a letra que deseja buscar: ";
				cin >> letra;

				Contatos::ListarContatos(nomes, telefones1, telefones2, favoritos);
				std::cout << "\n";
				std::cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-" << "\n";
				opcao = -1;
				system("pause");

			}

		}

	}

	system("pause");
	return 0;
}