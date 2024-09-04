#include <iostream>
#include <stdlib.h>
#include <stdio.h> //ler e imprime
#include <stdlib.h> //operacoes matematicas etc
#include <locale.h>
#include <windows.h> 

#include <time.h> // NUMEROS ALEATORIOS

using namespace std;

void soma0a10(){
  int i = 0;
  int soma = 0;

  for (i=0; i<=10; i++){
    soma = soma + i;
    printf("%d ", soma);
  }
  printf("FINAL: %d", soma);
  
}

void pares(){
  int i;
  int x = 10;
  printf("Escolha um número: ");
  scanf("%d", &i);

  while (x + 2 <= i) {
    x = x + 2;
    printf("%d ", x);
  }

}

void pares2(){
  int i;
  int x = 10;
  printf("Escolha um número: ");
  scanf("%d", &i);

  while (x <= i){

    if (x % 2 == 0){
      printf("%d ", x);
    }

    x = x + 1;
  }
}

void usandoSwitch() {
  int opcao;
  while (1){
    printf("1 - Café\n2 - Capuccino\n3 - Suco\n4 - Exit\n");
    cout << "Escolha uma: " << endl;

    cin >> opcao;

    switch(opcao){
      case 1:
        cout << "Cafezinho" << endl;
        break;
      case 2:
        cout << "Capuccino" << endl;
        break;
      case 3:
        cout << "Suquinho" << endl;
        break;
      case 4:
        cout << "Cabou" << endl;
        exit(0);
      default:
        cout << "INVALIDO" << endl;
        break;
    }
  }


}

void condicionais(){
  int idade = 19;
  int idade2 = 4;

  if (idade > 10 && idade2 > 10){
    printf("As idades são maiores que 10");
  } else {
    printf("As idades não são maiores que 10");
  }

  if (idade == 18 || idade == 19){
    printf("Jovem");
  }
}

void media() {
    float nota1, nota2;
    float media;

    // Solicita a primeira nota
    cout << "Digite o valor da primeira nota: " << endl;
    cin >> nota1;

    // Solicita a segunda nota
    cout << "Digite o valor da segunda nota: ";
    cin >> nota2;

    // Calcula a média
    media = (nota1 + nota2) / 2;

    // Exibe a nota final
    cout << "Nota final: " << media << endl;
}

int second(){
    int a = 5;
    int b = 6;
    printf("\nO valor deles é: %d %d: ", a,b); 

    return 0;
}

void inicio(){
   // Calcula a média
    // media = (nota1 + nota2) / 2;

    // Exibe a nota final
    // cout << "Nota final: " << media << endl;

    // int b = 8;
    // int valor;
    // cout << "Hello world!" << endl;
    // cout << "Digite um valor: ";
    // cin >> valor;
    // cout << "Você digitou: " << valor << "\n"<< endl;
    // printf("Valor de d: %d", b);
    // printf("\nA soma é: %d", valor + b);
    // printf("\nDigite algo: ");
    // scanf("%d", &b); //escaneia um valor inteiro para  a variavel b.
    // printf("O novo valor de b é: %d", b);
    // char letra = 'e';
    // printf("\n\nValor de letra %c: ", letra);
    // fflush(stdin);
    // scanf("%c", &letra);
    // printf("\nNovo valor de letra: %c", letra);    
}

void EvenOrOdd(){
  int value;
  int x;

  printf("Digite um valor: ");
  scanf("%d", &value);

  x = value % 2;

  if (x == 0){
    printf("PAR!");
  } else {
    printf("IMPAR");
  }

}

int main1() { //sempre que for int, deve ter um retorno
  printf("oi");
  return 0;
}

void main2() { //sempre que for void, nao deve ter um retorno
  printf("oi");
}