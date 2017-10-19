CC=g++
CFLAGS= -W -Wall -ansi -pedantic
LDFLAGS=
EXEC=GestEtudiant

all:$(EXEC)
GestEtudiant: appli.o bulletin.o discipline.o evaluation.o main.o note.o section.o student.o
	$(CC) -o GestEtudiant appli.o bulletin.o discipline.o evaluation.o main.o note.o section.o student.o $(CFLAGS) 

appli.o: appli.cpp
		$(CC) -o appli.o -c appli.cpp $(CFLAGS)

bulletin.o : bulletin.cpp
	$(CC) -o bulletin.o -c bulletin.cpp $(CFLAGS)

discipline.o : discipline.cpp
	$(CC) -o discipline.o -c discipline.cpp $(CFLAGS)

evaluation.o : evaluation.cpp
	$(CC) -o evaluation.o -c evaluation.cpp $(CFLAGS)

main.o : main.cpp
	$(CC) -o main.o -c main.cpp $(CFLAGS)

note.o : note.cpp
	$(CC) -o note.o -c note.cpp $(CFLAGS)

section.o : section.cpp
	$(CC) -o section.o -c section.cpp $(CFLAGS)

student.o : student.cpp
	$(CC) -o student.o -c student.cpp $(CFLAGS)



