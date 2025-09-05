#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    const char *delimiters = " ,.-\n";

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    char *word = strtok(str, delimiters);

    while(word!=NULL){
        if(strlen(word)==5){
            printf("Matched Word: %s\n",word);
        }
        word = strtok(NULL, delimiters);
    }

    return 0;
}
