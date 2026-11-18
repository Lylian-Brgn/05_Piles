//
// Created by lylia on 18.11.2026.
//

#include "fonction_piles.h"
#include <stdexcept>

bool push(std::array<int, taille_pile>& piles, int& compteur,int valeur){

    if (compteur == piles.size()) {
        throw std::overflow_error("Erreur : impossible d'empiler dans une pile pleine.");
        return false;
    }

    piles[compteur] = valeur;
    compteur++;
    return true;
}

bool pop(std::array<int, taille_pile>& piles, int& compteur) {

    if (compteur == 0) {
        throw std::underflow_error("Erreur : impossible de dépiler une pile vide.");
        return false;
    }

    piles[compteur] = 0;
    compteur--;
    return true;
}