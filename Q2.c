#include <stdio.h>

int main() {
    char chr;

    printf("Enter: ");
    scanf("%c", &chr);

    if ((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')) {
        if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
            chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
            printf("%c is a vowel.\n", chr);
        } else {
            printf("%c is a consonant.\n", chr);
        }
    } else {
        printf("%c is not an alphabet.\n", chr);
    }

    return 0;
}

