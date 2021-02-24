// Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
#include <iostream>
using namespace std;

void arrange(int arr[], int n){
	int left =0;
	int right = n -1 ;
	int 
}

int main(){
	int n;
	cin >> n;
	int arr[] = new int [n];
	arrange(arr,n);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}