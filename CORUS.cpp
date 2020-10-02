#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,j,i;
    scanf("%d",&t);
    for(j=1;j<=t;j++) {
        int n,q;
        scanf("%d %d",&n,&q);
        char st[n+1];
        int c,b,freq[26],fd[26],k,sum=0;
        
        cin>>st;
        
        for(i=0; i<26; i++)
            freq[i] = 0;
            
        for(i=0;i<n;i++) {
            if(st[i]>='a' && st[i]<='z')
                freq[st[i] - 97] += 1;
            else if(st[i]>='A' && st[i]<='Z')
                freq[st[i] - 65] += 1;
        }
        
        // for(i=0;i<26;i++)
        //     printf("%d ",freq[i]);
        
        for(i=1;i<=q;i++) {
            scanf("%d",&c);
            sum=0;
            for(k=0;k<26;k++) {
                fd[k] = freq[k];
                if(fd[k]-c < 0)
                    fd[k] = c; 
                sum += fd[k]-c ;
            }
            printf("%d\n",sum);
        }
    }
	return 0;
}