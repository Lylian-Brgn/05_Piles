//
// Created by lylia on 18.11.2026.
//

#include "fonction_piles.h"
#include <array>

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
