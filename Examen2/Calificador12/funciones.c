#include <stdio.h>
#include <string.h>
#include "funciones.h"


void imprimirAlumnos(char alumnos[][2][20],double notas[][3]){

    for(int i = 0; i<6; i++){
            printf("Nombre: %s ", alumnos[i][0]);
            printf("Apellido: %s ", alumnos[i][1]);
            double promedio= notas[i][0] + notas[i][1] + notas[i][2];
            printf("Promedio: %lf", promedio);
            if(promedio <= 6){
                printf("No aprobado");
            } else {
                printf("Aprobado");
            }
        }
}


void buscarAlumnoXApellido(char alumnos[][2][20], double notas[][3]){
    char apellido[40];
    int noexiste = 0;
    printf("Escriba el apellido del usuario: ");
    scanf("%d", &apellido);
       for(int i = 0; i<6; i++){
        if(strcmp(alumnos[i][1],apellido)==0)
            printf("Nombre: %s ", alumnos[i][0]);
            printf("Apellido: %s ", alumnos[i][1]);
            double promedio= notas[i][0] + notas[i][1] + notas[i][2];
            printf("Promedio: %lf", promedio);
            if(promedio >= 6){
                printf("Esta aprobado");
            } else {
                printf("No esta aprobado");
            }
    }
    if(noexiste == 0){
        printf("No existe");
    }
}


void editarCalificaciones(char alumnos[][2][20], double notas[][3]){
    char apellido[40];
    double parc1, parc2, parc3;
    printf("Escriba el apellido del usuario: ");
    scanf("%s", &apellido);
    for(int i = 0; i<6; i++){
        if(strcmp(alumnos[i][1], apellido)== 0){
            printf("Escriba la Primera Nota Parcial: ");
            scanf("%lf", &parc1);
            printf("Escriba la Segunda Nota Parcial: ");
            scanf("%lf", &parc2);
            printf("Escriba la Tercera Nota Parcial: ");
            scanf("%lf", &parc3);

            strcpy(notas[i][0],parc1);
            strcpy(notas[i][1],parc2);
            strcpy(notas[i][2],parc3);
        }
        else{
            printf("No existe");
        }
            
    }

}



