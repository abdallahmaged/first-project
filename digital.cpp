#include <iostream>
#include<windows.h>
using namespace std;


int main() {
	int hs;
	int min;
	int sec;
	cin >> hs >> min >> sec;
	while (true) {
		system("cls");
		if (sec > 59) {
			sec = 0;
			min++;
		}
		if (min > 59) {
			min = 0;
			hs++;
		}
		if (hs > 23) {
			hs = 0;
		}
		cout << hs << ":" << min << ":" << sec << endl;
		sec++;
		Sleep(900);

	}
	
		
		


	
	
}





