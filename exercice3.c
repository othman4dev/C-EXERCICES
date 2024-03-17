#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b, c;
    //we scan the values of a and b
    scanf("Entrer la premiere variable : %d ", &a);
    scanf("Entrer la deuxieme variable : %d ", &b);
    //here we will swap the values of a and b using c as a temporary variable
    c = a;
    a = b;
    b = c;
    printf("Les deux variabiables ont ete permuter");

    printf("Apres permutation des variable a = %d , b = %d", a , b);
}