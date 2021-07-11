#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		iota(a.begin(), a.end(), 1);
		if (n % 2 == 0) {
			// if 'n' is even, then simply swap two adjacent numbers
			for (int i = 0; i < n - 1; i++) {
				swap(a[i], a[i + 1]);
				i++;
			}
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
		} else {
			// otherwise, swap two adjacent elements and leave the last 3 numbers as is
			for (int i = 0; i < n - 3; i++) {
				swap(a[i], a[i + 1]);
				i++;
			}
			// swap the last three numbers by in this order:
			int temp = a[n - 3];
			a[n - 3] = a[n - 2];
			a[n - 2] = a[n - 1];
			a[n - 1] = temp;
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
		}
		cout << '\n';
	}
	return 0;
}
