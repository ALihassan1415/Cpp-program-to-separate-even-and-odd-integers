//Write a program to print even and odd integers in separate arrays...

#include<iostream>
using namespace std;
main()
{
int arr[5];
int i,k,j;
int even[k],odd[j];
cout<<"Enter values of array : "<<endl;
for(int i=0;i<5;i++)
    {
    cout<<"Enter value "<<i+1<<" : ";
	cin>>arr[i];
	}
	cout<<"Values of given array is : :    ";
	for(i=0;i<5;i++)
    {
	cout<<arr[i]<<"\t";
	}
	k=0;
	j=0;	
	for( i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
		even[k]=arr[i];
		k++;
		}
	else if(arr[i]%2!=0)
		{
		odd[j]=arr[i];
		j++;
		}
	}
	cout<<"\nThe array of even numbers is :   ";
	for( i=0;i<k;i++)
	{
		cout<<even[i]<<"\t";
	}
	cout<<"\nThe array of odd numbers is :   ";
	for( i=0;i<j;i++)
	{
		cout<<odd[i]<<"\t";
	}
}