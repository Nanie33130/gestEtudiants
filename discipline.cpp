#include "discipline.h"

string Discipline::getName()
{
	#ifdef DEBUG
		cout<<"string Discipline::getName()"<<endl;
	#endif
	return name;
}

void Discipline::setName(string theName)
{
	#ifdef DEBUG
		cout<<"void Discipline::setName(string theName)"<<endl;
	#endif
	name=theName;
}

void Discipline::display()
{
	#ifdef DEBUG
		cout<<"void Discipline::display()"<<endl;
	#endif
	cout<<name<<endl;
}	

void Discipline::input()
{
	#ifdef DEBUG
		cout<<"void Discipline::input()"<<endl;
	#endif
	cout<<"Entrez le nom de la matière : ";
	cin.ignore(1);
	getline(cin,name);
}