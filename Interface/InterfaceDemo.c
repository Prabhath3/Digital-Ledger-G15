#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printCentered(char *text, int width) {
    int pad = (width - strlen(text)) / 2; // Calculate padding
    for (int i = 0; i < pad; i++) {
        printf(" ");
    }
    printf("%s\n", text);
}

int Login, CAccount, option,Admin;
int main()
{
    printCentered("*-----****----                         ----****----*\n",130);
    printCentered("Digital Ledger Bank               \n",145);
    printCentered("*------****------                 -----****------*\n",130);
    printCentered("Main manu: \n",40);

    printCentered("1.Login\n",50);
    printCentered("2.Create a New Account\n\n",67);

    printCentered("Welcome to Digital Ledger Bank.\n",61.5);
    printf("\t\t     Choose a option:");
    scanf("%d", &option);
    printf("\n");
    switch(option){
    case 1:
        printCentered("1. Admin\n",52);
        printCentered("2. Customer\n\n",56);
        printf("\t\t     Choose a option: ");
        scanf("%d", &Admin);
    }

    printCentered("Thank you, Done Successfully...!", 130);

    return 0;
}
