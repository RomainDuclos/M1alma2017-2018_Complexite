#include <iostream>

#include "../include/MenuClavier.hpp"
#include "../include/MenuFichier.hpp"
#include "../include/MenuAlea.hpp"

using namespace std;

int showMenu()
{
	cout << "Menu de Complex" << endl;
	cout << "Choisissez un mode d'entrée avec 1, 2 ou 3 : " << endl;
	cout << "1 - Depuis un fichier" << endl;
	cout << "2 - En ligne de commande" << endl;
	cout << "3 - Générateur aléatoire" << endl;
	cout << "4 - Quitter" << endl;

	int choice;
	cin >> choice;

	int ok;

	switch(choice)
	{
		case 1:
			while (showMenuFichier() != 1){};
			return 1;
		break;

		case 2:
			while (showMenuClavier() != 2){};
			return 1;
		break;

		case 3:
			while (showMenuAlea() != 3){};
			return 1;
		break;

		case 4:
			cout << "Bye" << endl;
			return -1;
		break;

		default:
			cout << "Choix non valide, appuyez sur une touche" << endl;
		break;
	}
}