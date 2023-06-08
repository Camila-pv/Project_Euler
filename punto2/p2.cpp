#include<iostream>


int main(){
  //a,b variables iniciales 
  int a = 1;
  int b = 2;
  // c = a+b
  int c = 0;
  // contador de la suma de numeros pares, empieza en 2 porque mas adelante no se cuenta b = 2
  int tot = 2;

  //while hasta que c sea menor que 4000000 
  while(c < 4000000){
    //se redefinen las variables 
    c = a+b;
    a = b;
    b = c;
    //Se comptuba si cumple la desigualdad y si es par para sumarlo al contador
    if(a < 4000000 and b < 4000000 and b%2 == 0){
	tot += b;
    }    
  }
  std::cout << " TOTAL = "<< tot << std::endl;
  return 0;
}
