#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;

int main(void){
    int n, a, b;
    bitset<3001> gap;
    while(scanf("%d", &n) != EOF){
        scanf("%d", &a);
        for(int i = 0; i < n - 1; i++){
            scanf("%d", &b);
            gap.set(abs(a - b));
            a = b;
        }
        int i = 1;
        while(i < n){
            if(!gap[i]){
                printf("Not jolly\n");
                break;
            }
            i++;
        }
        if(i >= n){
            printf("Jolly\n");
        }
        gap.reset();
    }
}
