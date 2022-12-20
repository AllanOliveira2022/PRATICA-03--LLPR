#include <stdio.h>
#include <locale.h>

char* testarNumero(int n){
	if(n >= 0){
		return "Falso";
	}
	return "Verdadeiro";
} 

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int num;
	printf("Digite um número : ");
	scanf("%d", &num);
	
	char* res= testarNumero(num);
	
	
	printf("O número é Negativo ? \n");
	printf("%s", res);
	return 0;
}
