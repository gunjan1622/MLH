#include<iostream>
#include<cstring>
using namespace std;
void selectionsort(char A[])
{
	int l=strlen(A);

	for(int i=0;i<l;i++)
	{
		char small=A[i];
		int pos=i;

		for(int j=i+1;j<l;j++)
		{
			if(A[j]<small)
			{
				small=A[j];
				pos=j;
			}
		}
		char t=A[i];
		A[i]=A[pos];
		A[pos]=t;
	}
	cout<<A;
}
int main()
{
char A[80];
cout<<"Enter String: ";
cin>>A;

selectionsort(A);



	return 0;

}
