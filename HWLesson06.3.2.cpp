#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    printf("Enter you text: ");
    gets_s(str);
    printf("Last symbol of you text is %c", str[strlen(str) - 1]);
    printf("\nIndicate The numbers of characters in the text that you would like to replace: \n");
    int firstSymbol, secondSymbol;
    printf("First symbol:\t");
    scanf_s("%i", &firstSymbol);
    printf("Second symbol:\t");
    scanf_s("%i", &secondSymbol);
    if (firstSymbol - 1 < strlen(str) && secondSymbol - 1 < strlen(str)) {
        char temp = str[firstSymbol - 1];
        str[firstSymbol - 1] = str[secondSymbol - 1];
        str[secondSymbol - 1] = temp;
        printf("Changed text:\t");
        puts(str);
    }
    else {
        printf("Error! Wrong number of characters!");
    }
    return 0;
}