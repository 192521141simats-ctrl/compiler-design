#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a line: ");
    fgets(str, sizeof(str), stdin);

    if (strncmp(str, "//", 2) == 0)
        printf("Single line comment\n");

    else if (strncmp(str, "/*", 2) == 0 && strstr(str, "*/"))
        printf("Multi-line comment\n");

    else
        printf("Not a comment\n");

    return 0;
}