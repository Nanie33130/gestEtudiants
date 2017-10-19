#include "student.h"

string Student::getName()
{
	#ifdef DEBUG
		cout<<"string Student::getName()"<<endl;
	#endif
	return name;
}

void Student::setName(string theName)
{
	#ifdef DEBUG
		cout<<"void Student::setName(string theName)"<<endl;
	#endif
	name=theName;
}

string Student::getSurname()
{
	#ifdef DEBUG
		cout<<"string Student::getSurname()"<<endl;
	#endif
	return surname;
}

void Student::setSurname(string theSurname)
{
	#ifdef DEBUG
		cout<<"void Student::setSurname(string theSurname)"<<endl;
	#endif
	surname=theSurname;
}

string Student::getBirthdate()
{
	#ifdef DEBUG
		cout<<"string Student::getBirthdate()"<<endl;
	#endif
	return birthdate;
}

void Student::setBirthdate(string theBirthDate)
{
	#ifdef DEBUG
		cout<<"void Student::setBirthdate(string theBirthDate)"<<endl;
	#endif
	birthdate=theBirthDate;
}

void Student::input()
{
	#ifdef DEBUG
		cout<<"void Student::input()"<<endl;
	#endif
	cout<<"Entrez le nom de l'étudiant : ";
	cin.ignore(1);
	getline(cin,name);
	cout<<"Entrez le prénom de l'étudiant : ";
	getline(cin,surname);
	cout<<"Entrez la date de naissance de l'étudiant : ";
	getline(cin,birthdate);
}

void Student::display()
{
	#ifdef DEBUG
		cout<<"void Student::display()"<<endl;
	#endif
	cout<<"Nom : "<<name<<endl
		<<"Prénom : "<<surname<<endl
		<<"Date de naissance : "<<birthdate<<endl<<endl;
}
