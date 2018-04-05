#include <iostream>
using namespace std;

int main() {
    int n,ans=0,fact=1,i;
    
    
	char s[n][2];
	char r[n];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>s[i][0];
	for(int i=0;i<n;i++)
	s[i][1]='N';
	for(int i=0;i<n;i++)
	cin>>r[i];
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(s[i][0]>s[j][0])
	        {
	            char t=s[i][0];
	            s[i][0]=s[j][0];
	            s[j][0]=t;
	        }
	    }
	}
	for (int i=0;i<n;i++)
	{for (int j=0;j<n;j++)
	    {if(r[i]>s[j][0] && s[j][1]=='N')
	    { fact=1;
	        for(int k=1;k<=n-i-1;k++)
	        fact=fact*k;
	        
	         ans=ans+fact;
	    }
	    if(r[i]==s[j][0])
	    {s[j][1]='Y';
	        break;
	    }
	    }
	}
	cout<<ans+1;

	return 0;
}
