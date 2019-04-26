#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<string> spisok(n);
	for (int i = 0; i < n; i++) {
		cout << "Word number " << i + 1 << " - this is " << endl;
		cin >> spisok[i];
	}
	bool b = false;
	string w;
	int schet;
	cout << "Input of the word:" << endl;
	cin >> w;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < spisok[i].length(); j++) {
			if (w[j] == spisok[i][j]) {
				if (schet == n) {
					b == true;
				}
				schet++;
			}
		}
	}
	if (b == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}