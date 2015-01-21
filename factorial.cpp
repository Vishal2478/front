#include <iostream.h>
#include <conio.h>
void main()
{
  int n , f=1, i;
  cout<<"Enter the number:";
  cin>>n;
  for(i = 1; i<=n; i++)
  {
    f = f*i;
  }
  cout<<"factorial of "<<n<<" is"<<f;
  getch();
}  
