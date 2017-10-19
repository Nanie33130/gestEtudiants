#include <iostream>
#include <string>
#include <vector>
#include "section.h"

#ifndef APPLI
#define APPLI 

using namespace std;

/**
 *\file appli.h
 *\author Mélanie Lebeau
 *\version 0.1
 *\date 12 Octobre 2017
 *\brief Lance l'application avec le menu principal.
 *\detail Cette classe permet de lancer l'application avec le menu principal et de choisir la première action.
**/

class Appli{
	private :
	/**
	 *\brief Vecteur qui contient les sections.
	 *\detail Vecteur vide au départ auquel on rajoute des sections.
	**/
	vector <Section>  vectSection;

	/**
	 *\brief Etat de l'application.
	 *\detail Si \b isRunning egal True, l'application tourne, si il est egal a False, l'application se ferme.
	 *\return Un \e booléen (True ou False).
	**/
	bool isRunning;

	/**
	 *\brief Affiche le menu.
	 *\detail Permet d'afficher le menu avec les differents choix pour l'utilisateur.
	**/
	void displayMenuAppli();

	/**
	 *\brief Recupère le choix de l'utilisateur.
	 *\detail Permet de récupérer le choix de l'utilisateur pour l'envoyer à \b actionChoice.
	 *\return Un \e int correspondant au choix de l'utilisateur.
	**/
	int inputChoice();

	/**
	 *\brief Renvoi vers l'action choisie.
	 *\detail Appel la fonction correspondant au choix de l'utilisateur avec un switch.
	 *\param theChoice Recupère le choix de l'utilisateur pour l'utiliser dans le switch.
	**/ 
	void actionChoice(int theChoice);

	/**
	 *\brief Creation de section.
	 *\detail Permet de créer une section et de l'envoyer au vecteur vectSection.
	**/
	void createSection();

	/**
	 *\brief Choisir une section.
	 *\detail Permet de choisir une section déja créée et présente dans le vecteur vectSection pour accéder au menu Section.
	**/
	void chooseSection();

	/**
	 *\bief Afficher les sections.
	 *\detail Permet d'afficher les sections créée et présente dans le vecteur vectSection.
	**/
	void displayallSection();

	/**
	 *\brief Création de matière.
	 *\detail Permet de créer une matière et de l'envoyer au vecteur vectDiscipline.
	**/
	void createDiscipline();

	/**
	 *\brief Afficher les matières.
	 *\Permet d'afficher les matières créée et présente dans le vecteur vectDiscipline.
	**/
	void displayallDiscipline();

	public :

	/**
	 *\brief Vecteur qui contient les matières.
	 *\detail Vecteur vide au depart auqel on rajoute des matières.
	**/
	vector <Discipline> vectDiscipline;

	/**
	 *\brief Lance et ferme l'application.
	 *\detail Utilise le \e booléen isRunning pour lancer l'application ou la fermer.
	**/
	void run();
};
#endif
