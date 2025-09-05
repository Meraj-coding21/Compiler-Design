#include<stdio.h>
#include<string.h>
#include<ctype.h>

int is_operator(const char *ch){
    if(ch=='*' || ch=='+'){
        return 1;
    }
}

int is_valid(const char *expr){
    int i = 0;
    int len = strlen(expr);
    int expect_operand = 1;

    while(i < len){
        if(isspace(expr[i])){
            i++;
            continue;
        }

        if(expect_operand){
            if(isdigit(expr[i])){
                while(i<len && isdigit(expr[i])){
                    i++;
                }
                expect_operand = 0;
            }
            else{
                return 0;
            }
        }
        else{
            if(is_operator(expr[i])){
                i++;
                expect_operand = 1;
            }
            else{
                return 0;
            }
        }
    }

    return expect_operand == 0;
}

int main(){
    char expr[1000];

    printf("Enter your expression: ");
    fgets(expr,sizeof(expr),stdin);

    if(is_valid(expr)){
        printf("Valid Expression");
    }
    else
    {
        printf("Invalid expression");
    }

    return 0;
}


