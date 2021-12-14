//Partie 1 : Création des classes
//Création de Lecteur
//lecteur.cpp

#include <string>
#include <iostream>
#include <sstream>
#include "lecteur.h"

// initialization sans paramètre
Lecteur::Lecteur(){
  _identifiant="";
  _nom="";
  _prenom="";
  _liste={""};
}

//initialisation avec paramètre 
Lecteur::Lecteur(std::string nom , std::string prenom , std::string identifiant , std::vector<std::string> liste){
  _nom = nom;
  _prenom = prenom;
  _identifiant = identifiant;
  _liste = liste;
}

//setter
void Lecteur::setNom() { // saisir "nom"
  std::string nom;
  std::cout << "saisir nom : " << std::flush;
  std::cin >> nom;
  this-> _nom = nom;
}
void Lecteur::setPrenom() {// saisir "prenom"
  std::string prenom;
  std::cout << "saisir prenom : " << std::flush;
  std::cin >> prenom;
  this -> _prenom = prenom;
  }
void Lecteur::setID() {// saisir "identifiant"
  std::string identifiant;
  std::cout << "saisir identifiant : " << std::flush;
  std::cin >> identifiant;
  this-> _identifiant = identifiant;
  }
void Lecteur::setListe() {// saisir "liste"
  std::vector<std::string> liste;
  std::string terme = "";
  int i = 1;
  while (terme != "00"){
    std::cout << "saisir ISBN n° " << i++ << " ('00' pour terminer) : " << std::flush;
    std::cin >> terme;
    liste.push_back(terme);
  }
  liste.pop_back(); // enlève "00" de la liste
  this-> _liste = liste;
}

//getter
std::string Lecteur::getNom() {// renvoie "nom" en type string
  std::string nom = _nom;
  return nom;
}
std::string Lecteur::getPrenom() {// renvoie "prenom" en type string
  std::string prenom = _prenom;
  return prenom;
}
std::string Lecteur::getID() {// renvoie "identifiant" en type string
  std::string identifiant = _identifiant;
  return identifiant;
}
std::string Lecteur::getListe() {           // renvoie l'enseble de "liste" en type string par l'operateur ss
  std::vector<std::string> liste = _liste;
  std::stringstream ss;
  for(int i = 0 ; i < liste.size() ; i++ ){ //l'opérateur "ss" va ajouter les termes en string pour formé une chaine de string
    ss << " - ";
    ss << liste.at(i);
  }
  return ss.str();
}

//fonction

// ajoute un ISBN à la liste 
  void Lecteur::addISBNtoListe(std::string ISBN){
  std::vector<std::string> liste = _liste;
  liste.push_back(ISBN);
  this-> _liste = liste;
  }

