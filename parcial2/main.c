#include <stdio.h>
#include <stdlib.h>
 /*
 Crear una funci�n llamada aplicarDescuento que reciba como par�metro el precio de un producto y
 devuelva el valor del producto con un descuento del 5%.

 Realizar la llamada desde el main. *


Dada la estructura Notebook(id, procesador, marca, precio) generar una funci�n que permita ordenar un array de dicha estructura
por marca. Ante igualdad de marca deber� ordenarse por precio.
Hardcodear datos y mostrarlos desde el main. *


Crear una funci�n que se llame contarCaracteres que reciba una cadena de caracteres como primer par�metro y un car�cter como segundo y
 devuelva la cantidad de veces que ese car�cter aparece en la cadena *
*/


 //typedef struct{

// int id;
 // int procesador;
 // char marca[50];
//  int precio;


//}eNotebook;


 float descuento(float precio);
 //void contarCaracteres(char cad[]);


int main()
{


   float precioConDescuento;
   printf("Ingrese precio:");
   scanf("%f",&precioConDescuento);
   descuento(precioConDescuento);





    return 0;
}

float descuento(float precio){

   float descuento= precio*0.95;

   return printf("el precio con el descuento  es %2.f",descuento);

}
/*

void contarCaracteres(char cad[]){
    int tam = strlen(cad);

    for(int i=0; i < tam-1; i++)
    {
        for(int j= i+1; j < tam; j++){
            if( cad[i] > cad[j] ){
                aux = cad[i];
                cad[i] = cad[j];
                cad[j] = aux;
            }
        }
    }
}

*/

