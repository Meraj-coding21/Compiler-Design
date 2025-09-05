#include<stdio.h>
#include<string.h>

#define MAX_LINES 100
#define MAX_LENGTH 1000

int main(){
    char lines[MAX_LINES][MAX_LENGTH];
    int linesCount = 0;

    printf("Enter your Lines:\n");

    while(linesCount < MAX_LINES && fgets(lines[linesCount],MAX_LENGTH,stdin)!= NULL){
        linesCount++;
    }

    int in_multiline_comment = 0;

    for(int i =0; i<linesCount; i++){
        if(in_multiline_comment){
            printf("Multiline Comment Detected: %s",lines[i]);

            if(strstr(lines[i],"*/")!=NULL){
                in_multiline_comment = 0;
            }

        }

        else
        {
            if(strstr(lines[i],"//")!= NULL){
                printf("Single line comment detected: %s", lines[i]);
            }
            else if(strstr(lines[i],"/*")!=NULL){
                printf("Multiline Comment detected: %s", lines[i]);

                if(strstr(lines[i],"*/")==NULL){
                    in_multiline_comment = 1;
                }
            }
            else{
                printf("No comment:          %s", lines[i]);
            }
    }
}

    return 0;

}
