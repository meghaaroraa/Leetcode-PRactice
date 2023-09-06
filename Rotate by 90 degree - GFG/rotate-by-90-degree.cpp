//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& a, int N) 
    { 
        for (int i = 0; i < N / 2; i++) {
            for (int j = i; j < N - i - 1; j++) {
                
                int temp = a[i][j];
                a[i][j] = a[j][N - 1 - i];
                a[j][N - 1 - i] = a[N - 1 - i][N - 1 - j];
                a[N - 1 - i][N - 1 - j] = a[N - 1 - j][i];
                a[N - 1 - j][i] = temp;
            }
        }
    } 
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends