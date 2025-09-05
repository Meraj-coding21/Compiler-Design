#include<stdio.h>
#include<string.h>

int is_even(char word[]){
    return strlen(word) % 2 == 0;
}

int main(){
    char str[100];

    printf("Enter your binary string: ");
    scanf("%s",str);

    for(int i =0; i<strlen(str); i++){
        if((str[i]!='0')  && (str[i]!='1')){
            printf("Invalid String given in input\n");
            return 1;
        }
    }

    if(is_even(str)){
        printf("even length\n");
    }
    else{
        printf("odd length\n");
    }

    return 0;
}

