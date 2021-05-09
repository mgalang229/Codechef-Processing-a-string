#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		int sum = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			// check if the current character is a digit
			if (s[i] >= '0' && s[i] <= '9') {
				// if yes, then get the numerical value of the character and add it to 'sum'
				sum += (s[i] - '0');
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
