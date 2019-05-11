#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
double stuAve(const vector<vector<double>>& a, int r) {
	double sum = 0;
	for (int i = 0; i < a[i].size(); i++) {
		sum += a[r][i];
	}
	return sum / 3.0;
}
double courseAve(const vector<vector<double>>& a, int c){
	double sum = 0;
	for (int i = 0; i < a.size(); i++) {
		sum += a[i][c];
	}
	return sum / 5.0;
}
int main() {
	vector<vector<double>>a(5);
	for (int i = 0; i < 5; i++)
		vector<double>(3);
	a[0][0] = 80.0; a[0][1] = 70.0, a[0][2] = 90.0;
	a[1][0] = 85.0; a[1][1] = 77.0; a[1][2] = 95.0;
	a[2][0] = 83.0; a[2][1] = 75.0; a[2][2] = 70.0;
	a[3][0] = 73.0; a[3][1] = 95.0; a[3][2] = 67.0;
	a[4][0] = 88.0; a[4][1] = 79.0; a[4][2] = 71.0;

	for (int i = 0; i < 5; i++) {
		cout << fixed << setprecision(1) << a[i][0] << "," << a[i][1] << "," << a[i][2] << "," << stuAve(a, i) << endl;
	}
	cout << "Average:";
	for (int i = 0; i < 3; i++) {
		cout << fixed << setprecision(1) << courseAve(a, i);
		if (i < 2)
			cout << ",";
		if (i == 2)
			cout << " ";
	}
	system("pause");
	return 0;
}