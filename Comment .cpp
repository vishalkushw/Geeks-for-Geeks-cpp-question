#include <iostream>
using namespace std;
 
void comment(int,int,int);

//Comment the part that outputs b
void comment(int a,int b,int c)
{
    cout<<a<<endl;
   // cout<<b<<endl;
    cout<<c<<endl;
} 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        
        //function call
        comment(a, b, c);
    }
    
    return 0;
} 
// } Driver Code Ends

/*
Input:
a = 5
b = 6
c = 15
Output:
5
15
Explanation:
Value of b is not printed.
*/
