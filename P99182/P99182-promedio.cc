/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @author Álvaro Luis González
 * @date 21/10/24
 * @brief El programa calcula el promedio de 2 numeros dados 
 * @bug No hay bugs desconocidos
 */

#include<iostream>

int main () {
  float num1, num2;
  
  std::cin >> num1 >> num2;
  if (1000 > num1 && num2 > -1000) {
    std::cout << (num1 + num2) / 2 << std::endl;
  }
  return 0;
}
