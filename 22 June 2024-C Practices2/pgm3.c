#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "TCE";
    int length = strlen(str);
	int i,j;
    for (i = 1; i <= length; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", str[j]);
        }
        printf("\n");
    }

    return 0;
}

