#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pally;
	int i = 0;
	int j;

	cout << "Please enter a word" << endl;
	cin >> pally;
	j = pally.length() - 1;
	
	while (i <= j)
	{
		if (pally[i] == pally[j])
		{
			j--;
			i++;
		}
		else if (pally[i] != pally[j])
		{
			cout << "This string is not a palindrome" << endl;
			i = j + 5;
		}
	}

	if ((i - 2 == j) || (i - 1 == j))
		cout << "This string is a palindrome" << endl;

	system("Pause");
	return 0;
}