#include<iostream>
using namespace std;
class Studi{
	public :
		void mahasiswa();
	private : 
	int n,i,nama;
};
void Proses::mahasiswa(){
	int maha[10],uts[10],jkul,uas[10],jumlah;
	float rata[10];
	string matkul[10];
	cout<<"masukkan jumlah mahasiswa :";
	cin>>jkul;
		for(int i=0;i<jkul;i++){
			cout<<"masukkan nilai mahasiswa "<<i+1;cin>>maha[i];
			
		/*	cout<<"matkul :";
			cin>>matkul[i];
			cout<<"nilai tgs :";
			cin>>tgs[i];
			cout<<"nilai uts :";
			cin>>uts[i];
			cout<<"nilai uas :";
			cin>>uas[i];
			cout<<"nilai akhiir :";
			akhir[i]=(tgs[i]+uts[i]+uas[i])/3;
			cout<<akhir[i];*/
		}

}
int main(){
	Proses x;
	x.mahasiswa();
}
