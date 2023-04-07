#include <iostream>

using namespace std;

int main()
{
	srand(time(NULL)); 

	int array[6];
	
	for (int i = 0; i < 6; i++)
	{
		int Num = 0;

		bool Check = true;
		while(Check)
		{
			int CheckNum = 0;

			Num = (rand() % 45) + 1;

			for (int j = 0; j < i; j++)
			{
				if (Num == array[j])
				{
					Check = true;
				}
				else
				{
					CheckNum++;
				}
			}

			if (CheckNum == i)
			{
				Check = false;
			}

			array[i] = Num;
		}


		Check = true;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}