#include <iostream>
using namespace std;


int length(int x1, int x2, int y1, int y2){
	return (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
}

int can_run(int n){
	int desk[n][n];
	int prof_x, prof_y, stud_x, stud_y;
	int start_x, start_y, end_x, end_y;
 	int prof_find=0, stud_find=0, others=0;
 	int student, distance;
 	
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			cin>>desk[i][j];
			if (desk[i][j] == 5){
				prof_x = i;
				prof_y = j;
				prof_find = 1;
			}
			if (desk[i][j] == 2){
				stud_x = i;
				stud_y = j;
				stud_find = 1;
			}
		}
		if (prof_find && stud_find) break;
	}
	if (prof_x >= stud_x){
		start_x = stud_x;
		end_x = prof_x;
	}
	else{
		start_x = prof_x;
		end_x = stud_x;
	}
	
	if (prof_y >= stud_y){
		start_y =  stud_y;
		end_y = prof_y;
	}
	else{
		start_y = prof_y;
		end_y = stud_y;
	}
	//cout<<length(start_x,end_x,start_y,end_y)<<endl;
	
	if (length(start_x,end_x,start_y,end_y) < 25) return 0;
	for (int i=start_x; i<=end_x; i++)
		for (int j=start_y; j<=end_y; j++){
			if (desk[i][j] == 1) others++;	
		}
	if (others<3) return 0;
	return 1;
}

int main(void)
{
 	int n;
 	
 	cin>>n;
 	cout<<can_run(n);
	
	
	return 0;
}
