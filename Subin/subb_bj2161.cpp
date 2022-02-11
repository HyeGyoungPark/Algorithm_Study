#include <iostream>
#include <queue>
using namespace std;

int main(void){
    int n;
    queue<int> card;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            printf("%d ", i);
        }
        else{
            card.push(i);
        }
    }

    if(n % 2 != 0){
        card.push(card.front());
        card.pop();
    }

    while(!card.empty()){
        printf("%d ", card.front());
        card.pop();

        card.push(card.front());
        card.pop();
    }

}
