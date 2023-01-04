#include <iostream>

using namespace std;

int main(){
	int weight = 0;
	cin >> weight;
	if((weight % 2 != 0) || (weight < 3)){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}


	return 0;
}
