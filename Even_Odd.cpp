#include <iostream>
using namespace std;

void even_odd(int num){
	if(num%2 == 0){
		cout<<num<<" is even!!"<<endl;
	}
	else{
		cout<<num<<" is odd!!"<<endl;
	}
}
int main(){
	int number;
	cout<<"Enter a number : ";
	cin>>number;
	even_odd(number);
	
	return 0;
}
