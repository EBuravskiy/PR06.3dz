#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter your text: ");
    gets_s(str);
    int strLenght = strlen(str);
    printf("Specify the character number to be deleted: ");
    int numberSymbol;
    scanf_s("%i", &numberSymbol);
    if (numberSymbol <= strLenght) {
        for (int j = numberSymbol - 1; j < strLenght; j++) {
            str[j] = str[j + 1];
        }
        printf("\nResult:\t");
        puts(str);
    }
    else {
        printf("Error. Wrong character number");
    }
	return 0;
}