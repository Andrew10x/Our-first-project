#include <iostream>
using namespace std;
int main()
{
   cout << "Hello World!\n";
   cout << "Second" << endl;
   for (int i = 0; i < 5; i++)
       cout << i + 1 << " ";
   // ggggg
} // dddddddd
/// fdffdfdf
void sort_min(int* temp, int t)
{
	int min;
	for (int i = 0; i < t - 1; i++)
	{
		min = temp[i];
		for (int j = i + 1; j < t; j++)
		{
			if (temp[j] < min) { min = temp[j]; temp[j] = temp[i]; temp[i] = min; }
		}
	}
}


