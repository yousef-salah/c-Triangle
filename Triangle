#include <iostream>

using namespace std;

int main() {
	int n, spacesB = -1;
	cin >> n;
	bool isNumber = false;
	for (int row = 1; row <= n; row++) {

		for (int sapces = 1; sapces <= n- row; sapces++) cout << " ";		
	
		if (row != 1 and row != n) {
			spacesB += 2;
			cout << row;
			for (int k = 1; k <= spacesB; k++) cout << " ";
			cout << row;
		}

		else if (row == n) for (int lastR = 1; lastR <= n + (n - 1); lastR++) {
			isNumber = !isNumber;
			if (isNumber) cout << n;
			else cout << " ";
		}
		else cout << row;

		for (int sapces = 1; sapces <= n - row; sapces++) {
			cout << " ";
		}
		cout << endl;
	}
	return 0;
}
