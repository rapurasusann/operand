#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int a = 0;
	int b;
	string ope;

	cout << "入力>";
	cin >> setw(50) >> b;

	do
	{
		cout << " " << setw(50) << right << a << endl;
		ope = b > 0 ? "+" : "-";
		cout << ope << setw(50) << right << b << endl;
		cout << " --------------------------------------------------\n";
		a = a + b;
		cout << " " << setw(50) << right << a << endl;

		cout << "入力>";
		cin >> setw(50) >> b;
	}while(b != 0);
}
