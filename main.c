#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cliente.h"

int main() {
    char opcao_invalida;
    int perfil, gestao_cliente, gestao_atigo, gestao_custo, gestao, pretende_cliente, pretende_artigo;
    

    int getch(void);
    while (1) {
        
        printf("\n # ------------ BEM VINDO ------------ #");
        printf("\n |                                     |");
        printf("\n |                                     |");
        printf("\n |                MENU                 |");
        printf("\n |       1 - Adminitrador              |");
        printf("\n |       2 - Cliente                   |");
        printf("\n |                                     |");
        printf("\n |                                     |");
        printf("\n # ----------------------------------- #");
        printf("\n\tSelecione o seu perfil: ");
        scanf("%d", &perfil);
        printf("\n");
        
        switch (perfil) {

            case 1: //inicio administrador
                printf("\n # ---------- Adminitrador ----------- #");
                printf("\n |                                     |");
                printf("\n |                                     |");
                printf("\n |                MENU                 |");
                printf("\n |       1 - Gestão de Cliente         |");
                printf("\n |       2 - Gestão de Artigo          |");
                printf("\n |       3 - Gestão das Tabelas        |");
                printf("\n |           de Custo                  |");
                printf("\n |                                     |");
                printf("\n # ----------------------------------- #");

                printf("\n\tSelecione o tipo de gestao de deseja: ");
                scanf("%d", &gestao);
                printf("\n");

                switch (gestao) {
                    case 1:
                        printf("\n # -------- Gestão do cliente -------- #");
                        printf("\n |                                     |");
                        printf("\n |                                     |");
                        printf("\n |                MENU                 |");
                        printf("\n |       1 - Criar                     |");
                        printf("\n |       2 - Editar                    |");
                        printf("\n |       3 - Remover                   |");
                        printf("\n |                                     |");
                        printf("\n |                                     |");
                        printf("\n # ----------------------------------- #");
                        printf("\n\tPretende: ");
                        scanf("%d", &pretende_cliente);
                        printf("\n\n");
                        switch (pretende_cliente) {

                            case 1:
                                criarperfil();
                                break; //break pretende cliente  criar

                            case 2:
                                editar();
                                break; //break pretende cliente  editar

                            case 3:
                                remover();
                                break; //break pretende cliente  remover

                            default:
                                printf(" [!] Opção Invalida! Pressione ENTER para continuar...");
                                scanf("%c", &opcao_invalida);
                                getchar(); //obtém um único caractere
                                break;
                        }// final switch pretende cliente

                        break; //break gestao de cliente
                    case 2:
                        printf("\t --------- Gestão de artigo --------- \t");
                        printf("\n\n"); //-------------------------------------//
                        printf("1 - Criar\n2 - Editar\n3 - Remover\n");
                        printf("Pretende: ");
                        scanf("%d", &pretende_artigo);

                        switch (pretende_artigo) {

                            case 1:
                                printf("criar");
                                break; //break pretende artigo  criar

                            case 2:
                                printf("editar");
                                break; //break pretende artigo  editar

                            case 3:
                                printf("remover");
                                break; //break pretende artigo  remover
                        }//final switch pretende artigo

                        break; //break gestao de artigo

                    case 3:
                        printf("\t --------- Alterar dados tabela de custo --------- \t");
                        printf("\n\n");
                        break; //break gestao das tabelas de custo
                }//final swsitch gestao

                break; //break gestaoo administrador 

                //---------------------------------------------//

            case 2: // inicio cliente
                printf("\t --------- Cliente --------- \t");
                printf("\n\n");
                break; // break gestao cliente
        } // final switch (perfil)
        return 0;
    }
}
