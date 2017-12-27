#ifndef MYLIB_HPP
#define MYLIB_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

struct Machine
{
	int ind;
	bool libre = true;
	int occupation = 0;
};

struct Tache
{
	int ind;
	int duree;
};

int maxVec(vector<int> v)
{
	int max = v[0];

	for (int i = 0; i < v.size(); ++i)
	{
		if(v[i] > max)
		{
			max = v[i];
		}
	}

	return max;
}

int moyVec(vector<int> v, int m)
{
	int moy = 0;

	for (int i = 0; i < v.size(); ++i)
	{
		moy = moy + v[i];
	}

	return moy/m;
}

//Quicksort pour les taches avec option croissant descroissant (bool desc = 1 -> decroissant, croissant sinon)
void taskQuickSort(vector<Tache> & v, int left, int right, bool desc)
{
	
      int i = left;
      int j = right;
      int tmp;
      int pivot = v[(left+right)/2].duree;
      if(desc){
      	while(i<=j){
            while(v[i].duree > pivot){++i;}
            while(v[j].duree < pivot){--j;}
           	if(i<=j){
                 tmp=v[i].duree;
                 v[i].duree = v[j].duree;
                 v[j].duree = tmp;
                 ++i;
                 --j;
            }
        }
      }
      else
      {
      	while(i<=j){
            while(v[i].duree < pivot){++i;}
            while(v[j].duree > pivot){--j;}
           	if(i<=j){
                 tmp=v[i].duree;
                 v[i].duree = v[j].duree;
                 v[j].duree = tmp;
                 ++i;
                 --j;
            }
        }
      }

      if (left<j){taskQuickSort(v,left,j,desc);}
      if (i<right){taskQuickSort(v,i,right,desc);}
}

vector<int> string_to_vectorint(string f)
{
	int i = 0;
	string valueS = "";
	int valueI = 0;

	vector<int> res;

	string content = f;
	

	while(i <= content.size()-1)
	{
		while(content[i] != ':' && i <= content.size()-1)
		{
		 	valueS = valueS + content[i];
		 	++i;
		}

		valueI = stoi(valueS);
		res.push_back(valueI);

		++i;
		valueS = "";
	} 

	return res;
}

#endif