#include <stdio.h>
void QuickSort(int* a,int l,int r);
void main(){
	//printf("hello world");
	int a[10]={10,12,35,35,32,54,53,23,24,11};
	int i;
	printf("\narray before sorting\n[");
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	printf("]");
	QuickSort(a,0,9);
	printf("\narray after sorting\n[");
	for(i=0;i<10;i++){
		printf("%d\t",a[i]);
	}
	printf("]");
}
void QuickSort(int* a,int l,int r){
	//printf("a[1]=%d",a[1]);
	if(r-l<=0)
	return;
	int pivote=l;
	int yellow=l+1;
	int green;
	int temp;
	for(green=l+1;green<=r;green++){
		if(a[green]<a[pivote]){
			temp=a[yellow];
			a[yellow]=a[green];
			a[green]=temp;
			yellow++;
		}
	}
	temp=a[yellow-1];
	a[yellow-1]=a[pivote];
	a[pivote]=temp;
	QuickSort(a,l,yellow-2);
	QuickSort(a,yellow,r);
}

