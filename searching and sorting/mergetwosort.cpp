#include <iostream>
using namespace std;

void mergeTwoSortedArrays (int arr1[], int size1 , int arr2[], int size2, int ans[]){
	int i =0, j = 0 , k =0 ;
	while(i < size1 && size2){
		if (arr1[i] < arr2[j]){
			ans[k] = arr1[i];
			k++;
			i++;
		}
		else {
			ans[k] = arr2[j];
			k++;
			j++;
		}
	}

	 while(i < size1){
	 	ans[k] =  arr1[i];
	 	i++;
	 	k++;
	 } 
	 while(j < size2) {
	 	ans[k] = arr2[j];
	 	j++;
	 	k++;

	 }
}
void printArray(int input[], int n){
	for (int i = 0; i<n; i++){
		cout << input[i] << " ";
	}
	cout << endl;
}

int main (){
	int size1;
	cin >> size1;
	int arr1[100];
	for(int i =0; i < size1; i++){
		cin >> arr1[i];
	}
	int size2;
	cin >> size2;
	int arr2[100];
	for(int j=0; j < size2; j++){
		cin >> arr2[j];
	}
	int ans[] = int [size1 + size2];
	mergeTwoSortedArrays(arr1, size2, arr2, size2, ans);
	for(int i = 0; i < size1  + size2; i++){
		cout <<  ans[i] << " ";
	}
	cout << endl;
	}
