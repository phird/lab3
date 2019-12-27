#include <iostream>
using namespace std;

int main ()
{
   float sum,x,n=6;
   while(n<=19){
    x=1/n;
   	sum=sum+x;
	n=n+1;
   }
   cout <<sum ;
    return 0;
}