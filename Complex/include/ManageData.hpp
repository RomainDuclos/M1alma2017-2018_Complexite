#ifndef MANAGE_HPP
#define MANAGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>

#include "../include/MyLib.hpp"

using namespace std;

vector<int> manageFromFile(string f)
{
	

	vector<int> res;

	
	string fi = "data_file/" + f;
	cout << fi << endl;
	ifstream fichier;;
	fichier.open(fi.c_str(), ios::in);

	if(fichier)
	{
		cout << "Vos données sont en cours de traitement depuis le fichier" << endl;

		string content;
		getline(fichier, content); 

		res = string_to_vectorint(content);
		
		fichier.close();
	}
	else
	{
		cerr << "Impossible d'ouvrir : " << f << endl;
	}

	return res;
}

vector<int> manageFromClavier(string f)
{
	cout << "Vos données sont en cours de traitement depuis les entrées au clavier" << endl;
	return string_to_vectorint(f);

}

vector<vector<int>> manageFromAlea(string f)
{
	cout << "Vos données sont en cours de traitement (génération aléatoire)" << endl;
	
	srand(time(NULL)); // initialisation de rand

	vector<vector<int>> res;
	vector<int> data;

	data = string_to_vectorint(f);

	vector<int> nb_mach;
	nb_mach.push_back(data[0]);

	res.push_back(nb_mach);

	vector<int> nb_taches;
	nb_mach.push_back(data[1]);

	res.push_back(nb_taches);

	vector<int> nb_ins;
	nb_ins.push_back(data[2]);

	res.push_back(nb_ins);

	int nb_inst = data[2];
	int rn; //valeur aléatoire
	int min = data[3];
	int max = data[4];
	
	for (int k = 0; k < nb_inst; ++k)
	{
		rn = 0;
		vector<int> temp;
		for (int l = 0; l < data[1]; ++l)
		{
			rn = rand()%(max-min) +min;
			temp.push_back(rn);
		}
		res.push_back(temp);
		
	}

	return res;
	
}

#endif