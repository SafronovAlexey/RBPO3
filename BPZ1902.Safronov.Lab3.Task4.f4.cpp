module BPZ1902.Safronov.Lab3.Task4:f4;
import<cmath>;
import :a;
namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f4(double eps) {
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
		}
	}
}