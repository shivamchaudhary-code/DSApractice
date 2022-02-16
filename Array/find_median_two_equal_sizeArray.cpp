// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
public:
	int find_median(vector<int> v)
	{
		// Code here.
		int size =  v.size();
		sort(v.begin(), v.end());


		if (size % 2 == 0) {
			int s = (size / 2) - 1;
			int e = (size / 2);
			int av = (v[s] + v[e]) / 2;
			return av;

		} else {
			int mid = (size / 2);
			return v[mid];
		}
	}
};

// { Driver Code Starts.
int main() {
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		Solution ob;
		int ans = ob.find_median(v);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends