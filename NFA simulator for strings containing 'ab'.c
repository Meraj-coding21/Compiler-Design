#include<stdio.h>
#include<string.h>

int dfa(char word[]){
    int n = strlen(word);

    for(int i =0; word[i+1]!='\0'; i++){
        if(word[i]=='a' && word[i+1]=='b'){
            return 1;
        }
    }

    return 0;

}

int main(){
    char str[100];

    printf("Enter input: ");
    scanf("%s",str);

    for(int i =0; i<strlen(str); i++){
        if(str[i]!='a' && str[i]!= 'b'){
            printf("Invalid string\n");
            return 1;
        }
    }

    if(dfa(str)){
        printf("Accepted\n");
    }
    else{
        printf("Rejected");
    }

    return 0;
}
