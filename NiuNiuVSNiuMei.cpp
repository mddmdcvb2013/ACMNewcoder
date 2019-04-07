#include <iostream>
using namespace std;

char a[20][20];
int n, m, num = 0;

int main()
{
	cin >> n >> m;
	num = n*m;
	for (int i = 0;i < n;i++)
	{
		scanf("%s", a[i]);
		for (int j = 0;j < m;j++)
		{
			if (a[i][j] == '#')
			{
				num--;
			}	
		}	
	}
	num -= (n + m);
	if (num % 2 == 0)
	{
		cout << "niuniu" << endl;
	}
	else
	{
		cout << "niumei" << endl;
	}	
	return 0;
}