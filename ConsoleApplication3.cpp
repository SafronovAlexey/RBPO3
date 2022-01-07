#include <iostream>
#include "math.h"

#include<iostream>
import BPZ1902.Safronov.Lab3.Task1;
import BPZ1902.Safronov.Lab3.Task2;
import BPZ1902.Safronov.Lab3.Task3;
import BPZ1902.Safronov.Lab3.Task4;
import BPZ1902.Safronov.Lab3.Task5;

using namespace std;
void task1(double x, int n, double eps);
void task2(double x, int n, double eps);
void task3(double x, int n, double eps);
void task4(double x, int n, double eps);
void task5(double x, int n, double eps);
int main() {
	setlocale(LC_ALL, "Russian");
	double x;
	double eps;
	int n;
	cout << "x: ";
	cin >> x;
	cout << "eps: ";
	cin >> eps;
	cout << "n: ";
	cin >> n;
	while (true) {
		int choose = 1;
		printf("Выберите способ решения\n\t1 - Task1\n\t2 - Task2\n\t3 - Task3\n\t4 - Task4\n\t5 - Task5\n\t6 - Выход\nВыбранный способ: ");
		cin >> choose;
		printf("\n");
		switch (choose) {
		case 1:
			task1(x, n, eps);
			printf("\n");
			break;
		case 2:
			task2(x, n, eps);
			printf("\n");
			break;
		case 3:
			task3(x, n, eps);
			printf("\n");
			break;
		case 4:
			task4(x, n, eps);
			printf("\n");
			break;
		case 5:
			task5(x, n, eps);
			printf("\n");
			break;
		case 6:
			printf("Конец");
			return 0;
		default:
			printf("Не правильнеы данные\n");
		}
	}
	return 0;
}

void task1(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task1::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task1::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task1::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task1::f4(eps) << endl;
}


void task2(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task2::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task2::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task2::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task2::f4(eps) << endl;
}

void task3(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task3::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task3::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task3::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task3::f4(eps) << endl;
}

void task4(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task4::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task4::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task4::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task4::f4(eps) << endl;
}
void task5(double x, int n, double eps) {
	cout << "f1(" << x << ") : " << RBPO::Lab3::Task5::f1(x) << endl;
	cout << "f2(" << x << ") : " << RBPO::Lab3::Task5::f2(x) << endl;
	cout << "f3(" << n << ") : " << RBPO::Lab3::Task5::f3(n) << endl;
	cout << "f4(" << eps << ") : " << RBPO::Lab3::Task5::f4(eps) << endl;
}
