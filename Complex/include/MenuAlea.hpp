#include <iostream>
#include <string>

#include "../include/LaunchAlg.hpp"

using namespace std;

int showMenuAlea()
{
	cout << "Menu pour entrée aléatoire avec plusieurs instance" << endl;
	cout << "Entrez les valeurs ainsi : " << endl;
	cout << "nombre machines:nombre taches:nombre instances:duree minimum:duree maximum" << endl;

	string data;

	cin >> data;

	cout << "Vos données : " << data << endl;

	launchAlgoAlea(data);
	
	int back = 0;

	while(back != 3)
	{
		cout << "Retournez au menu principal : appuyez sur 3" << endl;	
		cin >> back;
	}

	return back;
}