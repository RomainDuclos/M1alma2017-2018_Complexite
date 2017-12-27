#ifndef LAUNCH_HPP
#define LAUNCH_HPP

#include <iostream>
#include <string>
#include <vector>

#include "../include/ManageData.hpp"
#include "../include/ManageRes.hpp"
#include "../include/AlgoLib.hpp"

using namespace std;

void launchAlgoFile(string f)
{
	vector<int> data;
	data = manageFromFile(f);

	cout << "Execution des algorithmes" << endl;
	int resLSA = LSA(data);
	int resLPT = LPT(data);
	int resMyAlgo = MyAlgo(data);

	cout << "Affichage des résultats : " << endl;
	resToConsole(data,resLSA,resLPT,resMyAlgo);
}

void launchAlgoClavier(string f)
{
	vector<int> data;
	data = manageFromClavier(f);

	cout << "Execution des algorithmes" << endl;
	int resLSA = LSA(data);
	int resLPT = LPT(data);
	int resMyAlgo = MyAlgo(data);

	cout << "Affichage des résultats : " << endl;
	resToConsole(data,resLSA,resLPT,resMyAlgo);
	
}

void launchAlgoAlea(string f)
{
	vector<vector<int>> data;

	data = manageFromAlea(f);

	vector<vector<int>> resI;
	cout << "Execution des algorithmes" << endl;
	for(int i = 0; i < data[2][0]; ++i)
	{
		vector<int> tmp;

		for (int j = 4; j < 3 + data[2][0]; ++j)
		{
			vector<int> exec = data[j];
			tmp.push_back(LSA(exec));
			tmp.push_back(LPT(exec));
			tmp.push_back(MyAlgo(exec));
		}

		resI.push_back(tmp);
	}

	cout << "Affichage des résultats : " << endl;
	cout << "Donnez le nom du fichier resultat (ATTENTION il va être créé ou écrasé)" << endl;
	string fi;
	cin >> fi;
	resToFile(data,resI,fi);
}

#endif