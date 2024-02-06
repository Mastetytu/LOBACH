#include <iostream>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	int a[10];
	int i, j, s = 0;
	for ( i = 0; i < 10; i++)
	{
		a[i] = i + 1;
		std::cout << a[i] << "\n";
	}
	for (i = 9,j=0; i  > j; i--,j++)
	{
		s = s + (a[i] - a[j]);
		std::cout << s << "\n";
	}
	
}