#include <iostream>

using namespace std;

int q,z;
int a[10],b[10];

int main(){
	
	for(int i=0;i<3;i++)
		cin>>a[i];
	for(int i=0;i<3;i++){	
		cin>>b[i];	
		if(a[i]>b[i])
			q++;
		else if(a[i]<b[i])
			z++;
	}
	cout<<q<<" "<<z<<endl;
	
	
}
