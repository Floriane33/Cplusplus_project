#ifndef LIVRE_H
#define LIVRE_H


#include "media.hpp"


using namespace std;


class Livre{
public:

	//Constructeurs
	Livre();
	Livre(int _nb_pages, string _collection, string _titre, string _resume);
	
		
	//Destructeurs
	~Livre();


	//Fonctions
	virtual consultall_ressources(string _id); //show_all
	virtual consultparameters_ressources(string _id);//show
	virtual search_media(string _auteur, int _annee, int _public_media, int _type, string _id);//Recherche un média au fur et à mesure
	virtual searchparameters_media(string _id);//Recherche les données d'un média spécifique

	//Setters
	void set_nb_pages(int);
	void set_collection(string);
	void set_titre(string);
	void set_resume(string);

	//Getters
	int get_nb_pages();
	string get_collection();
	string get_titre();
	string get_resume();
	

protected:
	int nb_pages;
	string collection;
	string titre;
	string resume;

	
private:

};


#endif