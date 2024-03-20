#include <iostream>
#include <string>
using namespace std;
class player{
	public:
		string name;
		int move;
		string status;
		char symbol;
		public:
			player(){
				cout<<"\nEnter name of player:";
				cin>>name;
				cout<<"\nEnter the symbol for player:";
				cin>>symbol;
			}
			player(string n,char s):name(n),symbol(s){
				cout<<"\tplayer:"<<name<<"\tsymbol:"<<symbol;
			}
	void	pass_move(){
			cin>>move;
		};
};
class board{
	private:
		char a[3][3];
		public:
			board(){
				for(int i=0;i<3;i++)
				for(int j=0;j<3;j++)
				a[i][j]='\0';
			}
		void	display_board(){
				cout<<"\n";
				cout<<"\t"<<a[0][0]<<"|\t"<<a[0][1]<<"|"<<a[0][2]<<endl;
					cout<<"___________________________"<<endl;
					cout<<"\t"<<a[1][0]<<"|\t"<<a[1][1]<<"|"<<a[1][2]<<endl;
					cout<<"___________________________"<<endl;
				cout<<"\t"<<a[2][0]<<"|\t"<<a[2][1]<<"|"<<a[2][2];
			}
		int set_board(player p){
					try{
						if(a[0][(p.move)-1]!='\0'){
						
						throw 1;}
					else if(a[1][(p.move)-4]!='\0'){
					throw 1;}
					else if(a[2][(p.move)-7]!='\0'){
						throw 1;}
					}
					catch(int x){
					if(x==1){
						cout<<"\nWRONG MOVE";
						return -1;
					}
				}
					if(p.move>=1 && p.move<=3){
							a[0][(p.move)-1]=p.symbol;
				}
			
				if(p.move>=4 && p.move<=6){
					a[1][(p.move)-4]=p.symbol;
				}
					
				if(p.move>=7 && p.move<=9){
						a[2][(p.move)-7]=p.symbol;
				}
				}
		int		cheak_win(player p){
		int i=0,j=0;
			for(i=0;i<3;i++){
				if(a[i][0]==a[i][1] && a[i][1]==a[i][2])
				cout<<"\nPlayer\t"<<p.name<<"\tWon!!!";
			return 1;
		}
			for(j=0;j<3;j++){
				if(a[0][j]==a[1][j] && a[1][j]==a[2][j])
				cout<<"\nPlayer\t"<<p.name<<"\tWon!!!";
			return 1;
		}
		if(a[0][0]==a[1][1] && a[1][1]==a[2][2]){
		cout<<"\nPlayer\t"<<p.name<<"\twon!!!";
		return 1;	
	}
	else if(a[0][2]==a[1][1] && a[1][1]==a[2][0]){
		cout<<"\nPlayer\t"<<p.name<<"\tWon!!!";
			return 1;
	}
	
}
int cheak_draw(){
	int t=0;
	for( int i=0;i<3;i++){
	
	for(int j=0;j<3;j++){
	if(a[i][j]!='\0'){
	t++;
	}}
}
if(t==9){
	return 0;
}
else{
	return -1;
}
}
};
int main(){
	int i=-1,i1=-1,j=0,t;
	player p[2];
	board b;
	b.display_board();
while(i!=1&&i1!=0){
	
		j=(j%2==0)?0:1;
	cout<<"\n PLAYER "<<p[j].name;
	p[j].pass_move();
    t=b.set_board(p[j]);
    if(t==-1){
	b.display_board();
	i=b.cheak_win(p[j]);
	i1=b.cheak_draw();
}
else if(t!=-1){
	b.display_board();
	i=b.cheak_win(p[j]);
	i=b.cheak_draw();
	j++;
}
}
if(i1==0)
cout<<"\nGAME DRAW!!!!";
 return 0;
}
