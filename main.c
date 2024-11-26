//desarrollar un programa que me permita contar el número de palabras de una frase y el número de caracteres de la palabra mas pequeña o de la más grande. 
#include <stdio.h>
#include "funciones.h"

int main(int argc, char const *argv[]){

char frase[256];
printf("Escribe una frase: ");
fgets(frase, sizeof(frase), stdin); // sirve para leer la frase

int numpalabras = contadordepalabras(frase);
int caractermax = caractermaximo(frase);
int caractermin = caracterminimo(frase);


printf("Numero de palabras: %d\n", numpalabras);
printf("Longitud de la palabra mas chiquita: %d\n", caractermin);
printf("Longitud de la palabra mas grande: %d\n", caractermax);



 return 0;
}
