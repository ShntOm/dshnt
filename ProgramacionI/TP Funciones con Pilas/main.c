#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <math.h>

void cargarValores(Pila *pa1);
void pasarPila(Pila *pa2, Pila *pb2);
void pasarPilaOrdenada(Pila *pa3, Pila *pb3);
int extraerMenor(Pila *pa4);
void ordenarPila(Pila *pa5);
void insertarEnOrden(Pila *pa6, int nuevoValor);
void OrdenarDosPilas(Pila *PilaA, Pila *PilaFinal);
int sumarTopeYAnterior(Pila *PilaA);
int sumarPila(Pila *pa9);
int contarPila(Pila *pb9);
int promediarPila(Pila *pc9);
int PilaYBase10(Pila *pa10);


int main()
{
    int actividad=1;

while(actividad!=0){
    printf("Por favor ingrese la actividad: ");
    scanf("%d", &actividad);
        switch(actividad)
        {

        case 1:
        {
            printf("1. Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario.\n\n");

            Pila DADA1;
            inicpila(&DADA1);

            printf("La pila DADA1 esta vacia, se iniciara la funcion.\n\n");
            system("pause");

            cargarValores(&DADA1);
            mostrar(&DADA1);

            system("pause");
            system("cls");
            break;
        }

        case 2:
        {
            printf("2. Hacer una función que pase todos los elementos de una pila a otra.\n\n");

            Pila DADA2a;
            Pila DADA2b;
            inicpila(&DADA2a);
            inicpila(&DADA2b);

            cargarValores(&DADA2a);

            mostrar(&DADA2a);

            printf("Ahora se pasaran los valores de una pila a otra\n\n");

            system("pause");
            system("cls");

            pasarPila(&DADA2a, &DADA2b);

            printf("Pila A:");
            mostrar(&DADA2a);
            printf("Pila B:");
            mostrar(&DADA2b);

            system("pause");
            system("cls");
            break;
        }

        case 3:
        {
            printf("3. Hacer una función que pase todos los elementos de una pila a otra, pero conservando el orden.\n\n");

            Pila DADA3a;
            Pila DADA3b;
            inicpila(&DADA3a);
            inicpila(&DADA3b);

            cargarValores(&DADA3a);

            mostrar(&DADA3a);

            printf("Ahora se pasaran los valores de una pila a otra\n\n");

            system("pause");
            system("cls");

            pasarPilaOrdenada(&DADA3a, &DADA3b);

            printf("Pila A:");
            mostrar(&DADA3a);
            printf("Pila B:");
            mostrar(&DADA3b);
            system("pause");
            system("cls");
            break;
        }

        case 4:
        {
            printf("4. Hacer una función que encuentre el menor elemento de una pila y lo retorna. La misma debe eliminar ese dato de la pila.\n\n");

            Pila DADA4;
            inicpila(&DADA4);

            cargarValores(&DADA4);

            printf("El valor minimo de la pila es %d, y fue extraido", extraerMenor(&DADA4));

            mostrar(&DADA4);

            system("pause");
            system("cls");
            break;
        }

        case 5:
        {
            printf("5. Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la función del ejercicio 4. (Ordenamiento por selección)\n\n");

            Pila DADA5;
            inicpila(&DADA5);

            cargarValores(&DADA5);

            ordenarPila(&DADA5);

            mostrar(&DADA5);

            system("pause");
            system("cls");
            break;
        }

        case 6:
        {
            printf("6. Hacer una función que inserta en una pila ordenada un nuevo elemento, conservando el orden de ésta. \n\n");

            Pila ACT6;
            inicpila(&ACT6);
            apilar(&ACT6, 3);
            apilar(&ACT6, 4);
            apilar(&ACT6, 5);

            int nuevoValor;

            mostrar(&ACT6);

            printf("\nIngrese el nuevo valor a insertar en la pila: ");
            scanf("%d", &nuevoValor);

            insertarEnOrden(&ACT6, nuevoValor);

            mostrar(&ACT6);

            system("pause");
            system("cls");
            break;
        }

        case 7:
        {
            printf("7. Hacer una función que pase los elementos de una pila a otra, de manera que se genere una nueva pila ordenada. Usar la función del ejercicio 6.  (Ordenamiento por inserción)\n\n");

            Pila ACT7a;
            inicpila(&ACT7a);
            Pila ACT7b;
            inicpila(&ACT7b);
            Pila ACT7c;
            inicpila(&ACT7c);

            printf("Pila 7a: \n");
            cargarValores(&ACT7a);

    //        printf("Pila 7b: \n");
    //        cargarValores(&ACT7b);

            printf("A continuación se mostrarán las pilas, luego seran ordenadas por la funcion. \n");

            mostrar(&ACT7a);
            mostrar(&ACT7b);

            system("pause");

            OrdenarDosPilas(&ACT7a, &ACT7c);

            mostrar(&ACT7c);

            system("pause");
            system("cls");
            break;
        }

        case 8:
        {
            printf("8.  Hacer una función que sume los dos primeros elementos de una pila (tope y anterior), y retorne la suma,  sin alterar el contenido de la pila. \n\n");

            Pila ACT8;
            inicpila(&ACT8);

            cargarValores(&ACT8);

            printf("\n\nLa suma entre los dos ultimos valores de la pila da como total %d\n", sumarTopeYAnterior(&ACT8));
            mostrar(&ACT8);

            system("pause");
            system("cls");
            break;
        }

        case 9:
        {
            printf("9. Hacer una función que calcule el promedio de los elementos de una pila, para ello hacer también una función que calcule la suma, otra para la cuenta y otra que divida. En total son cuatro funciones, y la función que calcula el promedio invoca a las otras 3. \n\n");

            Pila ACT9;
            inicpila(&ACT9);
            cargarValores(&ACT9);

            printf("A continuacion los valores seran promediados\n\n");

            printf("El promedio de todos los valores de la pila da como total %d. (%d / %d)\n\n", promediarPila(&ACT9), sumarPila(&ACT9), contarPila(&ACT9));

            mostrar(&ACT9);


            system("pause");
            system("cls");
            break;
        }

        case 10:
        {
            printf("10. Hacer una función que reciba una pila con números de un solo dígito (es responsabilidad de quien usa el programa) y que transforme esos dígitos en un número decimal.\n\n");

            Pila ACT10;
            inicpila(&ACT10);

            cargarValores(&ACT10);

            mostrar(&ACT10);

            printf("Si interpretamos todos los valores de la pila como dígitos saldria el numero:\n%d\n\n", PilaYBase10(&ACT10));

            system("pause");
            system("cls");
            break;
        }
    }
    }



    return 0;
}

