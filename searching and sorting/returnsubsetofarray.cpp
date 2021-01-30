#include <iostream>
using namespace std;

int subset(int input[], int n, int startIndex, int output[][]){
	if(startIndex == n){
		output[0][0] = 0;
		return 1;
	}
	int smallSize = subset(input, n, startIndex+1, output);
	for(int i=0; i< smallSize; i++){
		output[i+smallSize][0] = output[i][0] + 1;
		output[i+smallSize][1] = input[startIndex];
		for(int j= 1; j <= )
	}
}







int main(){
	int input[], length, output[];
	cin >>  length;
	for(int i=0; i < length ; i++)
		cin >> input[i];
	int size = subset(input, length, output);
	for(int i = 0; i < size; i++){
		for(int j=1; j<= output[i][0]; j++){
			cout << output[i][j] << " ";
		}
		cout << endl;
	}
}