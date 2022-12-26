#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "¬ведите количество сравниваемых чисел:" << endl;
	int n,a[100000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int maxi=-9999999999999999;
	for (int i = 0; i < n; i++) {
		if (a[i] > maxi) {
			maxi = a[i];
		}
	}
	cout << maxi;
}