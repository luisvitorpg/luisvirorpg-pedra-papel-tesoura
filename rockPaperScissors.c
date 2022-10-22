#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int escolhaJogador;
	int escolhaComputador;
	printf("*************************\n");
	printf("** PEDRA PAPEL TESOURA **\n");
	printf("*************************\n");

	printf("Para escolher Pedra, aperte 1\n");
	printf("Para escolher Papel, aperte 2\n");
	printf("Para escolher Tesoura, aperte 3\n");

	printf("Escolha aqui: ");
	scanf("%d", &escolhaJogador);
	srand(time(NULL));
	escolhaComputador = rand() % 3;
	printf("\n");
	escolhaComputador+=1;

	//Se empatou ou não
	if (escolhaJogador == 1 && escolhaComputador == 1) {
		printf("Computador escolheu Pedra\n");
		printf("Empatou!\n");
		return 0;
	}
	else if (escolhaJogador == 2 && escolhaComputador == 2) {
		printf("Computador escolheu Papel\n");
		printf("Empatou!\n");
		return 0;
	}
	else if (escolhaJogador == 3 && escolhaComputador == 3) {
		printf("Computador escolheu Tesoura\n");
		printf("Empatou!\n");
		return 0;
	}

	//Se ganhou ou não

	else if (escolhaJogador == 3 && escolhaComputador == 2) {
		printf("Computador escolheu Papel\n");
		printf("Ganhou!\n");
		return 0;
	}
	else if (escolhaJogador == 1 && escolhaComputador == 3) {
		printf("Computador escolheu Tesoura\n");
		printf("Ganhou!\n");
		return 0;
	}
	else {
		printf("Perdeu!\n");
	}
}