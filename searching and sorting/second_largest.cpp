#include <iostream>
using namespace std;
#include <climits>

int findSecondLargest(int *input, int n){
	if (n <=0 ){
		return INT_MIN;
	}
int largest = input[0];
int secondLargest = INT_MIN;
for(int i =1; i < n; i++){
	if(input[i] > largest){
		secondLargest = largest;
		largest = input[i];
	}
	else if (input[i] > secondLargest){
		secondLargest = input[i];
	}
}
return secondLargest;

}


int main(){
	int size;
	cin >> size ;
	int *input = new int [size];
	for (int i=0; i < size; i++){
		cin >> input[i];
	}
	cout << findSecondLargest(input, size) << endl;
}