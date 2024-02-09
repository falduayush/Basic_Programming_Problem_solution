#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];

    //Input of Array 
    cout<<"Enter the Element of Array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
        
    }


    // Output of Array 
    cout<<"Output of Array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //Row Wise sum
    cout<<"Sum of Rows are :"<<endl;
    for(int i=0;i<3;i++)
    {
        int ans=0;
        for (int j=0;j<3;j++)
        {
            ans=ans+arr[i][j];
        }
        cout<<ans<<" ";
    }
    
    
    return 0;
}