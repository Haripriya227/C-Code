#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

void findAllAnagrams(string X, string Y)

{

int m, n;
	
if ((m = Y.length()) > (n = X.length()))

return;


for (int i = 0; i <= n - m; i++)

{
	
if (is_permutation(X.begin() + i, X.begin() + i + m, Y.begin()))
	
{
	
cout << "Substring " << X.substr(i, m) <<
					" present at index " << i << '\n';
	
}
	
}

}

int main()

{
 
   string a,b;
  
  cout<<"Enter the string1:";
  
  cin>>a;
  
  cout <<"Enter the string 2:";
 
   cin>>b;
	
findAllAnagrams(a,b);


	return 0;

}