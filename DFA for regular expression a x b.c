#include<stdio.h>
#include<string.h>

int dfa(char word[]){
    int n = strlen(word);
    if(n==0 || word[n-1]!='b'){
        return 0;
    }
    for(int i =0; i<n-1; i++){
        if(word[i]!='a'){
            return 0;
        }
    }

    return 1;
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
