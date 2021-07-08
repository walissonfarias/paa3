#include<iostream>
using namespace std;
char lefts[3][7],rights[3][7],result[3][7];
int res[12]={0}; 
bool fun(){
	for(int i=0;i<3;i++){
		int l_sum=0 , r_sum=0;
		for(int j=0;j<6 && lefts[i][j] != NULL;j++){
			l_sum += res[lefts[i][j] - 'A'];
			r_sum += res[rights[i][j] - 'A'];
		}
		if(l_sum > r_sum && result[i][0] != 'u')
			return false;                       
		if(l_sum == r_sum && result[i][0] != 'e')
			return false;
		if(l_sum < r_sum && result[i][0] != 'd')
			return false;
	}
	return true;

}

int main()
{	
	int n;
	cin>>n;
	while(n--){
		for(int i=0;i<3;i++)
			cin>>lefts[i]>>rights[i]>>result[i];
		int j;
		for(j=0;j<12;j++){
			res[j]=1; 
			if(fun())
				break;
			res[j]=-1; 
			if(fun())
				break;
			res[j]=0; 
		}
		if(res[j]>0)
			cout<<char(j+'A')<<" esta moeda e falsa e e pesada."<<endl;
		else
			cout<<char(j+'A')<<" esta moeda e falsa e e leve."<<endl;
	}
	return 0;
}


//referencia: https://www.programmersought.com/article/88824602188/
