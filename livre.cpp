#include "livre.hpp"
#include "media.hpp"



//Constructeurs
Livre::Livre(){
	nb_pages  = 96;
	collection = "LAROUSSE";
	titre     = "Dictionnaire";
	resume    = "Ce livre est un dictionnaire de francais.";

}

Livre::Livre(int _nb_pages, string _collection, string _titre, string _resume){
	nb_pages  = _nb_pages;
	collection = _collection;
	titre     = _titre;
	resume    = _resume;
}
	
		
//Destructeurs
Livre::~Livre(){
	//Rajouter des éléments si on alloue de la mémoire
}


//Fonctions
Livre::consultall_ressources(string _id){

}


Livre::consultparameters_ressources(string _id){

}


Livre::search_media(string _auteur, int _annee, int _public_media, int _type, string _id){

}


Livre::searchparameters_media(string _id){

}

//Setters
void Livre::set_nb_pages(int _nb_pages){
	nb_pages = _nb_pages;
}


void Livre::set_collection(string _collection){
	collection = _collection;
}


void Livre::set_titre(string _titre){
	titre = _titre;
}


void Livre::set_resume(string _resume){
	resume = _resume;
}

//Getters
int Livre::get_nb_pages(){
	return nb_pages;
}


string Livre::get_collection(){
	return collection;
}


string Livre::get_titre(){
	return titre;
}


string Livre::get_resume(){
	return resume;
}