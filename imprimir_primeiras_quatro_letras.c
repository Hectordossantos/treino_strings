#include <stdio.h>

int main(){

char string[50];
char string2[6];

printf("digite seu nome \n");
scanf("%s", string);

   int cont;
    for(cont = 0; cont < 4; cont ++){   
        string2[cont] = string[cont];
    }
    printf("nome %s \n", string2);
  
    return 0;
}
