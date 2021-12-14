//Partie 1 : Création des classes
//Création de Lecteur
//lecteur.h

#ifndef LECTEUR_H
#define LECTEUR_H
#include <string>
#include <vector>

class Lecteur {

public:
  //initialisation sans paramètre
Lecteur();

  //initialisation avec paramètre 
Lecteur(std::string nom , std::string prenom , std::string identifiant , std::vector<std::string> liste);

  //getter
std::string getNom();
std::string getPrenom();
std::string getID();
std::string getListe();

  //setter
void setNom();
void setPrenom();
void setID();
void setListe();

  //fonction
void addISBNtoListe (std::string ISBN);

private:

  std::string _identifiant;
  std::string _nom;
  std::string _prenom;
  std::vector<std::string> _liste;

};
  
#endif // LECTEUR_H