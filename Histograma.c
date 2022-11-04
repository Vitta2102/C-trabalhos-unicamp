//Programa para ler um texto e contar dígitos, caracteres maiúsculos e minúsculos.
//A saída é apresentada no formato do histograma, com a quantidade das respectivas letras e dígitos.
#include <stdio.h>
#include <string.h>
#define TAM 1002

void textao(char letra, char texto[TAM], int i){
    char letrao[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '\0'};
    int x;
    int Nletras;
    float Nletrao = 0;

    Nletras = strlen(texto) - 1;

    for(x = 0; x < Nletras; x++){
        if(texto[x] == letrao[i]){
            Nletrao += 1;
        }
    }
    
    printf("%c: ", letra);

    for(x = 0; x < Nletrao; x++){
        printf("*");
    }
    printf(" (%.0f - %.2f)\n", Nletrao, (Nletrao/Nletras));
    
    return 0;
}
void textinho(char letra, char texto[TAM], int i){
    char letrinha[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    int x;
    int Nletras;
    float Nletrinha = 0;

    Nletras = strlen(texto) - 1;

    for(x = 0; x < Nletras; x++){
        if(texto[x] == letrinha[i]){
            Nletrinha += 1;
        }
    }
    
    printf("%c: ", letra);

    for(x = 0; x < Nletrinha; x++){
        printf("*");
    }
    printf(" (%.0f - %.2f)\n", Nletrinha, (Nletrinha/Nletras));
    
    return 0;
}
void numbers(char letra, char texto[TAM], int i){
    char number[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\0'};
    int x;
    int Nletras;
    float Nnumber = 0;

    Nletras = strlen(texto) - 1;

    for(x = 0; x < Nletras; x++){
        if(texto[x] == number[i]){
            Nnumber += 1;
        }
    }
    
    printf("%c: ", letra);

    for(x = 0; x < Nnumber; x++){
        printf("*");
    }
    printf(" (%.0f - %.2f)\n", Nnumber, (Nnumber/Nletras));
    
    return 0;
}

int main(){
    char texto[TAM];
    char letrinha;
    char letrao;
    char number;
    int x;

    fgets(texto, TAM, stdin);
    
    printf("Caracteres Maiusculos: \n");
        for(letrao = 65, x = 0; letrao < 91; letrao++, x++){
            textao(letrao, texto, x);
        }

    printf("\nCaracteres Minusculos: \n");
        for(letrinha = 97, x = 0; letrinha < 123; letrinha++, x++){
            textinho(letrinha, texto, x);
        }
    
    printf("\nDigitos: \n");
        for(number = 48, x = 0; number < 58; number++, x++){
            numbers(number, texto, x);
        }

    
    return 0;
}