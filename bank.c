#include<stdio.h>
#include<math.h>
int main ()  {

int t,k,n,x=2,i=0 ;

scanf("%d",&t);

for (;i<t;i++){

    scanf ("%d %d",&n,&k);

    long long max= pow(x,(n-k+1));

    printf ("%lld\n",max+((k-1)*x));

}

return 0;
}