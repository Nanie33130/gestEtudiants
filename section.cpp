#include "section.h"
#include "appli.h"
#define DEBUG


	string Section::getName(){
		#ifdef DEBUG
		cout<<"string Section::getName()"<<endl;
		#endif
		return name;
	}

	void Section::setName(string TheName){
		#ifdef DEBUG
		cout<<"void Section::setName(string TheName)"<<endl;
		#endif
		name=TheName;
	}

	Section::Section (Appli * pAppli)
	{
		#ifdef DEBUG
		cout<<"Section::Section (Appli * pAppli)"<<endl;
		#endif
		this->pAppli=pAppli;
	}

	void Section::display(){
		#ifdef DEBUG
		cout<<"void Section::display()"<<endl;
		#endif
		cout<<name<<endl;
	}	

	void Section::input(){
		#ifdef DEBUG
		cout<<"void Section::input()"<<endl;
		#endif
		cout<<"Saisissez le nom de la Section : ";
		cin>>name;
	}

	void Section::displayMenuSection(){
		#ifdef DEBUG
		cout<<"void Section::displayMenuSection()"<<endl;
		#endif
		cout<<endl<<"~~~~~~~~~~~~~~~MENU DES SECTIONS~~~~~~~~~~~~~~~"<<endl<<endl
			<<"\t\t\tQue souhaitez vous faire ? "<<endl<<endl
			<<"\t\t\t\t1 : Créer un étudiant"<<endl
			<<"\t\t\t\t2 : Choisir un étudiant "<<endl
			<<"\t\t\t\t3 : Afficher les étudiants"<<endl
			<<"\t\t\t\t4 : Créer une évaluation"<<endl
			<<"\t\t\t\t5 : Afficher les évaluations"<<endl
			<<"\t\t\t\t6 : Ajouter une matière"<<endl
			<<"\t\t\t\t7 : Afficher les matières"<<endl
			<<"\t\t\t\t8 : Créer les bulletins"<<endl
			<<"\t\t\t\t9 : Retour"<<endl<<endl;
	}

	void Section::displayBoucle(){
		#ifdef DEBUG
		cout<<"void Section::displayBoucle()"<<endl;
		#endif
		isDisplaying=true;
		displayMenuSection();
		actionChoice(inputChoice());
	}

	int Section::inputChoice(){
		#ifdef DEBUG
		cout<<"int Section::inputChoice()"<<endl;
		#endif
		int choice;
		cin>>choice;
		return choice;
	}


	void Section::actionChoice(int theChoice){
		#ifdef DEBUG
		cout<<"void Section::actionChoice(int theChoice)"<<endl;
		#endif
		switch (theChoice)
		{
			case 1 :
				createStudent();
				break;
			case 2 :
				chooseStudent();
				break;
			case 3 :
				displayallStudent();
				break;
			case 4 :
				createEvaluation();
				break;
			case 5 :
				displayallEvaluation();
				break;
			case 6 :
				addDiscipline();
				break;
			case 7 :
				displayallDiscipline();
				break;
			case 8 :
				createBulletin();
				break;
			case 9 :
				isDisplaying=false;
				break;
			default : 
				cout<<"Error";
				break;			
		}
	}

	void Section::createStudent(){

		#ifdef DEBUG
			cout<<"void Section::createStudent()";
		#endif

		Student theStudent;
		theStudent.input();
		vectStudent.push_back(theStudent);
	}

	void Section::displayallStudent(){

		#ifdef DEBUG
			cout<<"void Section::displayallStudent()";
		#endif

		int nbrStudent=vectStudent.size();
		for (int compteur = 0; compteur < nbrStudent; compteur++ )
		{
			vectStudent[compteur].display();
		}

	}

	void Section::chooseStudent(){

		#ifdef DEBUG
			cout<<"void Section::chooseStudent()";
		#endif

		int nbrStudent=vectStudent.size();
		cout<<"Choisissez votre étudiant : \n";
		for (int compteur = 0; compteur < nbrStudent; compteur++ )
		{
			cout<<compteur<< " : ";
			vectStudent[compteur].display();
		}
		int choixStudent;
		cout<<"Entrez le numéro affiché devant l'étudiant choisi : "<<endl<<endl;
		cin>>choixStudent;
	}


	void Section::createEvaluation(){

		#ifdef DEBUG
			cout<<"void Section::createEvaluation()";
		#endif
		Evaluation theEval(this);
		//saisie du semestre de la date et du nom de l'évaluation
		theEval.input();

		cout<<"Choisissez la matière du control : ";
		int nbrMatiere=vectDisciplineSection.size();
		for (int numeroMatiere=0; numeroMatiere<nbrMatiere; numeroMatiere++)
		{
			cout<<numeroMatiere<<" : ";
			vectDisciplineSection[numeroMatiere]->display();
		}
		int noMatiere;
		cin>>noMatiere;
		cin.ignore(1);
        theEval.setDiscipline(vectDisciplineSection[noMatiere]);
		//saisie des notes de chaque étudiant
		cout<<"Saisissez la note de chaque élève : ";
		int nbrStudent=vectStudent.size();
		#ifdef DEBUG
        cout<<"Le nombre d'étudiant de la Section est: "<<nbrStudent<<endl;
		#endif
		for (int numeroStudent = 0; numeroStudent<nbrStudent; numeroStudent++)
		{
			
			cout<<"Nom : "<<vectStudent[numeroStudent].getName()<< "\tPrénom : "<< vectStudent[numeroStudent].getSurname()<< "\t";
			cout<<"Tapez la note obtenue par cet étudiant:";
			float laNote;
			cin>>laNote;
			Note nouvelleNote(&vectStudent[numeroStudent],laNote);
			theEval.addNote(nouvelleNote);
		}
		//vectEval.push_back(theEval);
			cout<<"void Section::createEvaluation(); fin"<<endl;
	}

	void Section::displayallEvaluation(){

		#ifdef DEBUG
			cout<<"void Section::displayallEvaluation";
		#endif

		int nbrEval=vectEval.size();
		for (int compteur= 0; compteur<nbrEval; compteur++)
		{
			vectEval[compteur].display();
		}
	}

	void Section::addDiscipline(){

		#ifdef DEBUG
			cout<<"void Section::addDiscipline";
		#endif

		int nbrDiscipline=pAppli->vectDiscipline.size();
		cout<<"Choisissez la matière que vous souhaitez ajouter : ";
		for (int compteur=0; compteur<nbrDiscipline; compteur++)
		{
			cout<<endl<<compteur<<" : "; 
			pAppli->vectDiscipline[compteur].display();
		}
		int coeff;
		int choiceDiscipline;
		cout<<"Entrez le numéro affiché devant la matière choisie : \n";
		cin>>choiceDiscipline;
		cout<<"Quel est son coefficient ? "<<endl;
		cin>>coeff;
		vectTheCoeff.push_back(coeff);
		vectDisciplineSection.push_back(&pAppli->vectDiscipline[choiceDiscipline]);
	}

	void Section::displayallDiscipline(){

		#ifdef DEBUG
			cout<<"void Section::displayallDiscipline()";
		#endif

		int tailleDiscipline = vectDisciplineSection.size();

		for (int i = 0; i < tailleDiscipline; i++)
		{
			vectDisciplineSection[i]->display();
			cout<<"Coefficient : "<<vectTheCoeff[i]<<endl<<endl;
		}
	}

	void Section::createBulletin(){

	}
