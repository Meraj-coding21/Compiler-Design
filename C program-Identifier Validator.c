#include<stdio.h>
#include<ctype.h>
#include<string.h>

int is_keyword(char word[]){
    char *keywords[] = {"for","while","do","case","if","else","break","int","float","enum","static","void","continue","goto","long","short","double","extern"};
    int n = sizeof(keywords)/sizeof(keywords[0]);

    for(int i =0; i<n; i++){
        if(strcmp(word,keywords[i])==0){
            return 1;
        }
    }

    return 0;
}

int is_identifier(const char *str){
    if(!isalpha(str[0]) && str[0]!='_'){
        return 0;
    }

    for(int i=1; i<strlen(str); i++){
        if(!isalnum(str[i]) && str[i]!= '_'){
            return 0;
        }
    }

    if(is_keyword(str)){
        return 0;
    }

    return 1;
}

int main(){
    char str[100];

    printf("Enter your identifier: ");
    scanf("%s",str);

    if(is_identifier(str)){
        printf("Valid Identifier\n");
    }
    else{
        printf("Invalid Identifier\n");
    }

    return 0;
}
