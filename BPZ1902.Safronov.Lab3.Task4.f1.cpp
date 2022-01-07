module BPZ1902.Safronov.Lab3.Task4:f1;
import<cmath>;
namespace RBPO {
	namespace Lab3 {
		namespace Task4 {
			double f1(double x) {
				return pow((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x), -1) * (5 - 2 * x * x);
			}
		}
	}
}