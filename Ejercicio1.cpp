/**********************************************

Autor: Antonio Guerrero Hernandez
Materia: Lenguajes de Programación I
Actividad 1: Determinar mayoria de edad en C++
Fecha: Jueves 17 de Abril de 2025

***********************************************/  

//Llamada a la libreria estandar 
#include <iostream>

//Se define funcion main 
 int main ()
 {
   //Se define la variable edad como tipo entero 
  int edad;
  //Se imprime el texto para solicitar que el usuario ingrese la edad 
  std::cout << "Ingrese su edad: ";
  //Se asigna el valor ingresado a la variable edad 
  std::cin >> edad;

  //Si el valor de la edad es mayor o igual a 18 se imprime el texto Usted es mayor de edad
  if (edad >=18 ) {
     std::cout << "Usted es mayor de edad." << std::endl;
  }
  //En caso de que el valor de edad no sea mayor ni tampoco igual a 18 se imprime el texto Usted es menor de edad
  else {
     std::cout << "Usted es menor de edad." << std::endl;
  }
  //Se indica el fin del programa 
   return 0;
 }