#include <iostream>

using namespace std;

int main(){
	int test_num=0;
	int num_floors=0;
	cin >> test_num;
	for(int i=0;i<test_num;i++){
		cin >> num_floors;
		for(int floor=1;floor<(num_floors+1);floor++){
			for(int room=1;room<(floor+1);room++){
				if(room==1 or room==floor){
					cout << "1";
				}
				else{
					cout << "0";
				}
				if (room < floor){
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
