#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *file;
char line[256];


file=fopen("myfile.txt","r");

if(file==NULL){
	printf("Could not open file for reading!");
}

while(fgets(line,sizeof(line),file)){
	printf("%s",line);
}

fclose(file);

	return 0;
}
