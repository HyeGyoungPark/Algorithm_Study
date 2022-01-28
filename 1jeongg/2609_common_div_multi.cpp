#include <iostream>
using namespace std;

int main(){
	int a, b, index=1;
	int divisor, multiplier;
	
	cin>>a;  //큰 수 
	cin>>b;  // 작은 수 
	
	if (a<b) {
		int temp = a;
		a = b;
		b = temp;
	}
	
	while((a*index)%b != 0) index++;
	multiplier = a*index;
	divisor = a*b/multiplier;
	
	cout<<divisor<<endl;
	cout<<multiplier;
	return 0;
}
