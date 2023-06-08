#include<iostream>

int prime_number(long int a);

int main(){
  long int a = 600851475143;
  prime_number(a);

  return 0;
}


int prime_number(long int a){
  long int count = 0;
  for(long int i = 2; i < a+1; i++){
    for(long int j = 1; j < i+1; j++){
      if(i%j == 0)
	count ++;
      }
    if(count == 2 and a%i==0){
      std::cout << "The number: "<< i << " is a prime number"<<std::endl;
    }
    count = 0;
  }
  return 0;
}
