#include <iostream>

int sum(int n){
  int total = 0;
  for(int i = 0; i<= n; i++){
    total += i;
  }
  return total;
}

int main(){
  int n;
  std::cout << "Enter a #: ";
  std::cin >> n;
  std::cout <<"The sum of #'s from 1 to " << n << " is " << sum(n) << std::endl;
  return 0;
}
