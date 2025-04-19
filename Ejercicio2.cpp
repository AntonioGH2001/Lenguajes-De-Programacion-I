/**********************************************

Autor: Antonio Guerrero Hernandez
Materia: Lenguajes de Programación I
Actividad 2: Operaciones basicas en C++
Fecha: Viernes 18 de Abril de 2025

***********************************************/ 

//Llamada a la libreria estandar 
#include <iostream>

 //Se define funcion main 
 int main ()
 {
  //Se definen las variables numero1 y numero2 como tipo float 
  float numero1, numero2;
  
  //Se imprime el texto para solicitar que el usuario ingrese un primer valor
  std::cout << "Ingrese el primer numero: ";
  //Se asigna el primer valor ingresado a la variable numero1
  std::cin >> numero1;
  
  //Se imprime el texto para solicitar que el usuario ingrese un segundo valor
  std::cout << "Ingrese el segundo numero: ";
  //Se asigna el segundo valor ingresado a la variable numero2
  std::cin >> numero2;
  
  /* Se define la variable suma como tipo float y se le asigna como 
  valor el resultado de sumar las variables numero1 mas numero2 */ 
  float suma = numero1 + numero2 ;
  /* Se define la variable resta como tipo float y se le asigna como 
  valor el resultado de restar las variables numero1 menos numero2 */
  float resta = numero1 - numero2 ;
  /* Se define la variable multiplicacion como tipo float y se le asigna como 
  valor el resultado de multiplicar las variables numero1 por numero2 */
  float multiplicacion = numero1 * numero2 ;
  /* Se define la variable division como tipo float y se le asigna como 
  valor el resultado de dividir las variables numero1 entre numero2 */
  float division = numero1 / numero2 ;

  /* Se imprime el texto "El resultado de la suma es: " seguido del valor de la variable suma */
  std::cout << "El resultado de la suma es: " << suma << std::endl;
  /* Se imprime el texto "El resultado de la resta es: " seguido del valor de la variable resta */
  std::cout << "El resultado de la resta es: " << resta << std::endl;
  /* Se imprime el texto "El resultado de la multiplicacion es: " seguido del valor de la variable multiplicacion */
  std::cout << "El resultado de la multiplicacion es: " << multiplicacion << std::endl;
  /* Se imprime el texto "El resultado de la division es: " seguido del valor de la variable division */
  std::cout << "El resultado de la division es: " << division << std::endl;
  
   //Se indica el fin del programa
   return 0;
 }