// return the total number of pairs in the array/list which sum to X.
#include <iostream>
using namespace std;


int pairSum(int input[], int n, int x){
	int count =0;
	for(int i=0; i < n; i++){
		for (int j= i+1; j<n; j++){
			if (input[i]+input[j] == x){
				count++;
			}
		}
	}
	return count ;
}

int main (){
	int n;
	int x;
	cin >> n;
	int *input = new int [n];
	for(int i=0; i<n; i++){
		cin >> input[i];
	}
	cin >> x;
	cout << pairSum(input, n , x) << endl;
}