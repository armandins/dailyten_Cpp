#include <iostream>
#include <string.h>
using namespace std;

void tolower(char s[]); 


int main()
{
	char string1[100];

	cout << "Enter a string to convert to lower case: " << endl;
	cin >> string1;

	tolower(string1);

	cout << "Showing the result:\n" << string1;

	return 0; 
}

void tolower(char s[]) 
{
	int i = 0; 
	while (s[i] != '\0')

	{
		if (s[i] >= 'A' && s[i] <= 'Z')

		{
			s[i] += 32;
		}
		
		i++;
	}

}