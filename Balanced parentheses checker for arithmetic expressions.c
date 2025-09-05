#include<stdio.h>

int is_balanced(const char *expr){
    int i = 0;
    int balance = 0;

    while (expr[i]!='\0'){
        if(expr[i]=='('){
            balance++;
           }
        else if(expr[i]==')'){
            balance--;

            if(balance<0){
                return 0;
            }
        }
        i++;
    }

    return balance == 0;
}

int main(){
    char input[1000];

    printf("Enter your expression: ");
    fgets(input,sizeof(input),stdin);

    if(is_balanced(input)){
        printf("Balanced Parentheses\n");
    }
    else{
        printf("Unbalanced Parentheses\n");
    }
    return 0;
}
