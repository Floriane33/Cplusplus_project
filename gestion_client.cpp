#include <vector>
//#incude<sstream>

#include "gestion_client.hpp"
//#include "media.hpp"

using namespace std;



//Constructeurs
Gestion_client::Gestion_client(){ //Premier livre enregistré dans la base de données

}


Gestion_client::Gestion_client(string _id){
	_id = "A01"; //Premier livre enregistré dans la base de données
}

		
//Destructeurs
Gestion_client::~Gestion_client(){
	//Aucun élément dynamique à supprimer pour l'instant
}


//Fonctions
Gestion_client::list(){ //Affichage du tout en bloc avec une condition à définir (cf sujet)

} 


Gestion_client::bye(){
	//Fermer proprement les allocations mémoires s'il y en a

	exit(0); //On ferme l'application 
}


Gestion_client::reload(){
	/*Permet de recharger le fichier contenant les données pour que l'appli
	soit utilisée par plusieurs utilisateurs. */
}


Gestion_client::consultall_ressources(string _id){ //show_all
	//Media* list1 = new Media();
	//list1.consultall_ressources(_id);
	//Media.consultall_ressources(_id); //On peut le faire ça?
	//delete list1;
} 


Gestion_client::consultparameters_ressources(string _id){ //show
	//Media.consultparameters_ressources(_id);
}


Gestion_client::search_media(string _auteur, int _annee, int _public_media, int _type, string _id){ //Recherche un média au fur et à mesure

}

Gestion_client::searchparameters_media(string _id){ //Recherche les données d'un média spécifique

} 
