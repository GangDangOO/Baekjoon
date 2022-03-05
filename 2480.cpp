#include <iostream>

using namespace std;

int main(){
	int input_1, input_2, input_3;
	cin >> input_1;
	cin >> input_2;
	cin >> input_3;
	
	if((input_1 == input_2 && input_1 == input_3) && input_2 == input_3){
		cout << 10000 + input_1 * 1000;
	} else if(input_1 == input_2){
		cout << 1000 + input_1 * 100;
	} else if(input_2 == input_3){
		cout << 1000 + input_3 * 100;
	} else if(input_1 == input_3){
		cout << 1000 + input_3 * 100;
	} else{
		int high_num = 0;
		if(high_num < input_1) high_num = input_1;
		if(high_num < input_2) high_num = input_2;
		if(high_num < input_3) high_num = input_3;
		cout << high_num * 100;
	}
	
	return 0;
}
