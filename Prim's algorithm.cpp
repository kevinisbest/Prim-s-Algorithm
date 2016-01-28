#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

void swapSide(int a,int b);
int x[201],y[201],track[51];
float w[201],sum=0;
int main(){
	int n ,m ,s;
	cin >> n;
	cin >> m;
	for(int i =1;i<=m;i++){
		cin >> x[i];
		cin >> y[i];
		cin >> w[i];
	}
	cin >> s;

	for(int i=m;i>0;i--){//bubble sort從大牌到小 
		for(int j = 1;j< i ;j++){
			if(w[j]>w[j+1]){
				swapSide(j,j+1);
			}
		}
	}
	cout<<endl;
	for(int i = 0;i<=51;i++) track[i]=-1;
	track[s]=0;//root必為0 
	w[0]=0;
	
	for(int i =1;i<=m;i++)
	{
		if(track[x[i]]!=-1&&track[y[i]]==-1){
			sum+=w[i];
			track[y[i]]=x[i];
			i=0;
		}	
		
		else if(track[y[i]]!=-1&&track[x[i]]==-1){
			sum+=w[i];
			track[x[i]]=y[i];
			i=0;
		}
	}
	
	
		
	for(int i = 1;i<=n;i++)	cout << track[i]<<" ";
	
	cout <<endl<<sum<<endl;
	system("pause");
	return 0;
} 

void swapSide(int a,int b){
	int temp[3];
	float t;
	temp[0]=x[a];
	temp[1]=y[a];
	t=w[a];
	x[a]=x[b];
	y[a]=y[b];
	w[a]=w[b];
	x[b]=temp[0];
	y[b]=temp[1];
	w[b]=t;
}
