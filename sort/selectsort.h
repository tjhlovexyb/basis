#include <iostream>
#include <vector>
using namespace std;
void SelectSort(vector<int> ans)
{
	int len = ans.size();
	for(int i = 0; i < len - 1; i++)
	{
		int index = i;
		for(int j = i + 1; j < len; j++)
		{
			if(ans[j] < ans[index])
				index = j;
		}
		int tmp = ans[index];
		ans[index] = ans[i];
		ans[i] = tmp;
	}
	for(auto i : ans)
		cout << i << " ";
	cout << "\n";
