#include <stdio.h>

int main(){
    float hora_usuario;
    
    scanf("%f",&hora_usuario);
    
    if(((int) hora_usuario > 23 || (int) hora_usuario < 0)){
        printf("Essa hora não existe. 00h as 23h\n");
        return 0;
    }
    
    int min = (int) ((hora_usuario - (int) hora_usuario)*100);
    
    if(min > 59){
        printf("Esses minutos não existem. 0 min a 59 min");
        return 0;
    }
    
    printf("Horas em minutos: %0.0f",(((int) hora_usuario) * 6000) + ((hora_usuario - (int) hora_usuario) * 6000) );
    printf("\nHoras em segundos: %0.0f", hora_usuario * 360000 );

    return 0;
}