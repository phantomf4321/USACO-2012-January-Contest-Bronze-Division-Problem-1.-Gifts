#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<stdio.h>
#include<math.h>

using namespace std;


int main()
{
	int mo, cow;
	cin >> cow >> mo;

	int* p;
	int* s;
	int* total;
	p = new int[cow];
	s = new int[cow];
	total = new int[cow];

	for (int counter1 = 0; counter1 < cow; counter1++)
	{
		cin >> p[counter1] >> s[counter1];
		total[counter1] = p[counter1] + s[counter1];
	}
	sort(total, total + cow);
	int ans = 0;
	int counter = 0;
	bool con = true;
	while (counter <= cow && con)
	{
		if (ans + total[counter] <= mo)
		{
			ans = ans + total[counter];
			counter++;
		}
		else
		{
			if (ans + (p[counter] / 2) + s[counter] <= mo)
			{
				counter++;
				con = false;
			}
			con = false;
		}

	}
	cout << counter << endl;

	system("pause");
	return 0;
}
