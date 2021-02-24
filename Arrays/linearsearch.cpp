#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x){
	for (int i=0; i<n; i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	int arr[100000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int x;
	cin >> x;
	cout << linearSearch(arr, n, x);
}
