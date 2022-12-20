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
	printf("CALCULADORA DE FATORIAL COM FUNÇÃO : \n");
	printf("Digite um número : ");
	scanf("%d", &num);
	
	res= fatorial(num);
	printf("O fatorial de %d É : %d", num, res);

	return 0;
}
