#include <iostream>

using namespace std;

template <class T>
T total(T value)
{
	T total = 0;
	for(int x = 0; x < value; x++)
	{
		total += value;
	}
	return total;
}
int main(){
	int v;
	
	cout << "How many numbers do u want to add : ";
	cin >> v;
	cout << endl << "Total : " << total(v);
	return 0;
}

