#include<iostream>

int main() {
  int num1, num2;
  std::cin >> num1 >> num2;
  if (num2 != 0) {
  std::cout << (num1 / num2) << " " << (num1 % num2) << std::endl;
  }
}
