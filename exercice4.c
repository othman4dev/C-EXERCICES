#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    //this variable will store the 5 numbers
    int num ;
    //this variable will store the sum of the 5 numbers
    int somme = 0;
    scanf("Entrer le premier nombre : %d", &num);
    //some += num is like somme = somme + num
    //we add the number to the sum
    somme += num;
    scanf("Entrer le deuxieme nombre : %d", &num);
    somme += num;
    scanf("Entrer le troisieme nombre : %d", &num);
    somme += num;
    scanf("Entrer le quatrieme nombre : %d", &num);
    somme += num;
    scanf("Entrer le cinquieme nombre : %d", &num);
    somme += num;
    //we devide the sum by 5 to get the average (moyenne)
    somme = somme / 5;
    //z3ma rah ghat9ray had les commentaires hhhh
    printf("La moyenne des 5 nombres est : %d", somme);
}