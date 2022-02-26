#include <iostream>
using namespace std;

int main()
{ 
	int n,arr[50];
	int min_num=1000000, max_num=0;
	
	cin>>n;
	
	for (int i=0; i<n; i++){
		cin>>arr[i];
		if (arr[i] < min_num) min_num = arr[i];
		if (arr[i] > max_num) max_num = arr[i];
	}
	
	int answer = min_num*max_num;
	cout<<answer;
	
	return 0;
}
