#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
//1. Hacer una función que permita ingresar varios elementos a una pila, tanto como quiera el usuario.
void cargarValores(Pila *mp);

int main()
{
    int actividad;

    printf("Por favor ingrese la actividad: ");
    scanf("%d", &actividad);

    switch(actividad){

            case 1:{
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

            case 2:{
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

            case 3:{
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

            case 4:{
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

            case 5:{


                Pila DADA5;
                inicpila(&DADA5);

                cargarValores(&DADA5);

                ordenarPila(&DADA5);

                mostrar(&DADA5);

                system("pause");
                system("cls");
                break;
            }





    }
    return 0;

}

void cargarValores(Pila *pa1){
    int cantidaddevalores;
    printf("Cuantos valores quiere ingresar a pila?\n\n");
    scanf("%d",&cantidaddevalores);

    for(cantidaddevalores;cantidaddevalores>0;cantidaddevalores--){
        leer(pa1);
    }

return;
}

void pasarPila(Pila *pa2, Pila *pb2){

    while(!pilavacia(pa2)){
        apilar(pb2, desapilar(pa2));
    }

return;}

void pasarPilaOrdenada(Pila *pa3, Pila *pb3){

    Pila pc3;
    inicpila(&pc3);

    while(!pilavacia(pa3)){
        apilar(&pc3, desapilar(pa3));
    }
    while(!pilavacia(&pc3)){
        apilar(pb3, desapilar(&pc3));
    }

return;}

int extraerMenor(Pila *pa4){
        Pila aux;
        inicpila(&aux);
        int menor=tope(pa4);

        while(!pilavacia(pa4)){
                if(tope(pa4)>=menor){
                        apilar(&aux, desapilar(pa4));
                }
                else {
                        menor=tope(pa4);
                }
        }
        while(!pilavacia(&aux)){
                if(tope(&aux)!=menor){
                apilar(pa4, desapilar(&aux));
                }
                else
                {
                        desapilar(&aux);
                }
        }
return menor;
}

void ordenarPila(Pila *pa5){
        Pila ordenada;
        inicpila(&ordenada);

        while(!pilavacia(pa5)){
                apilar(&ordenada, desapilar(pa5));
        }

        while(!pilavacia(&ordenada)){
                apilar(pa5, extraerMenor(&ordenada));
        }
return;
}
