#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();

void mostrarMayorYMenor(a,b,c);

int sumarPositivosMenores(a);

void mostrarTabla(a);

void suma();
void resta();
void multiplicacion();
void division();



int main()
{
    int actividad;

    printf("Por favor ingrese la actividad: ");
    scanf("%d", &actividad);

    switch(actividad){

    case 1:{
        printf("1. Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.\n\n");
        int ran = random();
        printf("El numero aleatorio es %d", ran);

        printf("\n\n");
        system("pause");
        system("cls");
        break;
        }

    case 2:{
        printf("1. Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.\n\n");
        int a2=0,b2=0,c2=0;

        printf("Ingrese los tres valores a analizar por la función.\n");
        scanf("%d", &a2);
        scanf("%d", &b2);
        scanf("%d", &c2);

        mostrarMayorYMenor(a2,b2,c2);

        printf("\n\n");
        system("pause");
        system("cls");
        break;
    }

    case 3:{
        printf("3. Diseñe una función que reciba un número entero N y realice la suma de los números enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.\n\n");
        int N3;
        printf("Ingrese el valor N: ");
        scanf("%d", &N3);

        printf("La suma de todos los positivos menores de %d da como total %d", N3, sumarPositivosMenores(N3));


        printf("\n\n");
        system("pause");
        system("cls");
        break;
    }

    case 4:{
        printf("4. Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por parámetro.\n\n");
        int N4=0;

        printf("Ingrese el valor deseado: ");
        scanf("%d", &N4);

        mostrarTabla(N4);


        printf("\n\n");
        system("pause");
        system("cls");
        break;
    }

    case 5:{
        printf("5. Realice una pequeña calculadora, utilizando funciones (una función de suma, una de multiplicación, una de resta, una de división.)\n\n");
        int operacion=1;

        do{
        printf(" 0. Salir \n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir \n");
        scanf("%d",&operacion);

            if(operacion==1){
                suma();
            }
            if(operacion==2){
                resta();
            }
            if(operacion==3){
                multiplicacion();
            }
            if(operacion==4){
                division();
            }

            system("pause");
            system("cls");

        }while(operacion!=0);

    }

    case 6:{
        printf("6. Realizar una función que reciba un número positivo entero por parámetro por referencia, y cambie su signo a negativo.\n\n");
        int valoract6;

        printf("Ingrese el valor a invertir: ");
        scanf("%d", &valoract6);

        positivoANegativo(&valoract6);

        printf("\n\nValor invertido: %d", valoract6);

        system("pause");
        system("cls");
        break;
    }

    case 7:{
        printf("7. Realizar una función que reciba dos números enteros por parámetro por referencia y cargue sus valores el usuario dentro de la función.\n\n");

        int actividad7a=25, actividad7b=40;

        printf("Los dos valores son %d y %d, a continuación se entrará a la función para ser cambiados dentro.\n\n", actividad7a, actividad7b);

        CambiarDosValores(&actividad7a,&actividad7b);

        printf("Valor A: %d\n", actividad7a);
        printf("Valor B: %d\n", actividad7b);

        system("pause");
        system("cls");
        break;
    }


    }
    return 0;
}


//1.
int random() {
    srand(time(NULL));

    int x =rand()%100;

    return x;
}

//2.
void mostrarMayorYMenor(a, b, c){

    if(a>=b && a>=c) {
        printf("%d, ", a);

        if(b<c){
            printf("%d", b);
        }
        else {
            printf("%d", c);
        }
    }

    if(b>=a && b>=c) {
        printf("%d, ", b);

        if(a<c){
            printf("%d", a);
        }
        else {
            printf("%d", c);
        }
    }

    if(c>=b && c>=a) {
        printf("%d, ", c);

        if(b<a){
            printf("%d", b);
        }
        else {
            printf("%d", a);
        }
    }




    return;
}

//3.
int sumarPositivosMenores(a){
    int b=0;

    while(a>0){
        a--;
        b=b+a;
    }
    return b;
}

//4.
void mostrarTabla(a){
    int i;

    for (i=1;i<11;i++) {
        printf("- %d ", a*i);
    }
    return;
}

//5.
void suma(){
    float a,b,c;

    printf("Ingrese los valores a sumar:\n");
    scanf("%f",&a);
    scanf("%f",&b);

    c=a+b;
    printf("%.2f + %.2f = %.2f \n\n",a,b,c);

    return;
}

void resta(){
    float a,b,c;

    printf("Ingrese los valores a restar:\n");
    scanf("%f",&a);
    scanf("%f",&b);

    c=a-b;
    printf("%.2f - %.2f = %.2f \n\n",a,b,c);

    return;
}

void multiplicacion(){
    float a,b,c;

    printf("Ingrese los valores a multiplicar:\n");
    scanf("%f",&a);
    scanf("%f",&b);

    c=a*b;
    printf("%.2f * %.2f = %.2f \n\n",a,b,c);

    return;
}

void division(){
    float a,b,c;

    printf("Ingrese los valores a dividir:\n");
    scanf("%f",&a);
    scanf("%f",&b);

    c=a/b;
    printf("%.2f / %.2f = %.2f \n\n",a,b,c);

    return;
}

//6. Realizar una función que reciba un número positivo entero por parámetro por referencia, y cambie su signo a negativo.

void positivoANegativo(int *puntero6){

    if(puntero6>0){
        *puntero6=*puntero6 * (-1);
    }
    else{
        printf("\nEl valor es nulo o negativo, no se va a invertir.\n");
    }
    return;
}

// 7. Realizar una función que reciba dos números enteros por parámetro por referencia
// y cargue sus valores el usuario dentro de la función.

void CambiarDosValores(int *puntero7a,int *puntero7b){

    printf("Cambiar el valor A: ");
    scanf("%d", puntero7a);

    printf("Cambiar el valor B: ");
    scanf("%d", puntero7b);

    printf("\n_________Termina la función________\n\n\n");
return;}
///
