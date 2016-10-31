#include <iostream>

unsigned long recurr_fibonacci(unsigned long n)
{
  if(n<=2) return 1;
  return recurr_fibonacci(n-1) + recurr_fibonacci(n-2);
}


unsigned long iter_fibonacci(unsigned long n)
{
  unsigned long sum = 1, sum2 = 1, tmp;
  for(int i=2;i<n;i++)
  {
    tmp = sum;
    sum += sum2;
    sum2 = tmp;
  }
  return sum;
}


int main()
{
  int n;
  cin>>n;
  cout<<"Recursive fibonacci("<<n<<") = "<<recurr_fibonacci(n)<<endl
      <<"Iterative fibonacci("<<n<<") = "<<iter_fibonacci(n)<<endl;
  return 0;
}
