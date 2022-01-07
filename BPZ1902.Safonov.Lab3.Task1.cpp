module BPZ1902.Safronov.Lab3.Task1;


namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return pow((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x), -1) * (5 - 2 * x * x);
			}

			double f2(double x) {
				return (x <= 0) ? (x != sqrt(7)) ? -x / (x * x - 7) : 0 : (log(x) + 9);
			}
			double a(int i) {
				return  (pow(-1.0, i) * (1 / (double)(2 * i + 1)));
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev + next;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}