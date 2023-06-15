//qlink
//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1


//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        // code here
        
        
        
        int ansl=0;
        string ans="";
        //check the substring palindrome for odd length property from inside out that is "cabag"-> check b then a_a then => c___g since thse two character not match so maxlength  is 3 
        // for even length check l=i and r=i+1 and do the same
        //refer https://www.google.com/search?q=longest+palinsrome+substring&oq=longest+palinsrome+substring&aqs=chrome..69i57j0i13i131i433i512j0i13i512l8.5199j0j4&sourceid=chrome&ie=UTF-8#fpstate=ive&vld=cid:113afc68,vid:XYQecbcd6_c
        for(int i=0;i<s.length();i++){
            //checking for the odd length substring
            
            int l=i;
            int r=i;
            
            while(i>=0&&r<s.length()&&s[l]==s[r]){
                if(r-l+1>ansl){
                    ans=s.substr(l,r-l+1);
                    ansl=r-l+1;
                }
                l--;r++;
            }
            
            
            //checking for the even length substring 
            l=i;
            r=i+1;
            while(i>=0&&r<s.length()&&s[l]==s[r]){
                
                if(r-l+1>ansl){
                    ans=s.substr(l,r-l+1);
                    ansl=r-l+1;
                }
                l--;
                r++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
l

// } Driver Code Ends