#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int hora_a_inicial, hora_a_final;
	int hora_b_inicial, hora_b_final;
	
	/* Solicitar horários de reservas pessoa A e pessoa B */
	printf("Pessoa A\n");
	printf("Digite o horário inicial da sua reserva: ");
	scanf("%d", &hora_a_inicial);
	printf("Digite o horário final da sua reserva: ");
	scanf("%d", &hora_a_final);
	printf("\nPessoa B\n");
	printf("Digite o horário inicial da sua reserva: ");
	scanf("%d", &hora_b_inicial);
	printf("Digite o horário final da sua reserva: ");
	scanf("%d", &hora_b_final);
		
	/* Comparar horários e responder se é possível */
	if (hora_a_final >= hora_b_inicial){
		printf("Conflito de horário! Reserva não foi efetuada.\n");
	} else
		printf("Reservas efetuadas!");
}