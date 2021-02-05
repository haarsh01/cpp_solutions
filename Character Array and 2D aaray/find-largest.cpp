#include <iostream>
using namespace std;
#include <climits>
void findLargest (int arr[][100], int m, int n){
	int maxSum = INT_MIN , index = -1;
	bool isRow = true;
	for (int i=0; i<m; i++){
		int rowSum = 0;
		for(int j = 0; j< n; j++){
			rowSum += arr[i][j];

		}
		if(rowSum > maxSum){
			maxSum = rowSum;
			index = i;
		}
	}
	for(int j=0; j<n; j++){
		int colSum = 0;
		for(int i =0; i<m; i++){
			colSum += arr[i][j];
		}
		if(colSum > maxSum){
			isRow = false;
			maxSum = colSum;
			index = j;
		}
	}
	if(isRow){
		cout << "row" << " ";
	}
	else {
		cout << "column" << " ";
	}
	cout << index << " " << maxSum << endl;
}

int main() {
	int a[100][100];
	int m, n;
	cin >> m >> n;
	for (int i =0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	findLargest(a,m,n);
}