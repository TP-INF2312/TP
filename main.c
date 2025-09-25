#include <stdio.h>

int main() {

   int n, i, estTrie = 1;  // estTrie = 1 signifie vrai au départ

printf("Entrez la taille du tableau : ");

   scanf("%d", &n);

 int tab[n];

printf("Entrez les elements du tableau :\n");

   for (i = 0; i < n; i++) {

       scanf("%d", &tab[i]);

   }

   for (i = 0; i < n - 1; i++) {

       if (tab[i] > tab[i + 1]) {

           estTrie = 0;  

           break;    

       }

   }

    if (estTrie == 1) {

       printf(" Le tableau est trie en ordre croissant.\n");

   } else {

       printf(" Le tableau n'est pas trie.\n");

   }

 

   return 0;

}
