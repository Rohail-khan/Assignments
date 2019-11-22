#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\tTime Table\n");

    while(1)
    {
        system("cls");
        printf("\tChoose your option\n");
        printf("1. Monday\n");
        printf("2. Tuesday\n");
        printf("3. Wednesday\n");
        printf("4. Thursday\n");
        printf("5. Friday\n");
        printf("6. Saturday\n");
        printf("7. Sunday\n");
        printf("\n0. Exit\n");

        char option;
        scanf(" %c", &option);

        printf("\n\n");
        switch(option)
        {
        case '1':
            printf("ICT\n");
            break;
        case '2':
            printf("Introduction To Programming\n");
            break;
        case '3':
            printf("Applied Physics\n");
            break;
        case '4':
            printf("1. Lab 2.English\n");
            break;
        case '5':
            printf("Calculus\n");
            break;
        case '6':
            printf("OFF\n");
            break;
        case '7':
            printf("OFF\n");
            break;
        break;
        case '0':
            return 0;
            break;
        default:
            printf("Invalid Option!\n");
            break;
        }

        printf("\n\n");

        system("PAUSE");
    }
    return 0;
}
