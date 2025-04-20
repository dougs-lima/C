#include <stdio.h>
int main(){
	float temperatura, resultado;
	char unid, unid2;
	printf("Digite a temperatura e a unidade: ");
	scanf("%f %c", &temperatura, &unid);
	fflush(stdin);
	if (unid == 'c' || unid == 'C' || unid == 'f' || unid == 'F' || unid == 'k' || unid == 'K'){
	printf("Digite a unidade para a qual quer a conversao: ");
	scanf("%c", &unid2);
	fflush(stdin);
	if (unid2 == 'c' || unid2 == 'C' || unid2 == 'f' || unid2 == 'F' || unid2 == 'k' || unid2 == 'K'){
		if (unid == 'c' || unid == 'C'){
			if (unid2 == 'f' || unid2 == 'F'){
				resultado = (temperatura*1.8) + 32;
				printf("%.1f C corresponde a %.1f F.", temperatura, resultado);
			} else {
				if (unid2 == 'k' || unid2 == 'K'){
					resultado = temperatura + 273.15;
					printf("%.1f C corresponde a %.2f K.", temperatura, resultado);
				}
			}
		} else
		if (unid == 'f' || unid == 'F'){
			if (unid2 == 'c' || unid2 == 'C'){
				resultado = (temperatura-32) * 5/9;
				printf("%.1f F corresponde a %.1f C", temperatura, resultado);
			} else {
			if (unid2 == 'k' || unid2 == 'K'){
					resultado = (temperatura+459.67)*5/9;
					printf("%.1f F corresponde a %.2f K.", temperatura, resultado);
				}
			}
		} else
		if (unid == 'k' || unid == 'K'){
			if (unid2 == 'c' || unid2 == 'C'){
				resultado = temperatura - 273.15;
				printf("%.2f K corresponde a %.1f C.", temperatura, resultado);			
			} else {
				if (unid2 == 'f' || unid2 == 'F'){
					resultado = (temperatura-273.15) * 9/5+32;
					printf("%.2f K corresponde a %.1f F.", temperatura, resultado);
				}
			}
		} 
	} else {
		printf("Unidade invalida!");
	}
	} else {
	printf("Unidade invalida!");
	}
}