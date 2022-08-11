#include<iostream>
using namespace std;
int main(){
    int n;
    int s;
    cin>>s;
    n=97+s;
    for (int i = n; i > 97; i--)
    {
        for (int j = i; j >97; j--)
        {
            cout<<"  ";
        }
        for (int j = n; j >=i; j--)
        {
            cout<<char(j)<<"   ";
        }
        cout<<endl;

        
        
    }
    
}