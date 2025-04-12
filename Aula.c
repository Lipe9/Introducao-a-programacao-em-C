#include <stdio.h>
#include <stdlib.h>

int main() {
/* Q3

	float n1, n2, media;
	printf("Digite um número:");
	scanf("%f", &n1);
	printf("Digite outro número:");
	scanf("%f", &n2);
	media = (n1 + n2) / 2;
	printf("Media: %f", media);	
	return 0;
	
*//* Q4

    int n1, n2, div;
	printf("Digite um número:");
	scanf("%d", &n1);
	printf("Digite outro número:");
	scanf("%d", &n2);
	div = n1 / n2;
	printf("Divisão: %d", div);	
	return 0;
	
*//* Q5

    int idade;
    printf("Digite sua idade:");
    scanf("%d", &idade);
    printf("Você tem %d anos", idade);
    return 0;
    
*//* Q6

    int dn, da , r;
    printf("Digite ano do seu nascimento:");
    scanf("%d", &dn);
    printf("Digite ano atual:");
    scanf("%d", &da);
    r = da - dn;
    printf("Você tem %d anos", r);
    return 0;
    
*//* Q7

    float celsius, fahrenheit;
    printf("Digite a temperatura em Celsius:");
    scanf("%f", &celsius);
    fahrenheit = 180 * (celsius + 32) / 100;
    printf("A sua temperatura em fahrenheit: %.2f", fahrenheit );
    return 0;
    
*//* Q8

    float peso, engordar , emagrecer;
	printf("Digite seu peso:");
	scanf("%f", &peso);
	engordar = peso + (peso * 0.15);
	emagrecer = peso - (peso * 0.20);
	printf("A - Engordar: %2.f\n", engordar);
	printf("B - Emagrecer: %2.f", emagrecer);
	return 0;
	
*//* Q9

    float nota1 , nota2, media;
    printf("Digite uma nota:");
    scanf("%f", &nota1);
    printf("Digite outra nota:");
    scanf("%f", &nota2);
    media = (nota1 * 2 + nota2 *3) / (2 + 3);
    printf("Sua media: %.2f", media);
    return 0;

*//* Q10

    float metros, centimetros, milimetros;
    printf("Digite um valor em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    milimetros = metros * 1000;
    printf("centimetros: %.2f cm\n ", centimetros);
    printf("milimetros: %.2f mm", milimetros);
    return 0;	
	
}

