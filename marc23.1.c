#include <stdio.h>

#define SIZE 26


void feltolt(char tomb[]){
    for(int i = 0; i<26; i++){
        tomb[i] = 'a' + i;
    }
    tomb[26] = '\0';
}

int main(){
    
    char tomb[SIZE+1];
    feltolt(tomb);
    printf("%s\n",tomb);

return 0;

}