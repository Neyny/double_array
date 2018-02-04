#include <iostream>
using namespace std;
int main() {
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j ==(4 - i)) {
				a[i][j] = 7;
			}
			else {
				a[i][j] = 0;
			}
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}