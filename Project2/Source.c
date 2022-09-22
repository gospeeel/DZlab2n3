#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int n = 3;
	printf("Дано: \n \t 3 \n \t 333 \n \t_____\n Ответ: %3.5f", n / 333.);
}