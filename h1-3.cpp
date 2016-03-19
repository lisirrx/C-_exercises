#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string input;
	cin >> input;
	int left = -1;
	int right = -1;
	int cnt = 0;
	for (int i = 0; i < input.length(); ++i)
	{
		if (input[i] == 'L')
		{
			left = i;
			if (right != input.length() - 1 && right != -1)
			{
				if (right < left)
				{
					if ((left - right - 1) % 2)
					{
						++cnt;
					}
				}
				else
				{
					cnt += right - left - 1;
				}
			}
			else if (right == -1)
			{
				1;

			}
		}
			else if (input[i] == 'R')
			{
				right = i;
				if (left != -1)
				{
					if (right < left)
					{
						if ((left - right - 1) % 2)
						{
							++cnt;
						}
					}
					else
					{
						cnt += right - left - 1;
					}
				}
				else if (left == -1)
				{
					cnt += right;
				}
			}
			else if (i == input.length() - 1 && left>right)
			{
				cnt += i - left;
			}
		}
	if (left == right)
	{
		cnt += n;
	}
	cout << cnt << endl;
	return 0;
}