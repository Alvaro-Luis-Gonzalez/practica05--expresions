/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 
 * @author Álvaro Luis González
 * @date El programa convierte los años, dias, horas, minutos y segundos dados en segundos
 * @brief El programa 
 * @bug No hay bugs desconocidos
 */

#include<iostream>

int main() {
  int year, day, hour, minute, second;
  std::cin >> year >> day >> hour >> minute >> second;
  long long int año = year*365*86400;
  long long int dia = day*86400;
  long long int hora = hour*3600;
  long long int min = minute*60;
  long long int seg = second;
  std::cout << año + dia + hora + min + seg << std::endl;
}

