#include <iostream>
#include <vector>
using namespace std;
void InsertSort(vector<int> ans)
{
	int len = ans.size();
	for(int i = 0; i < len; i++)
	{
		int tmp = ans[i];
		int j = i - 1;
		while(j >= 0 && ans[j] > tmp)
		{
			ans[j+1] = ans[j];
			j--;
		}
		ans[j+1] = tmp;
	}
	for(auto i : ans)
		cout << i << " ";
	cout << "\n";
}
