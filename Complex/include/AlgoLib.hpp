#ifndef ALGOLIB_HPP
#define ALGOLIB_HPP

#include <vector>
#include <iostream>
#include <string>

#include "../include/MyLib.hpp"

using namespace std;


int LSA(vector<int> v)
{
	vector<Machine> ens_mach;
	vector<Tache> ens_tache;

	//Creation machines
	for (int i = 0; i < v[0]; ++i)
	{
		Machine m;
		m.ind = i;
		ens_mach.push_back(m);
	}

	//Creation ensemble tache
	for (int i = 0; i < v[1]; ++i)
	{
		Tache t;
		t.ind = i;
		t.duree = v[i+2];
		ens_tache.push_back(t);
	}

	//<TEST> : affiche indice machine
	/*
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		cout << ens_mach[i].ind << "  ";
	}
	cout << endl;
	//affiche duree taches
	for (int i = 0; i < ens_tache.size(); ++i)
	{
		cout << ens_tache[i].ind << "  ";
	}
	cout << endl;
	*/
	//</TEST>

	//nombre de tache libre
	int nb_free_task = ens_tache.size();

	int ind = 0; //indice des taches
	int time = 0; //simule le traitement des taches par une machine

	//tant qu' on a des taches non affectées
	while(nb_free_task != 0)
	{	
		//on parcours les machines 
		for (int i = 0; i < ens_mach.size(); ++i)
		{	
			//si une est libre
			if(ens_mach[i].libre)
			{	
				//alors on affecte une tache en ajoutant la durée de la tache à l'occupation de la machine
				ens_mach[i].occupation = ens_mach[i].occupation + ens_tache[ind].duree;
				ind ++; //on passe à la tache suivante
				nb_free_task--; //on a une tache de moins à affecter
				ens_mach[i].libre = false; //et la machine est occupée
			}
			else //si une machine n'est pas libre
			{
				if(ens_mach[i].occupation == time - 1) //si une machine traite une tache depuis temps - 1
				{
					ens_mach[i].libre = true; //alors au prochain tour de boucle elle sera bien libre
				}
			}
		}

		time++; //le temps de traitement passe à plus 1
	}

	//<TEST> : affichage occupation machine
	/*
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		cout << ens_mach[i].ind << " : " << ens_mach[i].occupation << " ; ";
	}
	cout << endl;
	*/
	//</TEST>

	//Résultat : temps d'occupation maximum d'une machine
	int max = ens_mach[0].occupation;
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		if (max < ens_mach[i].occupation)
		{
			max = ens_mach[i].occupation;
		}
	}
	
	return max;
}

int LPT(vector<int> v)
{
	vector<Machine> ens_mach;
	vector<Tache> ens_tache;

	//Creation machines
	for (int i = 0; i < v[0]; ++i)
	{
		Machine m;
		m.ind = i;
		ens_mach.push_back(m);
	}

	//Creation ensemble tache
	for (int i = 0; i < v[1]; ++i)
	{
		Tache t;
		t.ind = i;
		t.duree = v[i+2];
		ens_tache.push_back(t);
	}

	//On ordonne les taches
	taskQuickSort(ens_tache,0,ens_tache.size()-1,true);


	//<TEST> : affiche indice machine
	/*
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		cout << ens_mach[i].ind << "  ";
	}
	cout << endl;
	//affiche duree taches
	for (int i = 0; i < ens_tache.size(); ++i)
	{
		cout << ens_tache[i].ind << " : " << ens_tache[i].duree << " ; ";
	}
	cout << endl;
	*/
	//</TEST>

	//nombre de tache libre
	int nb_free_task = ens_tache.size();

	int ind = 0; //indice des taches
	int time = 0; //simule le traitement des taches par une machine

	//tant qu' on a des taches non affectées
	while(nb_free_task != 0)
	{	
		//on parcours les machines 
		for (int i = 0; i < ens_mach.size(); ++i)
		{	
			//si une est libre
			if(ens_mach[i].libre)
			{	
				//alors on affecte une tache en ajoutant la durée de la tache à l'occupation de la machine
				ens_mach[i].occupation = ens_mach[i].occupation + ens_tache[ind].duree;
				ind ++; //on passe à la tache suivante
				nb_free_task--; //on a une tache de moins à affecter
				ens_mach[i].libre = false; //et la machine est occupée
			}
			else //si une machine n'est pas libre
			{
				if(ens_mach[i].occupation == time - 1) //si une machine traite une tache depuis temps - 1
				{
					ens_mach[i].libre = true; //alors au prochain tour de boucle elle sera bien libre
				}
			}
		}

		time++; //le temps de traitement passe à plus 1
	}

	//<TEST> : affichage occupation machine
	/*
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		cout << ens_mach[i].ind << " : " << ens_mach[i].occupation << " ; ";
	}
	cout << endl;
	*/
	//</TEST>
	
	//Résultat : temps d'occupation maximum d'une machine
	int max = ens_mach[0].occupation;
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		if (max < ens_mach[i].occupation)
		{
			max = ens_mach[i].occupation;
		}
	}
	
	return max;
}

