#include <iostream>
using namespace std;

int main(){
	int n, arr[100000], sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	for(int i=0; i<n; i++){
		sum=sum+arr[i];
	}
	cout << sum;
}