#include <stdio.h>

int main(void)
{
    // variables pour le budget, les depenses, la depense totale et le solde restant
    int budget, depense;
    int total_depense = 0;
    int solde_restant;
    
    // Lecture de l'entrée utilisateur
    printf("Budget: ");
    scanf("%i", &budget);

    while (budget <= 0)
    {
        printf("Erreur: le budget doit etre strictement positif\n");
        printf("Budget: ");
        scanf("%i", &budget);
    }

    printf("Depense: ");
    scanf("%i", &depense);
    while (depense != 0)
    {
        if (depense > 0)
        {
            total_depense += depense;
        }
        else
        {
            printf("Erreur: la depense doit etre positive\n");
        }
        printf("Depense: ");
        scanf("%i", &depense);
    }

    solde_restant = budget - total_depense;
    
    // Afficher les dépenses totales et le solde restant
    printf("Depense totale: %i\nSolde restant: %i", total_depense, solde_restant);

    return 0;
}
