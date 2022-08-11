#include<iostream>
using namespace std;
int main(){
    int n;
    int s;
    cin>>s;
    n=97+s;
    for (int i = 97; i < n; i++)
    {
        for (int j = i; j <n; j++)
        {
            cout<<"  ";
        }
        for (int j = 97; j <=i; j++)
        {
            cout<<char(j)<<"   ";
        }
        cout<<endl;

        
        
    }
    
}