#include <iostream>
using namespace std;

int main(void){
    int n, map[3][3];
    bool reach[3][3] = {false};

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
        }
    }

    reach[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(reach[i][j]){
                if(j + map[i][j] < n) reach[i][j + map[i][j]] = 1;
                if(i + map[i][j] < n) reach[i + map[i][j]][j] = 1;
            }
        }
    }

    if(reach[n-1][n-1] > 0)
        cout << "HaruHaru";
    else
        cout << "Hing";
}
