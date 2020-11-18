#include <iostream>

using namespace std;

int main() 
{
   
int i,j;
 
for (int i = 1; i <= 7; i++) 

{
     
for (int j = i; j <= 7; j++) 
 
{ 
       
   cout<<j;
       
} 
    
} 
   
for (int i = 7-1; i >= 1; i--) 

{
   
 for (int j = i; j <= 7; j++)
        
{
              
 cout <<j;
        
 }
     
 }
   
 return 0;

}