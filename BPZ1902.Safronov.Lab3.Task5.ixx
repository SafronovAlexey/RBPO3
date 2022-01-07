export module BPZ1902.Safronov.Lab3.Task5;
import<cmath>;

export namespace RBPO{
	namespace Lab3 {
		namespace Task5 {
			double f1(double x);
			double f2(double x);
			double a(int i);
			double f3(int n);
			double f4(double eps);
		}
	}
}

module:private;
double RBPO::Lab3::Task5::f1(double x) {
	return pow((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x), -1) * (5 - 2 * x * x);
}
double RBPO::Lab3::Task5::f2(double x) {
	if (x <= 0) {
		if (x != sqrt(7)) {
			return -x / (x * x - 7);
		}
		else {
			return 0;
		}
	}
	else {
		return log(x) + 9;
	}
}
double RBPO::Lab3::Task5::a(int i) {
	return  (pow(-1.0, i) * (1 / (double)(2 * i + 1)));
}
double RBPO::Lab3::Task5::f3(int n) {
	double sum = 0.0;
	int i = 0;
	do {
		sum += a(i);
		i++;
	} while (i <= n);
	return sum;
}
double RBPO::Lab3::Task5::f4(double eps) {
	double prev = a(0);
	double next = a(1);
	double sum = prev + next;
	int i = 2;
	do {
		sum += a(i);
		i++;
	} while (abs(a(i) - a(i - 1)) > eps);
	return sum;
}
