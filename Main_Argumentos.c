#include <stdio.h>

//argc-> Valor entero de posicion de argumentos en linea de comandos (Nombre programa == 0)
// argv[]-> Cadena de caracteres que guarda los argumentos (Nombre programa == 0)

int main(int argc, char* argv[]){
    for(int i=0;i<argc;i++){
        printf("Argumento %d es: %s\n",i,argv[i]);
    }
    printf("Valor de argc es: %d",argc);
    return 0;
}
