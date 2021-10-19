
#include<iostream>

#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int a, t;
	srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		t = rand() % 6 + 1;
		cout << t;
	}
	
		system("pause");
}