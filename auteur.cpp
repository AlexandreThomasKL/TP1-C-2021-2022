// Partie 1 : Création des classes
//Création de Auteur
//auteur.cpp

#include <string>
#include <iostream>
#include "auteur.h"

Auteur::Auteur(){

  _nomAuteur="";
  _prenomAuteur="";
  _dateAuteur="";
  _IDAuteur=0;

}

//getter
std::string Auteur::getNomAuteur(std::string nomAuteur) {
  return nomAuteur;
}
std::string Auteur::getPrenomAuteur(std::string prenomAuteur) {
  return prenomAuteur;
}
std::string Auteur::getDateAuteur(std::string dateAuteur) {
  return dateAuteur;
}
unsigned long int Auteur::getIDAuteur(unsigned long IDAuteur) {
  return IDAuteur;
}

//setter
void Auteur::setNomAuteur(std::string nomAuteur) {
  _nomAuteur = nomAuteur;
}
void Auteur::setPrenomAuteur(std::string prenomAuteur) {
  _prenomAuteur = prenomAuteur;
}
void Auteur::setDateAuteur(std::string dateAuteur) {
  _dateAuteur = dateAuteur;
}
void Auteur::setIDAuteur(unsigned long IDAuteur) {
  _IDAuteur = IDAuteur;
}