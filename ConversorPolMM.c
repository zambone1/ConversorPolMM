#include <stdio.h>
#include <locale.h>

int main(){

float b, c;

setlocale(LC_ALL, "Portuguese")

printf("Conversor de medidas funcionará de polegadas para milímetros! \r");
getchar();
printf("\7 \a");

printf("Digite a medida em polegadas para conversão: ");
scanf("%f", &b);

c = b * 25.4;

printf("O resultado é: %f mm", c);

}
