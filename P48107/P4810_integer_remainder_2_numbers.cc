/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @author Álvaro Luis González
 * @date 
 * @brief El programa calcula el cociente y el resto de 2 numeros dados 
 * @bug No hay bugs desconocidos
 */

#include<iostream>

int main() {
  int num1, num2;
  std::cin >> num1 >> num2;
  if (num2 != 0) {
  std::cout << (num1 / num2) << " " << (num1 % num2) << std::endl;
  }
}
