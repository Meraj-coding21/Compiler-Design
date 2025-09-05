#include<stdio.h>

int main(){
    char str[100];
    int i=0,count=0;

    printf("Enter your String: ");
    fgets(str,sizeof(str),stdin);

    while(str[i]!= '\0'){
        if(str[i]==' '){
            count++;
        }
        i++;
    }

    printf("Number of White Spaces: %d",count);

    return 0;
}
