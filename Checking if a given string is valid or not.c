#include<stdio.h>
#include<string.h>
#include<ctype.h>

int is_valid(const char *email){
    int i = 0;
    int at_index = -1;
    int dot_index = -1;
    int n = strlen(email);

    while(email[i]!='\0'){
        if(email[i]=='@'){
            if(at_index!= -1)
                return 0;
            at_index = i;
        }
        else if(email[i]=='.'){
            if(at_index!= -1){
                dot_index = i;
            }
        }
        i++;
    }

    if(at_index < 1) return 0;
    if(dot_index > n-1) return 0;
    if(dot_index == 1 || dot_index < at_index+2) return 0;
    if(isdigit(email[0])) return 0;

    return 1;
}


int main(){
    char email[200];

    printf("Enter your mail: ");
    fgets(email,sizeof(email),stdin);

    if(is_valid(email)){
        printf("Valid Email\n");
    }
    else{
        printf("Invalid Email\n");
    }

    return 0;
}
