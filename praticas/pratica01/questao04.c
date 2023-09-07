/*Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%*/

#include <stdio.h>
 #define ICMS 0.17f;
 #define COFINS 0.076f;
 #define PIS_PASEP O.0165f;

 int main(){
   float preco_produto = 1400.0f;
   
   float icms = preco_produto * ICMS;
   float pispasep = preco_produto * PIS_PASEP;
   float confins = preco_produto * COFINS;
   float preco_final = (1 + ICMS + PIS_PASEP + CONFINS ) * preco_produto;

    printf("O preco final do produto é %f\n", preco_final);
    printf("O valor do ICMS é %f\n", icms);
    printf("O valor do CONFINS é %f\n", confins);
    printf("O valor do PIS_PASEP é %f\n", pispasep);
   
   return 0;
 }