#include<stdio.h>
#include<ctype.h>

int main(){
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){
        if(isdigit(str[i]))
            count++;
        i++;
    }
    printf("\nNumber of digits: %d\n",count);

    return 0;
}
