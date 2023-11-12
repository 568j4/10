#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    char word1[100], word2[100], word3[100];

    printf("Input a word:");
    scanf("%s", word1);
    printf("Input a word:");
    scanf("%s", word2);
    printf("Input a word:");
    scanf("%s", word3);
    
    FILE *filePointer;
    filePointer = fopen("sample.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fprintf(filePointer, "%s %s %s", word1, word2, word3);
    fclose(filePointer);

    return 0;
}

