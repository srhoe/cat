#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    FILE *fptr;
    char ch;

    fptr = fopen("file name here","r");
    if(fptr == NULL)  {
        printf("Error opening file\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF){
        putchar(ch);
        
    }

    fclose(fptr);
    return 0;
}