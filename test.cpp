#include<string>
using namespace std;

void strreplace(string a, string b,string c)
{//×Ö·û´®Ìæ»»
	int d[100];
	int k = 0;
	int la = a.size(), lb = b.size(), lc = c.size();
	for (int i = 0; i < la; i++)
	{
		int tmp = 0;
		for (int j = 0; j < lb; j++)
		{
			if (a[i + j] == b[j])
				tmp++;
		}
		if (tmp == lb)
		{
			d[k++] = i;

		}
	}
	int dis = lb - lc;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < lc; j++)
			a[d[i] + j] = c[j];
	}
	for (int i = k - 1; i >= 0; i--)
	{
		for (int j = d[i] + 1; j < la - dis; j++)
		{
			a[j] = a[j + dis];
		}
		la -= dis;
	}
	a[la] = '\0';
	return;
}

int main()
{
	string a = "asljfe;jawi;foej";
	string b = "wi";
	string c = "x";
	strreplace(a, b, c);
	cout << a << endl;
	return 0;
}