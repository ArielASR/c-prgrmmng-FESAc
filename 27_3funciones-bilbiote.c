/*
Programa para implementar numeros (pseudo) aleatorios.
Usaremos una semilla como un entero que nos ayuda a 
obtener diferentes valores de nuestros numeros aleatorios.
*/



#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
float rr,ss;



printf("un valor aleatorio de 0 a 100 es %d\n", rand() % 100);


srand(10);


for(i=0; i<5; i++){
printf("%i valor aleatorio de 0 de 5 es %d\n", i+1, rand() % 10);
}
return 0;
}
