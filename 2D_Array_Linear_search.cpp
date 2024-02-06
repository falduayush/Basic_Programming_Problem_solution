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
    
    //Linear Search
    int key;
    cout<<"Enter the Element you Want to Search :";
    cin>>key;
    int count=0;
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            if(arr[i][j]==key)
            {
                count++;
            }
        }
        
    }
    
    if(count>0)
    {
        cout<<"Element Found "<<count<<" Times ";
    }
    else
    {
        cout<<"Element Not Found ";
    }
    
    
    
    return 0;
}