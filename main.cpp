#include "Evaluador.h"
#include <iostream>
using namespace std;

//Devuelve la suma de a (dado) y b (dado)
int sumar(int a, int b)
{
    return a+b; //retorna la suma de a + b
}

//Devuelve la resta de a (dado) y b (dado)
int restar(int a, int b)
{
    return a-b; //retorna la resta de a + b
}

//Devuelve la multiplicacion de a (dado) y b (dado)
int multiplicar(int a, int b)
{
    return a*b; //retorna la multiplicacion de a y b
}

//Devuelve la division de a (dado) y b (dado)
int dividir(int a, int b)
{
    return a/b; //retorna la division de a y b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMayor(int a, int b)
{
    if (a>b) //evalua si a es mayor que b
        return a;//si es mayor retorna el valor de a
    else
        return b;// en caso contrario retorna el valor de b
}

//Devuelve el numero mayor entre a (dado) y b (dado)
int getMenor(int a, int b)
{
    if (a<b)// evalua si a es menor que b
        return a;// si a es mayor entonces retorna el valor de a
    else
        return b;;// en caso contrario retorna el valor de b
}

//Devuelve el numero mayor entre a (dado), b (dado) y c (dado)
int getMayor(int a, int b, int c)
{
    if (a>b & a>c)//evalua si a es mayor que b y c
        return a;//si es asi retorna el valor de a
    else if(b>a & b>c) //en caso contrario evalua si b es mayor que a y c
        return b;//si es asi retorna el valor de b
    else
        return c;//si no se cumple ninguna condicion entonces el mayor es c

}

//Establece el valor (dado) en el arreglo (dado) en el indice posicion (dado)
void setValor(int arreglo[], int valor, int posicion)
{
    arreglo[posicion]= valor;//asigna el valor dado en la posicion dada al arreglo dado
}

//Obtiene y devuelve el valor del arreglo (dado) en el indice posicion (dado)
int getValor(int arreglo[], int posicion)
{
    return arreglo[posicion];//returna el valor en la posicion dada en el arreglo
}

//Devuelve el numero mayor del arreglo (dado) que contiene tamano (dado) elementos
int getMayor(int arreglo[], int tamano)
{
    int mayor = 0;//inicialia una variable mayor
    for(int i=0; i<tamano; i++)
    {
        if (arreglo[i]>mayor)//evalua si el valor en cada posicion es mayor que la variable inicializada como mayor
            mayor= arreglo[i];//si se cumple la condicion remplaza el valor mayor
    }
    return mayor;//retorna el valor mayor
}

//Devuelve el numero menor del arreglo (dado) que contiene tamano (dado) elementos
int getMenor(int arreglo[], int tamano)
{
    int menor = 9999999999;//inicializa una variable menor
    for(int i=0; i<tamano; i++)
    {
        if (arreglo[i]<menor)//evalua si el valor en cada posicion es menor que la variable inicializada como menor
            menor= arreglo[i];//si se cumple la condicion remplaza el valor menor
    }
    return menor;;//retorna el valor menor
}

//Devuelve el promedio de los numeros del arreglo (dado) que contiene tamano (dado) elementos
int getPromedio(int arreglo[], int tamano)
{
    int promedio = 0;//inicializa la variable para el promedio
    for(int i=0; i<tamano; i++)
    {
        promedio = promedio +arreglo[i];//suma todos los valores del arreglo
    }
    promedio = promedio/tamano;//divide la suma de todos los valores del arreglo entre el tamaño
    return promedio;//retorna el promedio
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
