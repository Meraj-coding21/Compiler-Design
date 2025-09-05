#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[200];
    const char operand[] = "+-/*";
    int opernd = 0;
    int operat =0;
    int i =0;

    printf("Enter your String: ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")] = 0;

    while(str[i]!='\0'){
        char ch = str[i];

        if(isspace(ch)){
            i++;
            continue;
        }
        if(strchr(operand,ch)){
            operat++;
            i++;
        }
        else if(isdigit(ch)){
            opernd++;
            i++;
            while(isdigit(str[i])){
                i++;
            }
        }
        else{
            i++;
        }
    }


    if(operat == 1 && opernd == 2){
        printf("valid\n");
    }
    else{
        printf("Invalid. Has %d operands and %d operators\n",opernd,operat);
    }

    return 0;
}