//Pour le moment c'est comme LPT mais avec order croissant
int MyAlgo(vector<int> v)
{
	vector<Machine> ens_mach;
	vector<Tache> ens_tache;

	//Creation machines
	for (int i = 0; i < v[0]; ++i)
	{
		Machine m;
		m.ind = i;
		ens_mach.push_back(m);
	}

	//Creation ensemble tache
	for (int i = 0; i < v[1]; ++i)
	{
		Tache t;
		t.ind = i;
		t.duree = v[i+2];
		ens_tache.push_back(t);
	}

	//On ordonne les taches
	taskQuickSort(ens_tache,0,ens_tache.size()-1,false);


	//<TEST> : affiche indice machine
	/*
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		cout << ens_mach[i].ind << "  ";
	}
	cout << endl;
	//affiche duree taches
	for (int i = 0; i < ens_tache.size(); ++i)
	{
		cout << ens_tache[i].ind << " : " << ens_tache[i].duree << " ; ";
	}
	cout << endl;
	*/
	//</TEST>

	//nombre de tache libre
	int nb_free_task = ens_tache.size();

	int ind = 0; //indice des taches
	int time = 0; //simule le traitement des taches par une machine

	//tant qu' on a des taches non affectées
	while(nb_free_task != 0)
	{	
		//on parcours les machines 
		for (int i = 0; i < ens_mach.size(); ++i)
		{	
			//si une est libre
			if(ens_mach[i].libre)
			{	
				//alors on affecte une tache en ajoutant la durée de la tache à l'occupation de la machine
				ens_mach[i].occupation = ens_mach[i].occupation + ens_tache[ind].duree;
				ind ++; //on passe à la tache suivante
				nb_free_task--; //on a une tache de moins à affecter
				ens_mach[i].libre = false; //et la machine est occupée
			}
			else //si une machine n'est pas libre
			{
				if(ens_mach[i].occupation == time - 1) //si une machine traite une tache depuis temps - 1
				{
					ens_mach[i].libre = true; //alors au prochain tour de boucle elle sera bien libre
				}
			}
		}

		time++; //le temps de traitement passe à plus 1
	}

	//<TEST> : affichage occupation machine
	/*
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		cout << ens_mach[i].ind << " : " << ens_mach[i].occupation << " ; ";
	}
	cout << endl;
	*/
	//</TEST>
	
	//Résultat : temps d'occupation maximum d'une machine
	int max = ens_mach[0].occupation;
	for (int i = 0; i < ens_mach.size(); ++i)
	{
		if (max < ens_mach[i].occupation)
		{
			max = ens_mach[i].occupation;
		}
	}
	
	return max;
}

#endif