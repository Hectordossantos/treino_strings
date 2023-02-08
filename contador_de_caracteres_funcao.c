#include <stdio.h>
#include <string.h>
int main(){
char nome[25];
int tamanho_string;
printf("digite seu nome \n");
scanf("%s", nome);

printf("o tamanho da string é: %d", strlen(nome));
  
  return 0;
}
