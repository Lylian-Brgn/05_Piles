//
// Created by lylia on 18.11.2026.
//

#include "fonction_piles.h"
#include <array>
#include <stdexcept>
#include <iostream>

void push(std::array<int, taille_pile>& piles, int& compteur,int valeur){

    if (compteur == piles.size()) {
        throw std::overflow_error("Erreur : impossible d'empiler dans une pile pleine.");
    }

    piles[compteur - 1] = valeur;
    compteur++;
}

int pop(std::array<int, taille_pile>& piles, int& compteur) {
    if (compteur == 0) {
        throw std::underflow_error("Erreur : impossible de dépiler une pile vide.");
    }

    int ancienne_valeur = piles[compteur - 1];
    piles[compteur - 1] = 0;
    compteur--;
    return ancienne_valeur;
}

bool empty(int compteur) {
    return compteur == 0;
}

int size(int compteur) {
    return compteur;
}

bool clear(std::array<int, 5>& pile, int& compteur) {
    pile = {};
    compteur = 0;
    return true;
}

int& top(std::array<int, 5>& pile, int& compteur) {
    return pile[compteur - 1];
}

void afficher_pile(std::array<int, 5>& pile, int& compteur) {
    if (compteur == 0) {
        std::cout << "La pile est vide." << std::endl;
    } else if (compteur == 1) {
        std::cout << "Sommet / Fond -> " << pile[compteur - 1] << std::endl;
    } else {
        std::cout << "Sommet -> ";
        for (size_t i = 0; i < compteur; i++) {
            std::cout << pile[i] << std::endl;
            if (i == pile.size() - 1) {
                std::cout << "Fond -> " << pile[compteur - 1] << std::endl;
            }
        }
    }
}