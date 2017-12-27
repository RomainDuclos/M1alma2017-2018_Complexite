#include <iostream>
#include <string>

#include "../include/LaunchAlg.hpp"

using namespace std;

int showMenuFichier()
{
	cout << "Menu pour entrée fichier" << endl;
	cout << "Entrez le nom du fichier à utiliser : " << endl;
	

	string file;

	cin >> file;

	cout << "Nom du fichier : " << file << endl;

	launchAlgoFile(file);
	
	int back = 0;

	while(back != 1)
	{
		cout << "Retournez au menu principal : appuyez sur 1" << endl;	
		cin >> back;
	}

	return back;
}