#include <iostream>
#include <array>
#include "fonction_piles.h"

using namespace std;

int main() {
    std::array<int, taille_pile> pile{};
    int compteur = 0;

    int choix;
    int valeur;
    bool opreation_ok = false;

    std::cout << "Ce programme permet de manipuler une pile d'entiers." << std::endl;
    std::cout << std::endl;

    do {
        std::cout << "1 - Empiler" << std::endl;
        std::cout << "2 - Dépiler" << std::endl;
        std::cout << "3 - Consulter le sommet" << std::endl;
        std::cout << "4 - Modifier l'élément au sommet" << std::endl;
        std::cout << "5 - Vérifier si la pile est vide" << std::endl;
        std::cout << "6 - Afficher le nombre de valeurs" << std::endl;
        std::cout << "7 - Vider la pile" << std::endl;
        std::cout << "8 - Afficher toute la pile" << std::endl;
        std::cout << "0 - Quitter" << std::endl;

        std::cout << std::endl;

        std::cout << "choix : ";
        std::cin >> choix;

        switch (choix) {
            case 1:
                try {
                    std::cout << "valeur : ";
                    valeur = 0;
                    std::cin >> valeur;

                    push(pile, compteur,valeur);
                    if (opreation_ok) {
                        std::cout << "Valeur empilée." << std::endl;
                    }
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
            case 2:
                try {
                    pop(pile, compteur);
                    std::cout << "Valeur retiré : TO DO !!!" << std::endl;
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
            case 3:
                try {
                    valeur = top(pile, compteur);
                    std::cout << "Sommet : " << valeur << std::endl;
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
            case 4:
                try {
                    std::cin >> valeur;
                    top(pile, compteur) = valeur;
                    std::cout << "Valeur de remplacement : " << valeur << std::endl;
                    std::cout << "Valeur remplacée." << std::endl;
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
            case 5:
                bool resultat = empty(compteur);
                if (resultat) {
                    1 + 1;
                }
            }

    }while(choix != 0);

    return 0;
}