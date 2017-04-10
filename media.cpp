#include "media.hpp"
#include "livre.hpp"

using namespace std;

//Définition des constructeurs
Media::Media(){
	//Définit des données par défaut de chaque variable

	auteur       = "BENZONI";
	annee        = 2012;
	public_media = ADULTE;
	type         = DIVERTISSEMENT;
	identifier   = "A01";

	}

Media::Media(string _auteur, int _annee, int _public_media, int _type, string _identifier){
	/*On définit que l'on aura par défaut ce que l'on aura en paramètres lors
	de l'appel de ce constructeur. */

	auteur       = _auteur;
	annee        = _annee;
	public_media = _public_media;
	type         = _type;
	identifier   = _identifier;

}

//Définition des destructeurs
Media::~Media(){
	/*Pour l'instant on n'a rien car on n'a pas d'objet dynamique défini
	dans la classe donc on ne delete aucun objet mais il vaut mieux définir
	un déstructeur par défaut tout de même (par précautions, c'est conseillé). */
}


//Définition des fonctions utilisées dans la classe
Media::consultall_ressources(string _identifier){// show_all
	Livre *objet;
	objet->consultall_ressources(_identifier);
	delete objet;
}


Media::consultparameters_ressources(string _identifier){ //show

}


Media::search_media(string _auteur, int _annee, int _public_media, int _type, string _identifier){

}


Media::searchparameters_media(string _identifier){

}


//Définition des setters
void Media::set_auteur(string _auteur){
	auteur = _auteur;
}


void Media::set_annee(int _annee){
	annee = _annee;
}


void Media::set_public(int _public_media){
	public_media = _public_media;
}


void Media::set_type(int _type){
	type = _type;
}

void Media::set_identifier(string _identifier){
	identifier = _identifier;
}


//Définition des getters
string Media::get_auteur(){
	return auteur;
}


int Media::get_annee(){
	return annee;
}


int Media::get_public(){
	return public_media;
}


int Media::get_type(){
	return type;
}

string Media::get_identifier(){
	return identifier;
}
