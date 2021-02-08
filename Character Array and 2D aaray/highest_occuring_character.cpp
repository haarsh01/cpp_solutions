
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char highestOccurringChar(char input[])
{
	int freq[256] = {0};
	for (int i=0;input[i] != '\0'; i++){
		char c = input[i];
		freq[c] = freq[c] + 1;
	}
	int max =0;
	char highest;
	for(int i=0; input[i] != '\0'; i++){
		if(max < freq[input[i]]){
			max = freq[input[i]];
			highest=input[i];

		}
	}
	if (max==0){
		return 0;
	}
	else {
		return highest;
	}
}


int main(){
	int size = 256;
	char str[size];
	cin >> str;
	cout << highestOccurringChar(str);
}