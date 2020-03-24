#include<iostream>
using namespace std;
int main()
{
    int pil,jum;
    
    cout<<"DAFTAR HANDPHONE"<<endl;
    cout<<"1. OPPO"<<endl;
    cout<<"2. VIVO"<<endl;
    cout<<"3. ASUS"<<endl;
    cout<<"4. NOKIA"<<endl;
    
    
    cout<<"Masukkan Pilihan = ";
    cin>>pil;
    
    switch(pil) {
    	
    	case 1 :
    		cout<<"Harga OPPO Rp 1.000.000"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*1.000.000<<endl;
    	break;
    	case 2 :
    		cout<<"Harga VIVO Rp 1.100.000"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*1.100.000<<endl;
    	break;
		case 3 :
		    cout<<"Harga ASUS Rp 1.200.000"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*1.200.000<<endl;
    	break;
    	case 4 :
    		cout<<"Harga NOKIA Rp 1.300.000"<<endl;
    		cout<<"masukkan jumlah pemesanan : ";
    		cin>>jum;
    		cout<<endl;
    		cout<<"Total bayar"<<jum*1.300.000<<endl;
    	break;
    	default : 
		cout<<"Pilihan anda salah";
    		
	}
	 system("pause");
   return 0;
}
