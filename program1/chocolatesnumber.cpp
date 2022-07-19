#include <iostream>

using namespace std;

int main()
{
   
   cout << "Chocolates" << endl; 
   
    int n{0};
    cin>>n;
    int rate;
    cin>>rate;
    int total_chocs=n;
    int rem_wraps{0};
    int new_wraps=n;
    int new_chocs{0};
    
    while(new_wraps+rem_wraps>=3)
    {
        new_chocs=(new_wraps+rem_wraps)/3;
        
        rem_wraps=(new_wraps+rem_wraps)%3;
        
        new_wraps=new_chocs;
        
        total_chocs=total_chocs+new_chocs;
    }
    
     cout << total_chocs << endl; 
    
 return 0;
}