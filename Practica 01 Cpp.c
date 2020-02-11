#include<stdio.h>
#include<stdlib.h>

int main() {
float a,b,c;
int opt;
    printf("\n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division ");
    printf("\n Seleccione una opcion:");
    scanf("%d",&opt);
    printf("Ingrese el primer operando:");
    scanf("%f",&a);
    printf("Ingrese el segundo operando:");
    scanf("%f",&b);
if (opt==1){
    c=a+b;
    }
else if(opt==2) {
    c=a-b;
}
else if(opt==3) {
    c=a*b;
}
else if(opt==4){
    while(b==0){
     printf("Error, b debe de ser distinto de 0 \n");
     printf("Ingrese el segundo operando:");
     scanf("%f",&b);
    }
    c=a/b;
}
else {
printf("Opcion invalida");
c=0;
}
  printf("El resultado es %f", c);
  }

