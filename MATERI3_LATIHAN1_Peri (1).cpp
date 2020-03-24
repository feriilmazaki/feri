#include <iostream>
using namespace std;

int main()
{
	int umur;
	
	cout<<"Berapakah umur anda :";
	cin>>umur;
	
	if(umur >= 19){
	
		cout<<"...................................."<<endl;
		cout<<"Anda diperbolehkan merokok"<<endl;
	}
	else{
		cout<<"...................................."<<endl;
		cout<<"mohon maaf anda masih di bawah umur"<<endl;
	}
	
	system("pause");
	return 0;
}
