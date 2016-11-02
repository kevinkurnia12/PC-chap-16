#include <iostream>

using namespace std;

template <class AbsValue>
int abs (AbsValue value){
	if (value < 0){
		value = value * -1;
	}
	return value;
}

int main(){
	int x;
	
	cout << "Enter a minus number : ";
	cin >> x;
	
	cout << endl << "Number will be : " << abs(x);
	
	return 0;
}
