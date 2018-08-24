/*
 * Este programa fue realizado como la tarea#1 el 22 de agosto de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es obtener la suma, resta, multiplicación y division dados
 * 2 números por el usuario.
 *
 * Fecha: 22 de agosto de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */

#include <stdio.h>

int main() {
    //Declaración de variables
    double num1;
    double num2;
    double suma;
    double resta;
    double producto;
    double cociente;

    // El usuario escribe los dos números
    printf("Escribe el primer número: ");
    scanf("%lf", &num1);
    printf("Escribe el segundo número: ");
    scanf("%lf", &num2);

    // Luego se calcula la suma, resta, multiplicación y división
    // de los números dados por el usuario
    suma=num1+num2;
    resta=num1-num2;
    producto=num1*num2;
    cociente=num1/num2;

    // Se muestra al usuario el resutado de cada operación
    printf("La suma de los números es: %lf\n",suma);
    printf("La diferencia de los números es: %lf\n",resta);
    printf("El producto de los números es: %lf\n",producto);
    printf("El cociente de los números es: %lf\n",cociente);
}