//Author : Divyansh Rai
// Program to print alphabet triangle
/*   eg :
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
 */



#include <iostream>  
using namespace std;  
int main()  
{  int n;
cout<<"Enter number of rows : ";
cin>>n;
 char ch='A';    
    int i, j, k, m;    
    for(i=1;i<=n;i++)    
    {    
        for(j=n;j>=i;j--)    
            cout<<" ";    
        for(k=1;k<=i;k++)    
            cout<<ch++;    
            ch--;    
        for(m=1;m<i;m++)    
            cout<<--ch;    
        cout<<"\n";    
        ch='A';    
    }    
return 0;  
}  
