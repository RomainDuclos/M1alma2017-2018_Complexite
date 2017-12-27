#include <iostream>
#include <string>
#include <vector>

#include "../../include/AlgoLib.hpp"
#include "../../include/ManageData.hpp"
#include "../../include/ManageRes.hpp"
#include "../../include/LaunchAlg.hpp"

using namespace std;

int main()
{
	/*TEST ALGO*/
	/*
	vector<int> v;
	v.push_back(3);
	v.push_back(11);
	v.push_back(2);
	v.push_back(7);
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(6);
	v.push_back(2);
	v.push_back(3);
	v.push_back(6);
	v.push_back(2);
	v.push_back(5);

	cout << "Test LSA" << endl;
	int done = LSA(v);

	cout << "Test LPT" << endl;
	done = LPT(v);

	cout << "Test MyAlgo" << endl;
	done = MyAlgo(v);
	*/
	/*TEST MANAGE DATA*/
	/*TEST FICHIER -> OK*/
	/*
	vector<int> mv;
	string f;

	cout << "nom du fichier : ";
	cin >> f;

	cout << "fichier : " << f << endl;

	mv = manageFromFile(f);
	cout << "Données : ";
	for (int i = 0; i < mv.size(); ++i)
	{
		cout << mv[i] << " ";
	}

	cout << endl;
	*/
	/*TEST CLAVIER*/
	/*
	vector<int> mv;
	string f;
	cout << "Entrez les valeurs ainsi : " << endl;
	cin >> f;
	mv = manageFromClavier(f);
	cout << "Données : ";
	for (int i = 0; i < mv.size(); ++i)
	{
		cout << mv[i] << " ";
	}
	cout << endl;
	*/
	/*TEST MULTIPLE INSTANCES*/
	/*
	vector<vector<int>> mvv;
	string f;
	cout << "Entrez les valeurs ainsi : " << endl;
	cin >> f;

	mvv = manageFromAlea(f);

	cout << "Données : " << endl;
	for (int i = 2; i < mvv.size(); ++i)
	{
		cout << i << " : " ;

		for (int j = 0; j < mvv[i].size(); ++j)
		{
			cout << mvv[i][j] << " ";
		}
		cout << " | " ;
		
	}

	cout << endl;
	*/

	/*TEST LAUNCH ALG ET MANAGE RES*/
	/*fichier*/
	/*
	string f;

	cout << "nom du fichier : ";
	cin >> f;

	launchAlgoFile(f);
	*/
	/*clavier*/
	/*
	string f;
	cout << "Entrez les valeurs ainsi : " << endl;
	cin >> f;
	launchAlgoClavier(f);
	*/

	/*aleatoire*/
	string f;
	cout << "Entrez les valeurs ainsi : " << endl;
	cin >> f;
	launchAlgoAlea(f);

	return 0;
}