#include <stdio.h>
#include <locale.h>

float soma(float n1, float n2){
	return n1 + n2;
}

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	float num1, num2,res;
	printf("Digite o primeiro n�mero : ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero : ");
	scanf("%f", &num2);
	
	res = soma(num1,num2);
	printf("A soma de %.2f e %.2f � : %.2f", num1,num2,res);
	
	return 0;
}
