#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;

double f(int n) {
	double res = 0;
	double tmp = 1;
	double tmp2 = 1;
	for (int i = 0; i <= n; i++) {
		double numen = n - i;
		double tmp3 = 1;
		double denumen;
		for (int j = 1; j <= numen; j++) {
			tmp3 *= j;
		}
		numen = tmp3;
		double sum = 0;

		for (int k = 1; k <= tmp + i; k++) {
			sum += tmp2;
			tmp2 += 1;
		}
		denumen = sqrt(sum);

		res += numen / denumen;
	}
	return res;

}
int main() {

	setlocale(0, "Rus");
	int n = 0;
	while (n <= 0) {
		cout << "¬ведите целое положительное число: " << endl;
		cin >> n;

	}
	cout << f(n);
}