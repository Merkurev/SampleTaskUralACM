// Подключаем библиотеку для корректера
#include "../strict.h"

using namespace std;

const int MAX_VAL = 1000 * 1000 * 1000;
const int MIN_VAL = 1;


int main()
{
	//Входной файл, используется консоль, так как в режиме -v !test.exe не использует файлы
	Input in;

	int a = in.readInt(MIN_VAL, MAX_VAL);
	in.readSpace();
	int b = in.readInt(MIN_VAL, MAX_VAL); 
	in.readEoln();
	in.readEof();

	in.assert(a + b != 146); //- ну просто assert ы это вроде главное корректорах, и делать сэмпл корректор без них слишком жестоко
	// а вообще подробнее про strict.h нужно посмотреть здесь: http://acm.timus.ru/stricth/ там совсем немного
  
	return 0;
}