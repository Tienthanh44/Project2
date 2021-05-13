#include <iostream>

using namespace std;

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
    for(int i=0; i<n; i++)
    {

        if(a[i]<2)
        {
            return false;
        }
        else
        {
            if(a[i]==2)
            {
                return true;
            }
            else {
            if(a[i]%2==0)
                {
                    return false;
                }

                else
            {
                for (int i=2; i<a[i]-1; i++)
                    {
                        if(a[i]%i==0)
                        {
                            return false;
                        }
                    }
                }
            }
        }
            return true;
        }
        cout<<"Day so nguyen to la :";
        for (int i=0; i<n; i++)
        {
            if (a[i]=true)
            {
                cout<<" "<<a[i];
            }
        }
    }
