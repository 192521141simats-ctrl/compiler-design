#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter an expression: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (isspace(str[i])) {
            i++;
        }

        else if (isalpha(str[i]) || str[i] == '_') {
            printf("%c -> Identifier\n", str[i]);
            i++;
            while (isalnum(str[i]) || str[i] == '_')
                i++;
        }

        else if (isdigit(str[i])) {
            printf("%c -> Constant\n", str[i]);
            i++;
            while (isdigit(str[i]))
                i++;
        }

        else if (strchr("+-*/=%", str[i])) {
            printf("%c -> Operator\n", str[i]);
            i++;
        }

        else {
            i++;
        }
    }

    return 0;
}