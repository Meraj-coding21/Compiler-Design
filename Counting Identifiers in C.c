#include<stdio.h>
#include<ctype.h>
#include<string.h>

int isvalid(const char *word){
    if(!isalpha(word[0])){
        return 0;
    }
    for(int i=0; word[i]!='\0'; i++ ){
            if(!isalnum(word[i]))
            return 0;
            }
    return 1;
}

int main(){
    char input[1000];
    int count = 0;

    printf("Enter your string: ");
    fgets(input,sizeof(input),stdin);

    char *token = strtok(input, " ,;=\n");

    while(token!=NULL){
        if(isvalid(token)){
            count++;
        }
        token = strtok(NULL," ,;=\n");
    }

    printf("Number of identifiers: %d\n",count);

    return 0;
}
