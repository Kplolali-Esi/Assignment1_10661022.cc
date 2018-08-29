#include <iostream>
using namespace std;
int main(int argc,char **argv){
int num, i;
bool Primenum = true;
cout<<"Enter an integer";
cin>> num;
for(i=2; i<= num/2; i++)
{
  if (num % i == 0)
  {
    Primenum = false;
    break;
  }
}
if(Primenum)
cout<<"This is a prime number";
else
cout<<"This is not a prime number";
return 0;
}
