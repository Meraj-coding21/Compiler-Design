#include<stdio.h>
#include<string.h>

int end_01(char word[]){
    int n = strlen(word);
    if(n>=2 && word[n-2]=='0' && word[n-1]=='1'){
        return 1;
    }
    return 0;
}

int main(){
    char str[100];

    printf("Enter input: ");
    scanf("%s",str);

    for(int i =0; i<strlen(str); i++){
        if(str[i]!='0' && str[i]!= '1'){
            printf("Invalid string\n");
            return 1;
        }
    }

    if(end_01(str)){
        printf("Accepted\n");
    }
    else{
        printf("Rejected");
    }

    return 0;
}