//1
void cargarValores(Pila *pa1)
{
    int cantidaddevalores;
    printf("Cuantos valores quiere ingresar a pila?\n\n");
    scanf("%d",&cantidaddevalores);

    for(cantidaddevalores; cantidaddevalores>0; cantidaddevalores--)
    {
        leer(pa1);
    }

    return;
}

//2
void pasarPila(Pila *pa2, Pila *pb2)
{

    while(!pilavacia(pa2))
    {
        apilar(pb2, desapilar(pa2));
    }

    return;
}

//3
void pasarPilaOrdenada(Pila *pa3, Pila *pb3)
{

    Pila pc3;
    inicpila(&pc3);

    while(!pilavacia(pa3))
    {
        apilar(&pc3, desapilar(pa3));
    }
    while(!pilavacia(&pc3))
    {
        apilar(pb3, desapilar(&pc3));
    }

    return;
}

//4
int extraerMenor(Pila *pa4)
{
    Pila aux;
    inicpila(&aux);
    int menor=tope(pa4);

    while(!pilavacia(pa4))
    {
        if(tope(pa4)>=menor)
        {
            apilar(&aux, desapilar(pa4));
        }
        else
        {
            menor=tope(pa4);
        }
    }
    while(!pilavacia(&aux))
    {
        if(tope(&aux)!=menor)
        {
            apilar(pa4, desapilar(&aux));
        }
        else
        {
            desapilar(&aux);
        }
    }
    return menor;
}

//5
void ordenarPila(Pila *pa5)
{
    Pila ordenada;
    inicpila(&ordenada);

    while(!pilavacia(pa5))
    {
        apilar(&ordenada, desapilar(pa5));
    }

    while(!pilavacia(&ordenada))
    {
        apilar(pa5, extraerMenor(&ordenada));
    }
    return;
}

//6
void insertarEnOrden(Pila *pa6, int nuevoValor)
{

    Pila AUX;
    inicpila(&AUX);
    int flag=0;

/*
    while(!pilavacia(pa6)){
        apilar(&AUX, desapilar(pa6));
        if(flag==0){
            if(nuevoValor < tope(&AUX)){
                apilar(&AUX, nuevoValor);
                apilar(pa6, desapilar(&AUX));
                flag=1;
            }
        }
    }
    corregir despues.


    while(!pilavacia(pa6) && flag == 0)
    {
        if(tope(pa6) < nuevoValor)
        {
            apilar(pa6, nuevoValor);
            flag = 1;

        }
        else
        {
            apilar(&AUX, desapilar(pa6));
        }

    }

    if(pilavacia(pa6)){

        apilar(pa6, nuevoValor);

    }

    while(!pilavacia(&AUX))
    {
        apilar(pa6, desapilar(&AUX));

    }

    pasarPila(&AUX, pa6);
*/

    while(!pilavacia(pa6) && tope(pa6) > nuevoValor){
        apilar(&AUX,desapilar(pa6));
    }

    apilar(pa6, nuevoValor);

    pasarPila(&AUX, pa6);



    return;
}

//7
void OrdenarDosPilas(Pila *PilaA, Pila *PilaFinal)
{
    int moviendo;

//    apilar(PilaFinal, 0);

    while(!pilavacia(PilaA)){
        moviendo=desapilar(PilaA);
        insertarEnOrden(PilaFinal, moviendo);
        //mostrar(PilaFinal);
    }

}

//8
int sumarTopeYAnterior(Pila *PilaA)
{
    Pila PilaB;
    inicpila(&PilaB);
    int resultado;

    apilar(&PilaB, desapilar(PilaA));
    resultado=tope(PilaA)+tope(&PilaB);
    apilar(PilaA, desapilar(&PilaB));

    return resultado;
}

//9
int sumarPila(Pila *pa9)
{
    int total=0;
    Pila AUX;
    inicpila(&AUX);

    while(!pilavacia(pa9))
    {
        apilar(&AUX, desapilar(pa9));
        total=total+tope(&AUX);
    }
    pasarPila(&AUX, pa9);

    return total;
}

int contarPila(Pila *pb9)
{
    int total=0;
    Pila AUX;
    inicpila(&AUX);

    while(!pilavacia(pb9))
    {
        apilar(&AUX, desapilar(pb9));
        total++;
    }
    pasarPila(&AUX, pb9);

    return total;
}

int promediarPila(Pila *pc9)
{
    int total;

    total=sumarPila(pc9)/contarPila(pc9);

    return total;
}

//10

int PilaYBase10(Pila *pa10)
{
    Pila AUX;
    inicpila(&AUX);

    int potencia=contarPila(pa10),total=0;

    pasarPila(pa10, &AUX);

    while(!pilavacia(&AUX))
    {
        potencia--;
        total=total+tope(&AUX)*(pow(10, potencia));
        apilar(pa10, desapilar(&AUX));
    }
    return total;
}

