#include "appli.h"

void Appli::run()
{
	#ifdef DEBUG
		cout<<"void Appli::run()"<<endl;
	#endif
	isRunning=true;
	do
	{
		displayMenuAppli();
		actionChoice(inputChoice());
		
	}
	while (isRunning);

}

void Appli::displayMenuAppli()
{
	#ifdef DEBUG
		cout<<"void Appli::displayMenuAppli()"<<endl;
	#endif
	cout<<endl<<"~~~~~~~~~~~~~~~MENU PRINCIPAL~~~~~~~~~~~~~~~"<<endl<<endl
		<<"\t\t\tQue souhaitez vous faire ? "<<endl<<endl
		<<"\t\t\t\t1 : Créer une section"<<endl
		<<"\t\t\t\t2 : Choisir une section"<<endl
		<<"\t\t\t\t3 : Afficher toutes les sections"<<endl
		<<"\t\t\t\t4 : Créer une matière"<<endl
		<<"\t\t\t\t5 : Afficher toutes les matière"<<endl
		<<"\t\t\t\t6 : Quitter"<<endl<<endl;
}

int Appli::inputChoice()
{
	#ifdef DEBUG
		cout<<"int Appli::inputChoice()"<<endl;
	#endif
	int choice;
	cin>>choice;
	return choice;
}


void Appli::actionChoice(int theChoice)
{
	#ifdef DEBUG
		cout<<"void Appli::actionChoice(int theChoice)"<<endl;
	#endif
	switch (theChoice)
	{
		case 1 :
			createSection();
			break;
		case 2 :
			chooseSection();
			break;
		case 3 :
			displayallSection();
			break;
		case 4 :
			createDiscipline();
			break;
		case 5 :
			displayallDiscipline();
			break;
		case 6 :
			isRunning=false;
			break;
		default : 
			cout<<"Error";
			break;
	}
}

void Appli::createSection()
{
	#ifdef DEBUG
		cout<<"void Appli::createSection()"<<endl;
	#endif
	Section section(this);
	section.input();
	vectSection.push_back(section);
}

void Appli::chooseSection()
{
	#ifdef DEBUG
		cout<<"void Appli::chooseSection()"<<endl;
	#endif

	int tailleSection=vectSection.size();
	cout <<"Choisissez votre section : "<<endl;

	for (int i = 0; i < tailleSection; i++)
	{
		cout<<i<<" : ";
		vectSection[i].display();
		cout <<endl;
	}

	int choixSection;
	cout<<"Entrez le numéro devant la section choisie : "<<endl<<endl;
	cin>>choixSection;
	do
		vectSection[choixSection].displayBoucle();
	while (vectSection[choixSection].isDisplaying);

}

void Appli::displayallSection()
{
	#ifdef DEBUG
		cout<<"void Appli::displayallSection()"<<endl;
	#endif
	int tailleSection=vectSection.size();

	for (int i = 0; i < tailleSection; i++)
	{
		vectSection[i].display();
	}
}

void Appli::createDiscipline()
{
	#ifdef DEBUG
		cout<<"void Appli::createDiscipline()"<<endl;
	#endif
	Discipline discipline;
	discipline.input();
	vectDiscipline.push_back(discipline);
}


void Appli::displayallDiscipline()
{
	#ifdef DEBUG
		cout<<"void Appli::displayallDiscipline()"<<endl;
	#endif
	int tailleDiscipline=vectDiscipline.size();

	for (int i = 0; i < tailleDiscipline; i++)
	{
		vectDiscipline[i].display();
	}
}
