
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* f;
    f = fopen("C:/dev/C/test_file.txt","r");
    if (f == NULL) {
        exit(1);
    }

    char contents[100];
    int read = fread(contents,1, sizeof(contents)-1,f);
    contents[read] = '\0';
    printf("%s",contents);

    fclose(f);
    
}

