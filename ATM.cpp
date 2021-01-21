#include <iostream>
using namespace std;

int main() {
	int x;
	double y;
	cin>>x>>y;
	if(x % 5 == 0 && y >= x + 0.50){
	    cout << y - x - 0.50;
	}
	else{
	    cout << y;
	}
	return 0;
}
