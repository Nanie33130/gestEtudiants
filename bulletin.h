#include <iostream>
#include <string>
#include <vector>

#ifndef BULLETIN
#define BULLETIN

using namespace std;

/**
 *\file bulletin.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 12 Octobre 2017
 *\brief Contient les appréciation
 *\detail Cette classe permet de stocker les appréciation pour le bulletin.
**/

class Bulletin{
	private :
	/**
	 *\brief Contient les appréciation
	 *\detail Vecteur \e string vide au départ auquel on rajoute les appréciations des élèves.
	**/
	vector <string> vectAppreciation;
};

#endif