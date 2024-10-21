#include<iostream>

int main () {
  int num1, num2;
  std::cin >> num1 >> num2;
  std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
  std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
  std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
  std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
  std::cout << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
  if (num1 != num2) {
    std::cout << num1 << " != " << num2 << std::endl;
    }
  else {
  std::cout << num1 << " = " << num2 << std::endl;
  }  
  return 0;
  }
