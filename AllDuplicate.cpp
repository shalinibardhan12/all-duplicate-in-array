#include<iostream>
using namespace std;
void allDuplicate(int num[],int size)
{
int duplicate ;
int count = 0;
for(int i =0;i<size;i++)
{
     int temp = num[i];
    for(int j =i;j<size;j++)
    {
        if(temp==num[j+1])
        {
         count++;
        duplicate = temp;
        cout<<duplicate<<" ";
        }
    }
}

}
int main()
{
    int size;
    int duplicate;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    int num[20];
    cout<<"enter the element in given array"<<endl;
    for(int i =0;i<size;i++)
    {
        cin>>num[i];
    }
    allDuplicate(num,size);
    //cout<<"Duplicate element in this array is: " <<duplicate<<endl;
    return 0;

}
