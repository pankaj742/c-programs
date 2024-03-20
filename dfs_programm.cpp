#include <iostream>
using namespace std;
void dfs(int x);
int graph[5][5];int index[10];int n;
int main(){
	cout<<"\nenter no of vertices\t";
	cin>>n;
	cout<<"\enter adjecensy matrix\t";
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>graph[i][j];
	for(int i=0;i<n;i++){
		index[i]=0;
	}
	dfs(0);
	return 0;
}
void dfs(int i){
	int j;
	cout<<"\n"<<i;
	index[i]=1;
	for(j=0;j<n;j++){
		if(!index[i] && graph[i][j]==1)
		dfs(j);
	}
}
