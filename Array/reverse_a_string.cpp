// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {

	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;

		cout << reverseWord(s) << endl;
	}
	return 0;

}

// } Driver Code Ends


//User function Template for C++
string reverse(string &s) {

	int size = s.length();
	for (int i = 0; i < size / 2; i++) {
		swap(s[i], s[size - i - 1]);

	}
	return s;

}
string reverseWord(string str) {


	return reverse(str);

}