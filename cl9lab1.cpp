// cl9lab1.cpp : Defines the entry point for the application.
//

#include "cl9lab1.h"

using namespace std;

int main()
{
	int perimeter, square;
	int width = 0, length = 0;
	cout << "input width: ";

	cin >> width;
	cout << "input length: ";
	cin >> length;
	perimeter = (width + length) * 2;
	cout << "perimeter is: " << perimeter << endl;
	square = width * length;
	cout << "square is: " << square << endl;

	return 0;
}
