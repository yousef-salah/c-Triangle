#include <iostream>

using namespace std;

void Spaces(int , int);

int main() {
	int n, spacesB = -1;  // spacesB => spaces Between numbers in the same line.
	cin >> n;
	bool isNumber = false;
	for (int row = 1; row <= n; row++) {

		Spaces(n, row);
	
		if (row != 1 and row != n) {
			spacesB += 2;
			cout << row;
			for (int k = 1; k <= spacesB; k++) cout << " ";
			cout << row;
		}

		else if (row == n) for (int lastR = 1; lastR <= n + (n - 1); lastR++) {   // lastR => last Row.
			isNumber = !isNumber;
			if (isNumber) cout << n;
			else cout << " ";
		}
		else cout << row;

		Spaces(n, row);
		
	    cout << endl;
	}
	return 0;
}

void Spaces( int n, int row) {
	for (int sapces = 1; sapces <= n - row; sapces++) cout << " ";
}

//Input = 5

//OutPut
//    1
//   2 2
//  3   3
// 4     4
//5 5 5 5 5

