#include <stdio.h>

int main(void) {
	printf("enter an integer:");
    char s[1005];
    if (scanf("%1004s", s) != 1) return 0;
	
    int found = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = s[i];
        if (c == '2' || c == '3' || c == '5' || c == '7') {
            if (found) printf("-");
            printf("%c", c);
            found = 1;
        }
    }

    if (!found) {
        printf("No prime number");
    }
    return 0;
}

