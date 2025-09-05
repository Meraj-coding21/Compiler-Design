#include<stdio.h>

int main(){
    char str[100],temp[100];
    int i=0,j=0;

    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!='\0'){
        if(str[i]!= ' '){
            temp[j]=str[i];
            j++;
        }
        i++;
    }
    temp[j]= '\0';

    printf("String without spaces: %s\n",temp);

    return 0;
}
