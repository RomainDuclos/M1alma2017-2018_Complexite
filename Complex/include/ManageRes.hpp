#ifndef MANRES_HPP
#define MANRES_HPP

#include <iostream>
#include <string>
#include <vector>

#include "../include/MyLib.hpp"


void resToConsole(vector<int> data, int rlsa, int rlpt, int rmy)
{
	vector<int> duree;
	for (int i = 2; i < data.size(); ++i)
	{
		duree.push_back(data[i]);
	}

	int bInfMax = maxVec(duree);
	int bInfMoy = moyVec(duree,data[0]);

	//Affichage
	cout << "Borne inférieure ‘‘maximum’’ = " << bInfMax << endl;
	cout << "Borne inférieure ‘‘moyenne’’ = " << bInfMoy << endl;
	cout << "Résultat LSA = " << rlsa << endl;
	cout << "Résultat LPT = " << rlpt << endl;
	cout << "Résultat MyAlgo = " << rmy << endl;
}

void resToFile(vector<vector<int>> data, vector<vector<int>> res, string f)
{
	
	cout << "Resultats écrit dans le fichier : " << f << endl;
}

#endif