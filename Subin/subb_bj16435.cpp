#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int n, l, h[1000];
    scanf("%d %d", &n, &l);
    for(int i = 0; i < n; i++){
        scanf("%d", &h[i]);
    }
    sort(h, h + n);
    for(int i = 0; i < n; i++){
        if(l < h[i]){
            break;
        }
        else{
            l++;
        }
    }
    printf("%d", l);

}
