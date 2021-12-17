#include <stdlib.h>
#include <stdio.h>
#define MAX_CUSTOMERS 100 
#include <time.h>
#include <string.h>

typedef struct {
    char name[80];
    char country[10];
    int tin;
    int customer excluded;
    int active;
} CLIENT;

CLIENT client[MAX_CUSTOMERS];

void createprofile() {
    char intend_tin;
    int i, identifier;

    FILE* bd;

    CLIENTE b;


    printf("\t *** Create customer profile *** \n");

    srand(time(NULL));
    for (i = 0; i < 1; i++) {
        b.customer_code = (rand() % 1000000);
    }
    printf("Customer Code: %d\n", b.customer_code);

    fgets(b.name, 80, stdin);
    printf("Type your name: %s", b.name);
    scanf("%[^\n]s", b.name); 


    printf("TIN present? ");
    scanf("%s", &intend_tin);
    if (intend_tin == 's' || intend_tin == 'S') {
        while (1) {
            printf("\n\tEnter your TIN: ");
            scanf("%d", &b.tin);

            if (b.tin >= 999999999) {
                printf("\tNumber with more than 9 digits is not allowed. Please try again.");

            } else if (b.tin <= 99999999) {

                printf("\tNumber with less than 9 digits is not allowed. Please try again.");
            } else
                break;
        }
        printf("\tValid.\n");
    } else {
        printf("TIN not entered\n");
    }

    printf("What is your country? ");
    scanf("%s", &b.country);


    bd = fopen("bd.txt", "a+");
    fprintf(bd, "code: %d | name: %s | tin: %i | country: %s \n", b.customer_code, b.name, b.tin, b.country);
    fclose(bd);

    if (identifier == 0) {

        printf("\nCREGISTRATION SUCCESSFULLY CARRIED OUT!\n");
        system("clear");

    }

}

void edit() {

    CLIENT b;
    int change;
    FILE* bd;

    bd = fopen("bd.txt", "a+");


    printf("Enter customer code: ");
    scanf("%d", b.cliente_codigo);


    printf("\n # ----------- Data Change ----------- #");
    printf("\n |                                     |");
    printf("\n |                                     |");
    printf("\n |                MENU                 |");
    printf("\n |       1 - Name                      |");
    printf("\n |       2 - TIN                       |");
    printf("\n |       3 - Country                   |");
    printf("\n |                                     |");
    printf("\n |                                     |");
    printf("\n # ----------------------------------- #");
    printf("\n\tSelect the type of change you want: ");
    scanf("%d", &change);

    switch (change) {
        case 1:
            printf("Enter the new name: ");
            fflush(stdin);
            scanf("%[\n]s", bd, b.name);
            system("pause");

            break;
        case 2:
            printf("Change TIN: ");
            fflush(stdin);
            scanf("%d", bd, b.tin);
            system("pause");
            break;
        case 3:
            printf("Change Country: ");
            fflush(stdin);
            scanf("%s", bd, b.country);
            system("pause");
            break;
    }
}

void remove() {

    CLIENTE b;

    FILE* bd;

    bd = fopen("bd.txt", "r+");

    printf("\n # --------------------------- #");
    printf("\n # ----- REMOVE CLIENT ----- #");
    printf("\n # --------------------------- #");
    printf("\n\n Please enter your customer number\n\n");
    scanf("%d", b.customer_code);

    --b.customer_code;
    client[b.customer_code].ativo = 0;
    printf("customer excluded!");

}
