#include <iostream>
using namespace std;
int main() {
	int a[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
				a[i][j] = rand() % 10;
			cout << " " << a[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
