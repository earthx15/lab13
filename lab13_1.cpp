#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T temp;
	for (int i = 1; i < N; i++)
	{	
		int count=0;
		temp=d[i];
		for (int j = i-1; j >= 0; j--)
		{	
			if (temp>d[j])
			{
				if (i==1)
				{
					d[j+1]=d[j];
					d[j]=temp;
					count++;
				}else{
					if (j==0)
					{
						d[j+1]=d[j];
						d[j]=temp;
					}else{d[j+1]=d[j];}
					count++;
				}
				count++;
			}else{
				if (count==0)
				{
					break;
				}else{
					d[j+1]=temp;
					break;
				}
			}
		}
		cout << "Pass " << i<<":";
		for(int i = 0; i < 10; i++) cout << d[i] << " ";
		cout <<"\n";
		
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
