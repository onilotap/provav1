#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number(int min, int max) {
  return min + rand() % (max - min + 1);
}

int main () {
  srand(time(NULL));

  int portaPremiada, portaEscolhida, portaAbertaPeloApresentador, novaEscolha;

  portaPremiada = random_number(1,3);

  printf("Bem-vindo ao jogo Monty Hall!.\n");

  printf("atrás de uma das três portas há um prêmio, escolha uma porta.\n:");

  printf("escolha uma porta (1, 2 ou 3):");

  scanf("%d", &portaEscolhida);

  do {
    portaAbertaPeloApresentador = random_number(1,3);
  }
    while(portaAbertaPeloApresentador == portaPremiada || portaAbertaPeloApresentador == portaEscolhida);

  printf("o apresentador abriu a porta %d, que não contém o prêmio.\n", portaAbertaPeloApresentador);

  printf("você deseja trocar de porta? sim(1) ou não(2):");

  scanf("%d", &novaEscolha);

  if(novaEscolha==1) {
    for (int i = 1; i <= 3; i++){
      if(i != portaEscolhida && i != portaAbertaPeloApresentador) {
        portaEscolhida = i;
        break;
      }
    }
  f (portaEscolhida == portaPremiada) {
    printf("parabéns! você ganhou o prêmio!\n");
  } else{

    printf("infelizmente, você perdeu, o premio estava atrás da porta %d.\n", portaPremiada);
} 
  return 0;
}


