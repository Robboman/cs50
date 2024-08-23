#include <stdio.h>

int main(void)
{
    char answer[25];
    printf("What's your name? ");
    fgets(answer, sizeof(answer), stdin);
    printf("Hello, %s\n", answer);

    return 0;
}