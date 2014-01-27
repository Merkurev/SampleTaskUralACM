#include "testlib.h"
using namespace std;

const int possibleError = 5;

int main (int argc, char* argv[] )
{
	registerTestlibCmd(argc, argv); // »нициализаци€

	int a = inf.readInt();
	int b = inf.readInt();

	int juryAnswer = ans.readInteger(); // правильный ответ
	int testingAnswer = ouf.readInteger(); // ответ участника

	int juryError = abs(juryAnswer - (a + b) );
	if (juryError > possibleError)
	{
		quitf(_fail, "Jury error :(       Test is: %d %d       Jury answer is: %d", a, b, juryAnswer);
	}
	int testingError = abs(testingAnswer - (a + b) );
	if (testingError > possibleError)
	{
		quitf(_wa, "Too big error!       Test is: %d %d       Jury answer is: %d", a, b, testingAnswer);
	}

	quitf(_ok, "%d + %d ~= %d", a, b, testingAnswer); // accepted!
}
