#include <stdio.h>
#include <string.h>

int main(){

    char input[100];
    while(1){
    printf("%s\n","Please provide input:");    
    fgets(input,sizeof(input)-1,stdin);   
    printf("%s\n",input);
    if(strcmp(input,"quit\n")==0){return 0;}
    }
    return 0;
}