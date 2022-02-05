#include <iostream>

using namespace std;

int main(){
	int n,k;
	cin>>n;
	
	char mirror[n][n];
	for (int i=0; i<n; i++)
		for (int j=0; j<n; j++)
			cin>>mirror[i][j];
	
	cin>>k;
	
	if (k==1){
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++)
				cout<<mirror[i][j];
			cout<<"\n";
		}
	}
	if (k==2){
		for (int i=0; i<n; i++){
			for (int j=n-1; j>=0; j--)
				cout<<mirror[i][j];	
			cout<<"\n";
		}
		
	}
	if (k==3){
	    for (int i=n-1; i>=0; i--){
			for (int j=0; j<n; j++)
				cout<<mirror[i][j];
			cout<<"\n";
		}
	}
	
	return 0;
}
