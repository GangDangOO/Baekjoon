#include <iostream>
#define size 10001

using namespace std;

int Self_Num(int n);

int main(){
	bool b_arr[size];
	
	for(int i = 1; i < size; i++){
		b_arr[i] = true;
	}
	
	for(int i = 1; i < size; i++){
		if(Self_Num(i) <= size) b_arr[Self_Num(i)] = false;
	}
	
	for(int i = 1; i < size; i++){
		if(b_arr[i]) cout << i << endl;
	}
	
	return 0;
}

int Self_Num(int n){
	int result = n;
	
	while(n >= 10){
		result += n % 10;
		n /= 10;
	}
	result += n;
	
	return result;
}
