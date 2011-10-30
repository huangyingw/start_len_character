#include"stdio.h"
#include"stdlib.h"
#include<iostream>

using namespace std;

char * f(char a[ ], int start, int len, int lenA)
{
  return NULL;
}

int main() 
{
  char  a[] ={'a', 'b', 'c'} ;// null
  cout<<f(a, 0, 4,sizeof(a)/sizeof(char))<<endl;

  char  b[]={'a', 'b', 'c'};// {'a', 'b', 'c'}
  cout<<f(b, 0, 3,sizeof(b)/sizeof(char))<<endl;

  char  c[]={'a', 'b', 'c'};// {'a', 'b'}
  cout<<f(c, 0, 2,sizeof(c)/sizeof(char))<<endl;

  char  d[]={'a', 'b', 'c'};// {'a'}
  cout<<f(d, 0, 1,sizeof(d)/sizeof(char))<<endl;

  char  e[]={'a', 'b', 'c'};// null
  cout<<f(e, 1, 3,sizeof(e)/sizeof(char))<<endl;

  char  h[]={'a', 'b', 'c'};// {'b', 'c'}
  cout<<f(h, 1, 2,sizeof(h)/sizeof(char))<<endl;

  char  g[]={'a', 'b', 'c'};// {'b'}
  cout<<f(g, 1, 1,sizeof(g)/sizeof(char))<<endl;

  char  j[]={'a', 'b', 'c'};// null
  cout<<f(j, 2, 2,sizeof(j)/sizeof(char))<<endl;

  char  i[]={'a', 'b', 'c'};// {'c'}
  cout<<f(i, 2, 1,sizeof(i)/sizeof(char))<<endl;

  char  p[]={'a', 'b', 'c'};// null
  cout<<f(p, 3, 1,sizeof(p)/sizeof(char))<<endl;

  char  k[]={'a', 'b', 'c'};// {}
  cout<<f(k, 1, 0,sizeof(k)/sizeof(char))<<endl;

  char  l[]={'a', 'b', 'c'};// null
  cout<<f(l, -1, 2,sizeof(l)/sizeof(char))<<endl;

  char  m[]={'a', 'b', 'c'};// null
  cout<<f(m, -1, -2,sizeof(m)/sizeof(char))<<endl;

  char  n[]={};// null
  cout<<f(n, 0, 1,sizeof(n)/sizeof(char))<<endl;
  return 0;
}
