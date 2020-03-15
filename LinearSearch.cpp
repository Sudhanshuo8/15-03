#include<iostream>
using namespace std;

int main()
{
	int arr[]={50,20,5,9,7};
	int search_ele=6;
	int count=0;
	for(int i=0;i<=4;i++)
	{
		if(arr[i]==search_ele)
		{
			cout<<"Element found at "<<i<<endl;
			count++;
			break;
		}
	    
	}
if(count==0)
	    {
	    	cout<<"Ele not found"<<endl;
		}
	    return 0;
}
