#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[1005], s2[1005];
	puts("no enter spaces");

    printf("Enter s1: ");
    if (scanf("%1004s", s1) != 1) return 0;
	
    printf("Enter s2: ");
    if (scanf("%1004s", s2) != 1) return 0;
    
    char *shorter = (strlen(s1) <= strlen(s2)) ? s1 : s2;
    char *longer  = (shorter == s1) ? s2 : s1;

    
    if (strstr(longer, shorter) != NULL) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}

