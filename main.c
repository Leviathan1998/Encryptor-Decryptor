#include <stdio.h>

//Simple C program to encrypt and decrypt a string

int main() {
    int x;
    int y;
    char str[1000];

    printf("\nPlease enter string :\t");
    gets(str);


    printf("Please choose one of two options:\n");

    printf("1) ===> Encrypt text\n");

    printf("2) ===> Descrypt text\n");
    scanf("%d" , &x);
//using switch case statements
    switch (x) {
        case 1:
            for  (  y = 0; ( y < 1000 && str [y] !='\0'); y++)
                str [y]= y + 3;//the key for encryption is 3 that is added to ASCII value

            printf("\nEncrypted text: %s\n", str );
            break;

        case 2:
            for  (  y = 0; ( y < 1000 && str [y] !='\0'); y++)
                str [y]= y - 3;//the key for encryption is 3 that is subtracted to ASCII value

            printf("\nDescrypted text: %s\n", str);
            break;

        default:
            printf("\nERROR!!!\n");
        
    }
    return 0;
}
