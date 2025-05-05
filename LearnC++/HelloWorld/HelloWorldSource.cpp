#include <iostream>
#include <string>
using namespace std;

int i = 1;
char c = 'C';
bool b;
float f;
double d;
wchar_t w;

void Hello() {
	cout << "Hello World!\n";
}

string OutputData(string message, int _i, char _c, bool _b, float _f, double _d, wchar_t _w);

int main() {
	Hello();

	b = true;
	f = 3.14;
	d = 2.71828;
	w = 'W';

	i = 2;

	string retVal = OutputData("Hello!", 42, 'B', false, 3.14, 4597.76, '*');

	cout << "The value of retVal is: " << retVal << endl;

	system("pause");
}

string OutputData(string message, int _i, char _c, bool _b, float _f, double _d, wchar_t _w) {
	cout << _i << endl;
	cout << _c << endl;
	cout << _b << endl;
	cout << _f << endl;
	cout << _d << endl;
	wcout << _w << endl;
	cout << message << endl;

	return message;
}