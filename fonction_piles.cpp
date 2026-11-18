//
// Created by lylia on 18.11.2026.
//

#include "fonction_piles.h"
#include <array>
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

bool empty(int compteur) {
    return compteur == 0;
}

int size(int compteur) {
    return compteur;
}

void clear(std::array<int, 5>& pile, int& compteur) {
    pile = {};
    compteur = 0;
}

int& top(std::array<int, 5>& pile, int& compteur) {
    return pile[compteur - 1];
}