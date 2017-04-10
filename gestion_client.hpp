#ifndef GESTION_CLIENT_H
#define GESTION_CLIENT_H


#include <string>
#include <fstream>
#include <iostream>
#include <stdlib.h>

#include "media.hpp"


using namespace std;


class Gestion_client{
public:

	//Constructeurs
	Gestion_client();
	Gestion_client(string _id);

		
	//Destructeurs
	~Gestion_client();


	//Fonctions
	list(); //Affichage du tout en bloc
	bye();
	reload();
	virtual consultall_ressources(string _id); //show_all
	virtual consultparameters_ressources(string _id);//show
	search_media(string _auteur, int _annee, int _public_media, int _type, string _id);//Recherche un média au fur et à mesure
	searchparameters_media(string _id);//Recherche les données d'un média spécifique

	//Setters
	
	//Getters
	

protected:
	//vector<Media*> list; //Vecteur spécifique pour les fonctions list
	//vector<Media*> search; //Vecteur spécifique pour les fonction search (de recherches)
	//Problèmes avec le vecteur mais je ne sais pas pourquoi....

	string id; //Identificateur d'un média

private:

};




#endif