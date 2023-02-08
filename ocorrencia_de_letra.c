#include <stdio.h>
#include <string.h>
int main(void){

char p1[50], *arm;

printf("digite uma palavra");
scanf("%s", p1);

arm = strchr(p1 , 'a');

printf("a palavra é %s e ela possui o caractere %c", p1, *arm);
}