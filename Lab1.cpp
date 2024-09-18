#include <iostream>
#include <windows.h>

using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string name1, name2;
	cout << "Введіть перше ім'я:";
	cin >> name1;
	cout << "Введіть друге ім'я:";
	cin >> name2;
	
	


	//перевірка
	if (name1 == name2) {
		cout << "Авторизовано!" << endl;
	} 
	else {
		cout << "Спробуйте знову." << endl;
	}
}
