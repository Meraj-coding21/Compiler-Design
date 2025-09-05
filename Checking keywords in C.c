#include<stdio.h>
#include<string.h>

int main(){
    char keywords[32][10] ={"int","float","double","long","do","const","struct","extern","void","return","switch",
                            "if","else","break","goto","continue","char","for","while","unsigned","volatile","static","auto","case",
                            "signed","typedef","enum","union","short","register","sizeof","default"};
    char str[10];
    int flag =0;

    printf("Enter the keyword you want check: ");
    scanf("%s",&str);

    for(int i=0; i<32; i++){
        if(strcmp(str,keywords[i])== 0){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("\"%s\" is a keyword\n",str);
    }
    else{
        printf("\"%s\" is not a keyword\n",str);
    }

    return 0;

}
