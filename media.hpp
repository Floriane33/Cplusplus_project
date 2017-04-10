#ifndef MEDIA_H
#define MEDIA_H


#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>


//Définitions des variables pour le type de médias
#define SCIENCE_FICTION 1
#define ANIMATION 2
#define HISTORIQUE 3
#define CULTUREL 4
#define DIVERTISSEMENT 5


//Définition des variables pour le type de public du média recherché
#define ENFANT 1
#define ADOLESCENT 2
#define ADULTE 3


using namespace std;

class Media{
public:

	//Constructeurs
	Media();

	Media(string _auteur, int _annee, int _public_media, int _type, string _identifier);
	
	//Destructeurs
	~Media();
	//Nécessité d'autres destructeurs ?

	//Fonctions
	virtual consultall_ressources(string _identifier); //show_all
	virtual consultparameters_ressources(string _identifier);//show
	virtual search_media(string _auteur, int _annee, int _public_media, int _type, string _identifier);
	virtual searchparameters_media(string _identifier);

	//Setters
	void set_auteur(string);
	void set_annee(int);
	void set_public(int);
	void set_type(int);
	void set_identifier(string);

	//Getters
	string get_auteur();
	int get_annee();
	int get_public();
	int get_type();
	string get_identifier();

protected:
	string auteur;
	int annee;
	int public_media;
	int type;
	string identifier;

private:

};




#endif