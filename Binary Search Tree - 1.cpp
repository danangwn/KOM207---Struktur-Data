#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
  
  
int main ()
{
   
  vector<int> v6;  
  vector<int> v7;
  int i=0, j=0;
  float n,m, hasil1;
  float  sum=0, sum2=0, sim=0;
  cin >> n;
  while (n!=-9) {
       
     v6.push_back(n);
     sum+=n;
     cin >> n;
     i++;
      
  }
   sum2=sum;
    cin >> m;
  while (m!=-9) {
      
     sum2=sum2-v6[m-1];      
     cin >> m;
     v7.push_back(m);
     sim+=m;
     j++;
    
  }
   j=i-j; 
   cout.setf(ios::fixed);
   cout.precision(2);
    if(sum==0){
		
		cout << i << " " << i-j << endl;
		cout << -9.99 << " " << -9.99 << endl;
   }
    
   else {
        cout << i << " " << j << endl;
        if (j==0) hasil1=-9.99;
		else hasil1=sum2/j;
        if(i==j)
			cout << sum/i << " " << -9.99 << endl;
			else
			cout << sum/i << " " << hasil1<<endl;
   }
  
  return 0;
}
