module BPZ1902.Safronov.Lab3.Task3;


namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
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
		}
	}
}
