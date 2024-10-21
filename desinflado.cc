#include<iostream> 

int main() {
  char letra;
  std::cin >> letra;
  std::cout << char(int(letra + 32)) << std::endl;
  return 0;
  }
