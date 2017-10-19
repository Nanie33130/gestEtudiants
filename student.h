#include <iostream>
#include <string>
#include <vector>
#include "bulletin.h"
#ifndef STUDENT
#define STUDENT

using namespace std;

class Student {
	private :
	/**
 	 *\brief
 	 *
	**/
	vector <Bulletin> vectBulletin;

	/**
	 	 *\brief
	 	 *
	**/
	string name;

	/**
	 	 *\brief
	 	 *
	**/
	string surname;

	/**
	 	 *\brief
	 	 *
	**/
	string birthdate;

	public :

	/**
 	 *\brief
 	 *
	**/
	string getName();

	/**
 	 *\brief
 	 *
	**/
	void setName(string theName);

	/**
 	 *\brief
 	 *
	**/
	string getSurname();

	/**
 	 *\brief
 	 *
	**/
	void setSurname(string theSurname);

	/**
 	 *\brief
 	 *
	**/
	string getBirthdate();

	/**
 	 *\brief
 	 *
	**/
	void setBirthdate(string theBrithDate);

	/**
 	 *\brief
 	 *
	**/
	void input();

	/**
 	 *\brief
 	 *
	**/
	void display();
};

#endif
