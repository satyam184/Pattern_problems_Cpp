#include<iostream>
using namespace std;
int main()
{
    int n=8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n ; j++)
        {
            cout<<"    ";
        }
        for (int j = 1; j < i; j++)
        {
            if (i==n||j==1)
            {
                cout<<"*   ";
            }
            else
            cout<<"    ";
            
        }
        for (int j = 1; j <=i; j++)
        {
           if (i==n||j==i)
           {
            cout<<"*   ";
           }
           else
           cout<<"    ";
           
        }
        cout<<endl;
        
        
        
            
    }
    
    return 0;
}