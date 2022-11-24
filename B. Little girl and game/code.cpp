// Must practice this logic , learned from a chinese student of zhejiang university
#include<bits/stdc++.h>
using namespace std;
int a[256], ans;
string st;
int main() {
	cin >> st;
	for (auto i : st) {
		if (a[i])
			ans--; else
			ans++;
		a[i] = 1 - a[i];
	}
	if (!ans || ans & 1)
		cout << "First"; else
		cout << "Second";
}
