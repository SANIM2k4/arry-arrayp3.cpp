#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

    int arr[n] ;
    int ans=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

         ans+=arr[i]%2;
         }
         printf("%d\n",ans);
    }

   return 0;
}
