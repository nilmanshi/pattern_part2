1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1




#include <iostream>
using namespace std;

int main(){
  int num ;
  cin>>num;
  int n = num/2 ;
  for (int rows=0; rows<n;rows++)
    {
      for(int col = 0 ; col<2*rows+1; col++)
        {
          if (col%2==1)
          {
            cout<<"* ";
          }
          else
          {
            cout<< rows+1;
          }
        }
      cout<<endl;
    }
  for(int rows =0 ; rows<n ; rows++)
    {
      for(int col = 0; col<2*n- 2*rows -3; col++)
        {
          if (col%2 ==1 )
          {
            cout<<"* ";
          }
          else
          {
            cout<< n-rows;
          }
        }
      cout<<endl ;
    }
}



NEW PATTERN 

*******
*    *
*   *
*  *
* *
*


#include <iostream>
using namespace std ;


int main() {
  int n ;
  cin>>n;

  for(int rows = 0; rows<n ; rows++)
    {
      for(int col =0; col<n-rows; col++)
        {
          if (rows==0 || rows  == n-1)
          {
            cout<< "*";
          }
          else
          {
            if(col==0 || col==n-rows-1)
            {
              cout<<"*";
            }
            else 
            {
              cout<< " ";
            }
          }
        }
      cout<<endl;
    }

}