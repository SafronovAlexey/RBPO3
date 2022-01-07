module BPZ1902.Safronov.Lab3.Task2;
namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return pow((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x), -1) * (5 - 2 * x * x);
			}
			double f2(double x) {
				if (x <=0) {
					if(x != sqrt(7)){
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
			
			double a(int i) {
				return  (pow(-1.0, i) * (1 / (double)(2 * i + 1)));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev + next;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}