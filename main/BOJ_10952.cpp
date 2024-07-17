#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A = -1, B= -1;
	vector<int> V;

	while (A != 0 || B != 0) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		A = a;
		B = b;
		V.push_back(a + b);

	}

	for (int i = 0; i < V.size(); i++) {
		cout << V[i] << endl;
	}
	


	return 0;

}
