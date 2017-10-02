/*
 * Simulador de scheduler - EA879
 * Henrique Miyamoto - RA 169614
 */

#include <stdio.h>

int main() {
  int a[5];
  int n;
  int flag;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  // A cada iteracao do scheduler
  for (int i=1; i<n+1; i++) {
  	flag = 0;
  	// Verifica cada temporizador
  	for (int j=0; j<5; j++){
  		//Se o j-esimo temporizador ira executar, imprime 'j'
  		if(i%a[j] == 0){
  			printf("%d",j);
  			flag = 1;
  		}
  	}
  	//Se nenhum temporizador foi executado, imprime '-'
  	if(flag == 0)
  		printf("-");
  	printf("\n");
  }

  return 0;
}