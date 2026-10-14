#include <locale.h>

#include <stdio.h>

void main()

{

	setlocale(LC_ALL, "RUS"); // для переключения русской кодировки

	puts("Моя программа"); // вывод строки
	puts("Нажмите Enter для продолжения...");
	getchar(); // ожидание нажатия  Enter
	puts("Продолжение программы");
	return 0;

}