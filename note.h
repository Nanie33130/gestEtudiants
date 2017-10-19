#ifndef NOTE
#define NOTE

#include <iostream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

/**
 *\file note.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 12 Octobre 2017
 *\brief Classe Note.
 *\detail Cette classe permet de saisir une note.
**/

class Note{

	private :

	/**
 	 *\brief Variable \e note en \b float.
 	 * exemple : 15
	**/
	float valeur;

	/**
 	 *\brief Pointeur de \e Student.
 	 * Pointeur \b pTheStudent de \e Student.
 	 *
	**/
	Student * pTheStudent;

	public :

	/**
	 	 *\brief Constructeur Note.
	 	 * Constructeur de la classe Note.
	 	 *\param Pointeur \b lEtudiant.
	**/
	Note(Student * plEtudiant, float saNote);
};

#endif