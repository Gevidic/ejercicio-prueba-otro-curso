#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

int contadordepalabras(const char *frase) {
    int contador = 0, enPalabra = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (!isspace(frase[i]) && !enPalabra) {
            enPalabra = 1;
            contador++;
        } else if (isspace(frase[i])) {
            enPalabra = 0;
        }
    }
    return contador;
}

int caracterminimo(const char *frase) {
    int minLong = 256, longitud = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (!isspace(frase[i])) {
            longitud++;
        } else if (longitud > 0) {
            if (longitud < minLong) minLong = longitud;
            longitud = 0;
        }
    }
    if (longitud > 0 && longitud < minLong) minLong = longitud; // Última palabra
    return minLong;
}

int caractermaximo(const char *frase) {
    int maxLong = 0, longitud = 0;
    for (int i = 0; frase[i] != '\0'; i++) {
        if (!isspace(frase[i])) {
            longitud++;
        } else if (longitud > 0) {
            if (longitud > maxLong) maxLong = longitud;
            longitud = 0;
        }
    }
    if (longitud > maxLong) maxLong = longitud; // Última palabra
    return maxLong;
}
