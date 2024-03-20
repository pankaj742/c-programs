#include <iostream>
using namespace std;
void quicksort(int a[],int l,int r);
void display(int a[],int r);

//void selection_sort(int a[],int n,int key);
int main(){
	cout<<"\nenter how many no you want to enter";
	int n;
	cin>>n;
	int a[10];
	cout<<"\nenter elementes\t";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"\ngiven array is\t";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nenter element to search"<<endl;
	int key;
	cin>>key;
	int r=--n;
	//selection_sort(a,n,key);
		quicksort(a,0,r);
	return 0;

	

}
/*
void selection_sort(int b[],int n,int key){
	int _new=0;
	int min=0;
	int temp;
	for(int i=min;i<n;i++){
		if(b[min]>b[i]){
			_new=i;
		}
		temp=b[min];
		b[min]=b[_new];
		b[_new]=temp;
	}
	cout<<"\nsorted array is \t";
		for(int i=0;i<n;i++){
		cout<<b[i]<<"\t";
	}
return;
}
*/
void quicksort(int a[],int l,int r){
	if(r-l<=1){
	display(a,r-l);
	return;
}
	int yellow=l+1;
	for(int green=l+1;green<r;green++){
		if(a[green]<=a[l]){
			//swap(a,yellow,green);
			int temp=a[yellow];
			a[yellow]=a[green];
			a[green]=temp;
			yellow++;
		}
	}
		int temp=a[l];
		a[l]=a[yellow-1];
		a[yellow-1]=temp;
		quicksort(a,l,yellow);
		quicksort(a,yellow+1,r);
		
}
void display(int a[],int n){
	
	cout<<"\ngiven array is\t";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
