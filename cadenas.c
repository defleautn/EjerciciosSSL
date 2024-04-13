#include <stdio.h>

int lenCad(char []);
int esVacia(char []);
void concatenar(char [], char[]);

int main(){
    char cadena[] = "casa"; 
    char cadena1[] = "";
    int longitud = 0;
    int res = 0;
    longitud = lenCad(cadena);
    printf("Longitud de cadena %d \n", longitud);
    res = esVacia(cadena1);
    if(res == 0){
        printf("La cadena esta vacia");
    }else{
        printf("La cadena no esta vacia");
    }
    return 0;
}

int lenCad(char cadena[]){
    int lencad = 0;
    for(int i = 0; cadena[i] !=0; i++){
        lencad++;
    }

    return lencad;
}
int esVacia(char cadena[]){
    int result = 1;
    if(cadena[0] == '\0'){
        result = 0;
    }
    
    return result;
}
void concatenar(char cad1[], char cad2[]){
    
    int i = 0;
    int j = 0;



    return;
}