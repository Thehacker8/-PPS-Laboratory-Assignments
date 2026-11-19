#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    while (1) {
        printf("\n--- STRING OPERATIONS ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Join Strings (Concatenate)\n");
        printf("4. Compare Strings\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a word: ");
                scanf("%s", str1);
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a word: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string = %s\n", str2);
                break;

            case 3:
                printf("Enter first word: ");
                scanf("%s", str1);
                printf("Enter second word: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Joined string = %s\n", str1);
                break;

            case 4:
                printf("Enter first word: ");
                scanf("%s", str1);
                printf("Enter second word: ");
                scanf("%s", str2);
                
                if (strcmp(str1, str2) == 0) {
                    printf("Strings are the SAME.\n");
                } else {
                    printf("Strings are DIFFERENT.\n");
                }
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
