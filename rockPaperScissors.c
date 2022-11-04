#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void portuguese() {
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

void english() {
	int escolhaJogador;
	int escolhaComputador;
	printf("*************************\n");
	printf("** PEDRA PAPEL TESOURA **\n");
	printf("*************************\n");

	printf("To choose Rock, press 1\n");
	printf("To choose Paper, press 2\n");
	printf("To choose Scissors, press 3\n");

	printf("Choose here: ");
	scanf("%d", &escolhaJogador);
	srand(time(NULL));
	escolhaComputador = rand() % 3;
	printf("\n");
	escolhaComputador+=1;

	//Se empatou ou não
	if (escolhaJogador == 1 && escolhaComputador == 1) {
		printf("Computer Choosed Rock\n");
		printf("Tied!\n");
		return 0;
	}
	else if (escolhaJogador == 2 && escolhaComputador == 2) {
		printf("Computer Choosed Paper\n");
		printf("Tied!\n");
		return 0;
	}
	else if (escolhaJogador == 3 && escolhaComputador == 3) {
		printf("Computer Choosed Scissors");
		printf("Tied!\n");
		return 0;
	}

	//Se ganhou ou não

	else if (escolhaJogador == 3 && escolhaComputador == 2) {
		printf("Computer Choosed Paper\n");
		printf("You Win!\n");
		return 0;
	}
	else if (escolhaJogador == 1 && escolhaComputador == 3) {
		printf("Computer Choosed Scissors");
		printf("You Win!\n");
		return 0;
	}
	else {
		printf("You Lose!\n");
	}
}
int main() {
	char language[2];
	printf("Se voce e brasileiro, escreva br e depois enter");
	printf("If you speak english, type us and press enter");
	scanf("%s", language);

	if (language == "br") {
		portuguese();
	}
	else if (language == "us") {
		english();
	}
}