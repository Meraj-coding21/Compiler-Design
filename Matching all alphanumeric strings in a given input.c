#include<stdio.h>
#include<ctype.h>

int main(){
    char str[200];
    int i = 0;
    int start = 0;

    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!= '\0'){
        while(str[i]!='\0' && !isalnum(str[i])){
            i++;
        }
        if(str[i]){
            start = i;

            while(str[i]!='\0' && isalnum(str[i])){
                i++;
            }

            char temp = str[i];
            str[i] = '\0';

            printf("Matched Word: %s\n",&str[start]);

            str[i] = temp;
        }
    }

    return 0;
}
