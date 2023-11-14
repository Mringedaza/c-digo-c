#include <stdio.h>
#include <stdlib.h>

int numest_tem;
int cod_tem;
int i, x;
char nombre[50];

void notes();
void average();
int Verificacion(int numest_tem, int cod_tem);

struct notas {
    float nota1;
    float nota2;
    float nota3;
};

struct Estu {
    int numest; 
    int cod;
    struct notas calis;
};

struct Estu a[3] = {
    {1, 223, {4.5, 2.3, 4.5}},
    {2, 520, {3.5, 4.4, 1.4}},
    {3, 111, {3.0, 2.5, 2.7}}
};

int main()
{
    printf("---Bienvenid@---");

    while (1)
    {
        int opcion;
        printf("\nSelecciona una de las siguientes opciones:\n1) Consultar mis notas\n2) Consultar mi promedio\n3) Salir\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
        {
            notes();
            break;
        }
        case 2:
        {
            average();
            break;
        }
        case 3:
        {
            exit(0);
        }
        default:
            printf("Opcion no valida\n");
        }
    }
}


int Verificacion(int numest_tem, int cod_tem)
{
    for (i = 0; i < 3; i++)
    {
        if (a[i].numest == numest_tem)
        {
            if (a[i].cod == cod_tem)
            {
                return i;
            }
            else
            {
                printf("\nContraseña o nombre incorrecto\n");
                return -1; 
            }
        }
    }
    printf("\nUsuario no encontrado\n");
    return -1; 
}

void notes()
{
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su numero de estudiante:");
    scanf("%d", &numest_tem);
    printf("Ingrese su codigo de estudiante: ");
    scanf("%d", &cod_tem);
    x = Verificacion(numest_tem, cod_tem);
    if (x != -1)
    {
        printf("%s sus notas son\n",nombre);
        printf("Nota 1: %f\n", a[x].calis.nota1);
        printf("Nota 2: %f\n", a[x].calis.nota2);
        printf("Nota 3: %f\n", a[x].calis.nota3);
    }
}

void average()
{
    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su numero de estudiante:");
    scanf("%d", &numest_tem);
    printf("Ingrese su codigo de estudiante: ");
    scanf("%d", &cod_tem);
    x = Verificacion(numest_tem, cod_tem);

    if (x != -1)
    {
    	float promedio = (a[x].calis.nota1 + a[x].calis.nota2 + a[x].calis.nota3) / 3;
    	printf("Su promedio estudiante %d es: %f\n", a[x].numest, promedio);
    }
}


