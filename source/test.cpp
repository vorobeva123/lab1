#include <iostream>
#include <iomanip>
#include <conio.h>
#include <locale.h>
#include "bitfield.h"
#include "set.h"
using namespace std;

int main() {
	setlocale(NULL, "RUS");
	TSet s = 33;
	int size=0;
	int n = 0;
	n = s.GetMaxPower();
	size = s.GetpMem2();
	cout << n << " elem" << endl;
	cout << size << " byte" << endl;
	
	
	/*int n, m, k, count;
	cout << "Тестирование программ поддержки понятия множества" << endl;
	cout << "              Решето Эратосфена" << endl;
	cout << "Введите верхню границу целых значений - ";
	cin >> n;
	TSet s(n + 1);

	for (m = 2; m <= n; m++) s.InsElem(m);

	for (m = 2; m * m <= n; m++)
		if (s.IsMember(m))
			for (k = 2 * m; k <= n; k += m)
				if (s.IsMember(k)) s.DelElem(k);
	cout << "Печать простых чисел" << endl;
	count = 0; k = 1;
	for (m = 2; m <= n; m++)
		if (s.IsMember(m)) {
			count++;
			cout << setw(3) << m << " ";
			if (k++ % 10 == 0) cout << endl;
		}
	cout << endl;
	cout << "В первых " << n << " числах " << count << " простых" << endl;
	return 0;*/
}