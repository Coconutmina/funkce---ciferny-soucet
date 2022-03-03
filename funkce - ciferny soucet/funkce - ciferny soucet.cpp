#include <stdio.h>

void tecka(int kolik)
{
	for (int i = 0; i < kolik; i++) {
		printf(".");
	}
}
void soucet(int x, int y)
{
	printf("%d + %d = %d", x, y, x + y);
}

long mocnina(int x)
{
	return x * x;
}
//faktorial (funkce)

int faktorial(long x)
{
	long long hodnota = 1;
	for (int i = x; i > 1; i--) {
		hodnota *= 1;
	}
	return hodnota;
}

int absolutni(int x)
{
	if (x < 0) return x * -1;
}

int cif_soucet(int x) {
	int m, vysledek = 0;
	while (x > 0) {
		m = x % 10;
		vysledek = vysledek + m;
		x = x / 10;
	}
	return vysledek;
}

int main()
{
	tecka(100);
	soucet(7, 15);
	printf("Mocnina 9 je %d", mocnina(9));
	long long vysledek = faktorial(8) * 2 / 2;
	printf("\nFucktorial 18 je: %lld", vysledek);
	printf("\nAbsolutni hodnota je %d", absolutni(-6));
	printf("\n");
	printf("cif soucet je %d", cif_soucet(23));
}