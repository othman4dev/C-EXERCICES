#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num ;
    scanf("Entrer un nombre de 4 degit : %d", &num);
    if (num < 1000 || num > 9999)
    {
        printf("Le nombre n'est pas de 4 degit");
        return 1;
    }

    //get the first number like : 2019  we need the 2
    int a = num / 1000;
    //get the second number like : 2019  we need the 0
    int b = num / 100 - (a*10);
    //get the third number like : 2019  we need the 1
    int c = num / 10 - (b*10) - (a*100);
    //get the fourth number like : 2019  we need the 9
    int d = num / 1 - (c*10) - (b*100) - (a*1000);

    //we will write the equation under the format of d*10^0 + c*10^1 + b*10^2 + a*10^3
    // in the case of 2019 : 9 + 1*10^1 + 0*10^2 + 2*10^3

    printf( " The number %d sera affiche sous la forme : %d + %d*10 + %d*10^2 + %d*10^3",num , d , c , b , a);
}