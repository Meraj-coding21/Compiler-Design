#include<stdio.h>
#include<string.h>

#define MAX_LINES 100
#define MAX_LENGTH 1000

int main(){
    char lines[MAX_LINES][MAX_LENGTH];
    int lineCount = 0;

    printf("Enter your lines: ");

    while(lineCount<MAX_LINES && fgets(lines[lineCount], MAX_LENGTH, stdin)!=NULL){
        lineCount++;
    }

    int in_mul_com = 0;

    for(int i=0; i<lineCount; i++){
        char clean[MAX_LENGTH];
        int clean_pos = 0;

        for(int j=0;lines[i][j]!='\0';j++){
            if(in_mul_com){
                if(lines[i][j]=='*' && lines[i][j+1]=='/'){
                    in_mul_com = 0;
                    j++;
                }
            }
            else{
                if(lines[i][j]=='/' && lines[i][j+1]=='/'){
                    break;
                }
                else if(lines[i][j]=='/' && lines[i][j+1]=='*'){
                    in_mul_com = 1;
                    j++;
                }
                else{
                    clean[clean_pos] = lines[i][j];
                    clean_pos++;
                }
            }
        }

        clean[clean_pos] = '\0';

        if(strlen(clean)>0){
            printf("After Deleting all comments: %s\n",clean);
        }
    }

    return 0;
}
