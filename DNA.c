//Pequeno trabalho proposto na disciplina de Algoritmos e Programação de Computadores I.
//O programa deve receber dois "DNA's" (sequência de caracteres de A a F), e identificar se suas características são iguais ou diferentes.
//Os DNA's são considerados iguais quando a quantidade de determinados caracteres é igual em ambos, independentemente da ordem digitada.
#include <stdio.h>

int main() {
    char dna1[12];
    char dna2[12]; 
    int testes, soma1 = 0, soma2 = 0;
    // atribuição de valor às variáveis
    int A = 54; 
    int B = 143; 
    int C = 456;
    int D = 711;
    int E = 989;
    int F = 1461;

    scanf("%d", &testes); //número de testes a serem feitos
    
    for (int x = 0; x < testes && testes > 0; x++){          //laço p/ rodar o programa de acordo com o nº de testes      
        getchar();
        scanf("%c%c%c%c%c%c%c%c%c%c%c%c", &dna1[0], &dna1[1], &dna1[2], &dna1[3], &dna1[4], &dna1[5], &dna1[6], &dna1[7], &dna1[8], &dna1[9], &dna1[10], &dna1[11]);
        getchar();
        scanf("%c%c%c%c%c%c%c%c%c%c%c%c", &dna2[0], &dna2[1], &dna2[2], &dna2[3], &dna2[4], &dna2[5], &dna2[6], &dna2[7], &dna2[8], &dna2[9], &dna2[10], &dna2[11]);
        
        for (int h = 0; h < 12; h++){
            if(dna1[h] == 'A'){
                dna1[h] = A;
            }
            else if(dna1[h] == 'B'){
                dna1[h] = B;
            }
            else if(dna1[h] == 'C'){
                dna1[h] = C;
            }
            else if(dna1[h] == 'D'){
                dna1[h] = D;
            }
            else if(dna1[h] == 'E'){
                dna1[h] = E;
            }
            else if(dna1[h] == 'F'){
                dna1[h] = F;
            }       
        }   
        for (int g = 0; g < 12; g++){
            if(dna2[g] == 'A'){
                dna2[g] = A;
            }
            else if(dna2[g] == 'B'){
                dna2[g] = B;
            }
            else if(dna2[g] == 'C'){
                dna2[g] = C;
            }
            else if(dna2[g] == 'D'){
                dna2[g] = D;
            }
            else if(dna2[g] == 'E'){
                dna2[g] = E;
            }
            else if(dna2[g] == 'F'){
                dna2[g] = F;
            }       
        }
        
        for (int i = 0; i < 12; i++) { //laço p/ percorrer e somar os valores do vetor dna1
            soma1 += dna1[i];
        }
        for (int j = 0; j < 12; j++) { //laço p/ percorrer e somar os valores do vetor dna2
            soma2 += dna2[j];
        }
            if (soma1 == soma2) {
                printf("Caracteristicas Iguais\n");
            }
            else {
                printf("Caracteristicas Diferentes\n");
            }                  
    soma1 = 0;
    soma2 = 0;
    }    
    
    return 0;
}