#include <iostream>
#include <string>
#include <vector>
#include "evaluation.h"

#ifndef SECTION
#define SECTION

/**
 *\file appli.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 12 Octobre 2017
 *\brief Lance l'application avec le menu principal.
 *\detail Cette classe permet de lancer l'application avec le menu principal et de choisir la première action.
**/


using namespace std;

class Appli;
class Section{
	private :

	/**
 	 *\brief
 	 *
	**/
	string name;

	/**
 	 *\brief
 	 *
	**/
	vector <Discipline *> vectDisciplineSection;

	/**
 	 *\brief
 	 *
	**/
	vector <int> vectTheCoeff;

	/**
 	 *\brief
 	 *
	**/
	vector <Evaluation> vectEval;

	/**
 	 *\brief
 	 *
	**/
	vector <Student> vectStudent;

	/**
 	 *\brief
 	 *
	**/
	Appli * pAppli;
	
	int inputChoice();

	/**
 	 *\brief
 	 *
	**/
	void actionChoice(int theChoice);

	/**
 	 *\brief
 	 *
	**/
	void createStudent();

	/**
 	 *\brief
 	 *
	**/
	void displayallStudent();

	/**
 	 *\brief
 	 *
	**/
	void chooseStudent();

	/**
 	 *\brief
 	 *
	**/
	void createEvaluation();

	/**
 	 *\brief
 	 *
	**/
	void displayallEvaluation();

	/**
 	 *\brief
 	 *
	**/
	void addDiscipline();

	/**
 	 *\brief
 	 *
	**/
	void displayallDiscipline();

	/**
 	 *\brief
 	 *
	**/
	void createBulletin();

	/**
 	 *\brief
 	 *
	**/
	void displayMenuAppli();


	public :

	/**
 	 *\brief
 	 *
	**/
	bool isDisplaying;

	/**
 	 *\brief
 	 *
	**/
	void displayMenuSection();

	/**
 	 *\brief
 	 *
	**/
	Section(Appli * pAppli);

	/**
 	 *\brief
 	 *
	**/
	string getName();

	/**
 	 *\brief
 	 *
	**/
	void setName(string TheName);

	/**
 	 *\brief
 	 *
	**/
	void display();

	/**
 	 *\brief
 	 *
	**/
	void input();

	/**
 	 *\brief
 	 *
	**/
	void displayBoucle();
};

#endif