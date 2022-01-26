#include <stdio.h>

int main(void) {
    char str[255];
    gets(str);
    //여기까지가 입력
    
    int num_happy = 0, num_sad = 0;
    int strsize = sizeof(str) / sizeof(str[0]);
    
    for(int i = 0; i < strsize; i++) {
        if(str[i] == ':') {
            if(str[i+1] == '-') {
                if(str[i+2] == ')') num_happy++;
                else if(str[i+2] == '(') num_sad++;
            }
        }
    }
    
    if(num_sad == 0 && num_happy == 0) printf("none");
    else if(num_happy == num_sad) printf("unsure");
    else if(num_happy > num_sad) printf("happy");
    else printf("sad");
    
    return 0;
}
