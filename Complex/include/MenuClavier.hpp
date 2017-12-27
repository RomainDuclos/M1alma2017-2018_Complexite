#include <iostream>
#include <string>

#include "../include/LaunchAlg.hpp"

using namespace std;

int showMenuClavier()
{
	cout << "Menu pour entrée avec le clavier" << endl;
	cout << "Entrez les valeurs ainsi : " << endl;
	cout << "nombre machines:nombre taches:durée tache 1:durée tache 2: ... :durée tache n" << endl;

	string data;

	cin >> data;

	cout << "Vos données : " << data << endl;

	launchAlgoClavier(data);
	
	int back = 0;

	while(back != 2)
	{
		cout << "Retournez au menu principal : appuyez sur 2" << endl;	
		cin >> back;
	}

	return back;
}