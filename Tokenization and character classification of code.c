#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    int i =0;
    const char delimiters [] = " =+/*-<>,;%{}[]().:!~\n";

    printf("Enter your String: ");
    fgets(str,sizeof(str),stdin);

    char *token = strtok(str, delimiters);

    while(token!= NULL){
        printf("Token: %s\n",token);

        token = strtok(NULL, delimiters);
    }

    return 0;
}
