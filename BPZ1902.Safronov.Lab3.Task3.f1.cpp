module BPZ1902.Safronov.Lab3.Task3;


namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f1(double x) {
				return pow((1 + x + x * x) / (2 * x + x * x) + 2 - (1 - x - x * x) / (2 * x - x * x), -1) * (5 - 2 * x * x);
			}
		}
	}
}
