#include "stdafx.h"
#include "Array.h"

int _tmain(int argc, _TCHAR* argv[])
{
	{
		int size = 16;
		int *mas = new int[size];
		Array a = Array(mas, size);
		a.FilArray();
		a.ShowArray();
		a.PushBack(69);
		a.ShowArray();

		Array a1 = a;

		cout << "a1:" << endl;
		a1.ShowArray();
		a1.FilArray();
		a1.ShowArray();
	}


	if (_CrtDumpMemoryLeaks())
		cout << endl << "************" << endl << "MemoryLeaks!!!" << endl << "************" << endl;
	else
		cout << endl << "************" << endl << "Memory OK" << endl << "************" << endl;

	system("pause");
	return 0;
}

