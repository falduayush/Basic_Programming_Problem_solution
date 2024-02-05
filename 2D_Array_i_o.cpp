#include<iostream>
using namespace std;

int main()
{
    int arr[3][4];

    //Input of Array 
    cout<<"Enter the Element of Array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
        
    }


    // Output of Array 
    cout<<"Output of Array :"<<endl;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}