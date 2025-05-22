#include <stdio.h>
#include <string.h>
#include <windows.h>

void printCentered(char *text, int width) {
    int pad = (width - strlen(text)) / 2; // Calculate padding
    for (int i = 0; i < pad; i++) {
        printf(" ");
    }
    printf("%s\n", text);
}
void close();
void fordelay(int j)
{   int i,k;
    for(i=0;i<j;i++)
         k=i;
}
int main(){
    printf("\n\n");
    printf("\33[1;34m   ********    ******   ********   ******  ******      **       **               **         ********  ********      ********   ********  ******\n\033[0m");
    printf("\33[1;34m   *       **    **    **            **      **       ****      **               **         *         *       **   **          **        *     **\n\033[0m");
    printf("\33[1;34m   *       **    **    **            **      **      **  **     **               **         ********  *        **  **          ********  *     **\n\033[0m");
    printf("\33[1;34m   *       **    **    **   *****    **      **     ********    **               **         ********  *        **  **    ****  ********  ****** \n\033[0m");
    printf("\33[1;34m   *       **    **    **     ***    **      **    **      **   **               **         *         *       **   **     ***  **        *     **\n\033[0m");
    printf("\33[1;34m   ********    ******   ******* *  ******    **   **        **  *********        *********  ********  ********      ******* *  ********  *     **\n\033[0m");
    printf("\n\n");

    printCentered("*------------********------------*",150);
    printCentered("Digital Ledger Bank               ",166);
    printCentered("*------------********------------*",150);
    printf("\n\n");
    printCentered("Welcome to Digital Ledger Bank !!!",50);


    char pass[10],A_password[10]="digital";
    int i=0;
    printf("\n\n\tEnter the password to login:");
    scanf("%s",pass);
    if (strcmp(pass,A_password)==0)
        {printf("\n\nPassword Match!\nLOADING");
        for(i=0;i<=6;i++)
        {
            fordelay(10000000);
            printf(".");
        }
            system("cls");
            //menu();
        }
    else
        {   printf("\n\nWrong password!!\a\a\a");
            login_try:
            printf("\nEnter 1 to try again and 0 to exit:");

        return 0;
}
}
