#include<iostream>
using namespace std;

char before(char x){
	if(x >='A' && x <='Z'){
		if(x=='A'){
			return 'Z';
		}else{
			return x-1;
		}
	}
	return '0';	
}



int main(){
	cout<< before('A');
    cout<< before('B');
    cout<< before('P');
	cout<< before('T');
	cout<< before('Z');
	cout<< before('a');
	cout<< before('o');
	cout<< before('c');
}