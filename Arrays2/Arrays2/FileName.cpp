#include <iostream>
#include <string>
using namespace std;
int main() {
	int arr[3][4] = {{5, 2, 7, 19}, {6, -2, 100, 52}, {88, 71, 2, 9}};

	cout << sizeof(arr) << endl;

	int minimal = INT_MAX;
	int maximal = INT_MIN;
	int sum = 0;
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (arr[i][j] < minimal) {
				minimal = arr[i][j];
			}

			if (arr[i][j] > maximal) {
				maximal = arr[i][j];
			}
			sum += arr[i][j];
			count++;
		}
	}
	cout << minimal << " " << maximal << " " << sum / count;
}