#include <iostream>
#include <vector> 
using namespace std;
void bubblesort(vector<int> ans)
{
	int len = ans.size();
	for(int i = 0; i < len -1; i++)
		for(int j = 0; j < len - i -1; j++)
		{
			if(ans[j] > ans[j+1])
			{
				int tmp = ans[j];
				ans[j] = ans[j + 1];
				ans[j + 1] = tmp; 
			}
		}
	for(auto i : ans)
		cout << i << " ";
	cout << "\n";
}
