#include <iostream>

using namespace std;
void songuyento (int x)
{
    if(x<2){
        return false;
    }
    else {
        for(int i=2;i<x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
}
int main()
{
    cout<<"Nhap n:";
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    {
        cout<<"Nhap so thu "<<i+1<<" : ";
        cin>>a[i];

    }
    cout<<"\n Mang vua nhap la :";
    for (int i=0; i<n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<"\nDay so chan la :";
    for (int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            cout<<" "<<a[i];
        }
    }
    cout<<"\nDay so le la :";
    for (int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
        {
            cout<<" "<<a[i];
        }
    }
    cout<<"\n Cac so nguyen to co trong mang la :";
    for (int i=0;i<n;i++){
        if(songuyento(a[i])){
            cout<<a[i]<<" ";
        }
    }

    }
