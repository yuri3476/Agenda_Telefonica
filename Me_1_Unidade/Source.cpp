#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	vector<string> nomes;
	vector<string> telefones1;
	vector<string> telefones2;
	vector<bool> favoritos;

	while (true) {
		int opcao = -1;

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


		}
	
	}

	system("pause");
	return 0;
}