#include <stdio.h>

int main(){
int receptor;
char string[50];


printf("digite seu nome \n");
scanf("%s", &string);

int i = 0;
while (string[i] != '\0'){
    i++;
}
printf("possui %i letras", i);


return 0;

}
