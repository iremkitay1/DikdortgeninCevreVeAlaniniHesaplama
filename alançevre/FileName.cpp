#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int kisaKenar, uzunKenar, alan, cevre;
	cout << "K�sa kenar� giriniz : ";
	cin >> kisaKenar;
	cout << "Uzun kenar� giriniz : ";
	cin >> uzunKenar;
	alan = kisaKenar * uzunKenar;
	cevre = 2 * (uzunKenar + kisaKenar);
	cout << "Dikd�rtgenin alan� : " << alan << endl;
	cout << "Dikd�rtgenin �evresi : " << cevre << endl;

	return 0;
}