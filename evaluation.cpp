#include "evaluation.h"
#include "section.h"

	int Evaluation::getSemestre()
	{
		#ifdef DEBUG
		cout<<"int Evaluation::getSemestre()"<<endl;
		#endif
		return semestre;
	}
	
	void Evaluation::setSemestre(int theSemestre)
	{
		#ifdef DEBUG
		cout<<"void Evaluation::setSemestre(int theSemestre)"<<endl;
		#endif
		semestre=theSemestre;
	}

    void Evaluation::setDiscipline(Discipline * disciplineEval)
    {
        pTheDiscipline=disciplineEval;
    }
	
	string Evaluation::getDateEval()
	{
		#ifdef DEBUG
		cout<<"string Evaluation::getDateEval()"<<endl;
		#endif
		return dateEval;
	}
	
	void Evaluation::setDateEval(string theDateEval)
	{
		#ifdef DEBUG
		cout<<"void Evaluation::setDateEval(string theDateEval)"<<endl;
		#endif
		dateEval=theDateEval;
	}
	
	string Evaluation::getName()
	{
		#ifdef DEBUG
		cout<<"string Evaluation::getName()"<<endl;
		#endif
		return name;
	}
	
	void Evaluation::setName(string theName)
	{
		#ifdef DEBUG
		cout<<"void Evaluation::setName(string theName)"<<endl;
		#endif
		name=theName;
	}
	
	void Evaluation::input()
	{
		#ifdef DEBUG
		cout<<"void Evaluation::input()"<<endl;
		#endif
		cout<<"Saisissez le numéro du semestre : ";
		cin>>semestre;
		cin.ignore(1);
		cout<<"Saisissez la date de l'évaluation : ";
		getline(cin,dateEval);
		cout<<"Saisissez le nom de l'évaluation : ";
		getline(cin,name);
	}
	
	void Evaluation::display()
	{
		#ifdef DEBUG
		cout<<"void Evaluation::display()"<<endl;
		#endif
		cout<<"Semestre : "<<semestre
			<<"\tDate : "<<dateEval
			<<"\tNom : "<<name;
	}

	void Evaluation::addNote(Note theNote)
	{
		#ifdef DEBUG
		cout<<"void Evaluation::addNote(Note theNote)";
		#endif
		vectTheNote.push_back(theNote);
	}

    Evaluation::Evaluation(Section * pTheSectionEval)
    {
        pTheSection=pTheSectionEval;
    }
