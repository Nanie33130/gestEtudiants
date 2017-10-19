#include <iostream>
#include <string>
#include <vector>

#ifndef DISCIPLINE
#define DISCIPLINE

using namespace std;


/**
 *\file disipline.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 12 Octobre 2017
 *\brief Classe Matière.
 *\detail Cette classe permet de saisir et afficher les matières.
**/

class Discipline{
	private :

	/**
	 *\brief Variable \e string contenant le nom
	 * exemple : Math
	**/
	string name;
	public :

	/**
	 *\brief Renvois la variable \b name
	 * Méthode qui permet de retourner la variable \b name
	 *\return Un \e string
	**/
	string getName();

	/**
	 *\brief Récupere la variable \b name
	 * Permet de récupérer la variable \b name
	 *\param \b theName Récupère la variable \b theName dans la variable \b name
	**/
	void setName(string theName);

	/**
	 *\brief Affichage de la matière
	 *\ Permet d'afficher la matière
	**/
	void display();

	/**
	 *\brief Saisir la matière
	 * Permet de saisir la matière
	**/
	void input();
};

#endif