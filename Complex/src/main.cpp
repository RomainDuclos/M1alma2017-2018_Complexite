#include <iostream>
#include "../include/MainMenu.hpp"

using namespace std;

int main()
{
	string exit = "";

	cout <<"Programme lancé"<<endl;
	cout <<"Eécrivez 'quit' pour quitter le programme"<<endl;

	while(showMenu() != -1){};

	cout<<"Programme terminé"<<endl;

	return 0;
}