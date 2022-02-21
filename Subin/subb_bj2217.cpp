#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int n, temp;
    int weight[100000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", weight + i);
    }
    sort(weight, weight + n);
    int mx = 0;
    for(int i = 0; i < n; i++){
        temp = (n - i) * weight[i];
        if(temp >= weight[n - 1])
            mx = max(mx, temp);
    }
    printf("%d", mx);

}
