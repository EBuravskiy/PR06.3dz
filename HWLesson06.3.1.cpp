#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter text: ");
    gets_s(str);
    printf("Second symbol of you text is %c", str[1]);
    return 0;
}