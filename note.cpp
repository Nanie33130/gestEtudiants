#include "note.h"


	Note::Note(Student * plEtudiant, float saNote)
	{
		#ifdef DEBUG
		cout<<"Note::Note(Student * plEtudiant, float saNote)"<<endl;
		#endif
		pTheStudent=plEtudiant;
		valeur=saNote;
	}