//
// Created by lylia on 18.11.2026.
//

#ifndef INC_05_PILES_FONCTION_PILES_H
#define INC_05_PILES_FONCTION_PILES_H
#include <array>
const int taille_pile = 5;

void push(std::array<int, taille_pile>& piles, int& compteur,int valeur);
int pop(std::array<int, taille_pile>& piles, int& compteur);


bool empty(int compteur);

bool clear(std::array<int, 5>& pile, int& compteur);

int size(int compteur);

int& top(std::array<int, 5>& pile, int& compteur);


#endif //INC_05_PILES_FONCTION_PILES_H
