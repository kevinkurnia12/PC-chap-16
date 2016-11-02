#include<iostream>
#include<string>
using namespace std;

template<class maxmin>
int mm (maxmin v1, maxmin v2){
	maxmin temp;
	
	if(v1 < v2){
		v1 = v1;
	}
	else {
		v1 = v2;
	}
	return v1;
}

int main (){
	int min1, min2;
	double max1, max2;
	
	cout << "Enter two number : ";
	cin >> min1 >> min2;
	
	mm(min1, min2);
	
	cout << endl << "Minimum value : " << min1 << endl << endl;
	
	cout<<"Enter two number : ";
	cin >> max1 >> max2;
	
	mm(max1, max2);
	
	cout << endl << "Max value : "<< max2;
	
	return 0;
}

