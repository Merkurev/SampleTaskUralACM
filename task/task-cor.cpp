// ���������� ���������� ��� ����������
#include "../strict.h"

using namespace std;

const int MAX_VAL = 1000 * 1000 * 1000;
const int MIN_VAL = 1;


int main()
{
	//������� ����, ������������ �������, ��� ��� � ������ -v !test.exe �� ���������� �����
	Input in;

	int a = in.readInt(MIN_VAL, MAX_VAL);
	in.readSpace();
	int b = in.readInt(MIN_VAL, MAX_VAL); 
	in.readEoln();
	in.readEof();

	in.assert(a + b != 146); //- �� ������ assert � ��� ����� ������� �����������, � ������ ����� ��������� ��� ��� ������� �������
	// � ������ ��������� ��� strict.h ����� ���������� �����: http://acm.timus.ru/stricth/ ��� ������ �������
  
	return 0;
}