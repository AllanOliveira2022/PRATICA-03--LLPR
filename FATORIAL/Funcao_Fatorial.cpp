#include <stdio.h>
#include <locale.h>

int fatorial(int n){
	int fat=1;
	for(int i= n; i > 1; i--){
		fat = fat * i;
		
	}
	return fat;
}
int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int num,res;
	printf("CALCULADORA DE FATORIAL COM FUN��O : \n");
	printf("Digite um n�mero : ");
	scanf("%d", &num);
	
	res= fatorial(num);
	printf("O fatorial de %d � : %d", num, res);

	return 0;
}
