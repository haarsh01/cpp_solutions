#include <iostream>
using namespace std;
void swapElements(int *input, int i, int j)
{
 int temp = input[i];
 input[i] = input[j];
 input[j] = temp;
}
void reverse(int *input, int start, int end)
{
 int i = start, j = end;
 while (i < j)
 {
 swapElements(input, i, j);
 i++;
 j--;
 }

}
void rotate(int *input, int d, int n)
   
{
 
 reverse(input, 0, n - 1);
 reverse(input, 0, n - d - 1);
 reverse(input, n - d, n - 1);
}







int main(){
	int n;
	cin >> n;
	int input[100];
	for(int i=0; i <n; i++){
		cin >> input[i];
	}
	int d;
	cin >>d;
	rotate(input,d,n);
	for(int i=0; i<n;i++){
		cout << input[i] << " ";
	}
	cout << endl;
}