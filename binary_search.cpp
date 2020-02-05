#include<iostream>
using namespace std;
int binary(int a[],int l,int h,int n)
{
    if(h>=l)
    {
        int mid=(l+h)/2;
        if(a[mid]==n)
        {
            return mid;
        }
        else if(n>a[mid])
        {
            return binary(a,mid+1,h,n);
        }
        else if(n<a[mid])
        {
            return binary(a,l,mid-1,n);
        }
    }
    return -1;
}

int main()
{
    int n,m,a[100];
    cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY "<<endl;
    cin>>m;
    cout<<"ENTER THE ELEMENTS IN THE ARRAY "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"ENTER THE NUMBER TO BE SEARCHED "<<endl;
    cin>>n;
    int k=binary(a,0,m-1,n);
    if(k==-1)
    {
        cout<<"ENTERED NUMBER IS NOT AVAILABLE :";
    }
    else
    {
        cout<<n<<" IS AT "<<k<<" POSITION";
    }
    return 0;
}
