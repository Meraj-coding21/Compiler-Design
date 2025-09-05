#include<stdio.h>
#include<string.h>
#include<strings.h>

int main(){
    char str[200];
    int a_count = 0;
    int an_count = 0;
    int the_count = 0;

    char *token;
    const char *delimiters = " .,-\n";

    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);

    token = strtok(str, delimiters);

    while(token!=NULL){
        if(strcasecmp(token,"a")==0)
            a_count++;
        else if(strcasecmp(token,"an")==0)
            an_count++;
        else if(strcasecmp(token,"the")==0)
            the_count++;

        token = strtok(NULL, delimiters);
    }

    printf("A: %d\nAn: %d\nThe: %d\n",a_count,an_count,the_count);

    return 0;
}
