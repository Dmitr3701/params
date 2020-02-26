#include<iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i;
	for (i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
	cout << "Количество параметров " << i;
	return 0;
}