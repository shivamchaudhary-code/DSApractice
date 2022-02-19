// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c)
    {
        // code here
        int startRow = 0;
        int startCol = 0;
        int endRow = r - 1;
        int endCol = c - 1;

        vector<int> v;

        while (startRow <= endRow and startCol <= endCol) {
            //first row
            for (int i = startCol; i <= endCol; i++) {
                v.push_back(m[startRow][i]);
            }
            startRow++;
            for (int i = startRow; i <= endRow; i++) {
                v.push_back(m[i][endCol]);
            }
            endCol--;

            //botton Row

            if (endRow >= startRow) {
                for (int i = endCol; i >= startCol; i--) {
                    v.push_back(m[endRow][i]);
                }
                endRow--;
            }
            //start col
            if (endCol >= startCol) {
                for (int i = endRow; i >= startRow; i--) {
                    v.push_back(m[i][startCol]);
                }
                startCol++;
            }
        }

        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int> > matrix(r);

        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for ( int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends