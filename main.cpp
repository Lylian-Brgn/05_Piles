#include <iostream>
#include <array>
#include "fonction_piles.h"

using namespace std;

int main() {
    std::array<int, taille_pile> pile{};
    int compteur = 0;

    int choix;
    int valeur;

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

                    std::cout << "Valeur empilée." << std::endl;

                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
                break;
            case 2:
                try {
                    int tmp = pop(pile, compteur);
                    std::cout << "Valeur retiré : " << tmp << std::endl;
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
                break;
            case 3:
                try {
                    valeur = top(pile, compteur);
                    if (valeur == 0 && compteur == 0) {
                        std::cout << "La pile est vide." << std::endl;
                        break;
                    }
                    std::cout << "Sommet : " << valeur << std::endl;
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
                break;
            case 4:
                if (compteur == 0) {
                    std::cout << "La pile est vide." << std::endl;
                    break;
                }
                try {
                    std::cout << "Valeur de remplacement : ";
                    std::cin >> valeur;
                    top(pile, compteur) = valeur;
                    std::cout << "Valeur remplacée." << std::endl;
                }catch (std::exception& e) {
                    std::cout << e.what() << std::endl;
                }
                break;
            case 5: {
                bool resultat = empty(compteur);
                if (resultat) {
                    std::cout << "La pile est vide." << std::endl;
                } else {
                    std::cout << "La pile n'est pas vide." << std::endl;
                }
                break;
            }
            case 6:
                std::cout << "Nombre de valeurs : " << compteur << std::endl;
                break;
            case 7:
                clear(pile, compteur);
                std::cout << "Pile vidée." << std::endl;
                break;
            case 8:
                    afficher_pile(pile, compteur);
                break;
            case 0:
                std::cout << "Fin de programme." << std::endl;
                break;
            default:
                std::cout << "Sélectionnez un élément existant de la liste" << std::endl;
                break;
        }
    }while(choix != 0);

    return 0;
}