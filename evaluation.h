#ifndef EVALUATION
#define EVALUATION
#include <iostream>
#include <string>
#include <vector>
#include "discipline.h"
#include "note.h"
using namespace std;
#define DEBUG


/**
 *\file evaluation.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 12 Octobre 2017
 *\brief Classe Evalutation.
 *\detail Cette classe permet de saisir des évaluations.
**/

class Section;
class Evaluation{
	private :
	/**
	 *\brief Pointeur vers la classe Section.
	 * Pointe vers la section de l'evaluation.
	**/
	Section * pTheSection;

	/**
 	 *\brief Variable \e int contenant le numéro du semestre.
 	 * exemple : 1.
	**/
	int semestre;

	/**
 	 *\brief Variable \e string contenant la date de l'evaluation.
 	 * exemple : 18 septembre 2017.
	**/
	string dateEval;

	/**
 	 *\brief Variable \e string contenant le nom de l'évaluation.
 	 * exemple : Graphes.
	**/
	string name;

	/**
 	 *\brief Pointeur vers la classe Discipline.
 	 * Pointe vers la Discipline de l'evaluation.
	**/
	Discipline * pTheDiscipline;

	/**
 	 *\brief Vecteur qui contient les notes.
 	 * Vecteur vide au depart qui contient les notes de l'évaluation ajoutées.
	**/
	vector <Note> vectTheNote;

	public :
	
	/**
 	 *\brief Renvois la variable \b semestre.
 	 * Méthode qui permet de retourner la variable \b semestre.
 	 *\return Un \e int.
	**/
	int getSemestre();

	/**
 	 *\brief Recupère la variable \b semestre.
 	 * Permet de récupérer la variable \b semestre.
 	 *\param t\b heSemestre Récupère la variable \b theSemestre dans la variable \b semestre.
	**/
	void setSemestre(int theSemestre);

	/**
 	 *\brief Renvois la variable \b dateEval.
 	 * Méthode qui permet de retourner la variable \b dateEval.
 	 *\return Un \e string.
	**/
	string getDateEval();

	/**
 	 *\brief Recupère la variable \b dateEval.
 	 * Permet de récupérer la variable \b dateEval.
 	 *\param \b theSemestre Récupère la variable \b theDateEval dans la variable \b dateEval.
	**/
	void setDateEval(string theDateEval);

	/**
 	 *\brief Renvois la variable \b name.
 	 * Méthode qui permet de retourner la variable \b name.
 	 *\return Un \e string.
	**/
	string getName();

	/**
 	 *\brief Recupère la variable \b name.
 	 * Permet de récupérer la variable \b name.
 	 *\param \b theSemestre Récupère la variable \b theName dans la variable \b name.
	**/
	void setName(string theName);

	/**
 	 *\brief Ajouter une note.
 	 * Permet d'ajouter une note à l'évaluation
 	 *\param \b theNote récupère la variable \b theNote dans la variable \b note.
	**/
	void addNote(Note theNote);

	/**
 	 *\brief Saisir l'évaluation
 	 * Permet de saisir l'évaluation
	**/
	void input();

	/**
 	 *\brief Afficher l'évaluation
 	 * Permet d'afficher l'évaluation
	**/
	void display();

   void setDiscipline(Discipline * disciplineEval);

    Evaluation(Section * pTheSectionEval);
};
#endif
