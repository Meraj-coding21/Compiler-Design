#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char str[1000];
    char vowels[100];
    char consonants[100];
    char punctuations[100];
    char digits[100];
    int i = 0;
    int v_indx=0;
    int c_indx=0;
    int p_indx=0;
    int d_indx = 0;

    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);

    str[strcspn(str,"\n")] = 0;

    while(str[i]!='\0'){
        char alphabet = tolower(str[i]);
        if(isalpha(str[i])){
            if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u'){
                vowels[v_indx] = str[i];
                v_indx++;
            }
            else{
                consonants[c_indx++]= str[i];
            }
        }
        else if(isdigit(alphabet))
            digits[d_indx++]=str[i];
        else if(ispunct(alphabet))
            punctuations[p_indx++]=str[i];

        i++;
    }
    vowels[v_indx] = '\0';
    consonants[c_indx] = '\0';
    digits[d_indx] = '\0';
    punctuations[p_indx] = '\0';

    printf("vowels: %s, punctuations: %s, consonants: %s, digits: %s\n",vowels,punctuations,consonants,digits);

    return 0;
}
