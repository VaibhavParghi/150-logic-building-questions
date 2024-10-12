#include <iostream>
using namespace std;
int armstrong(int num){
	int sum = 0;
	while ( num >  0 ) { 
	int last = num % 10;

	sum =sum+(last * last * last);

	num = num /10;  

	}
	return sum;
}

int main(){
  int num;
  cin>>num;
  cout<<armstrong(num);
  return 0;
}
