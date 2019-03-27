/*
Nama Program : Pretest
Nama         : Hana Meilina Fauziyyah
NPM          : 140810180012
Tanggal buat : 27 Maret 2019
Deskripsi    : Sorting singly linked list
**************************************************************/

#include <iostream>
using namespace std;

struct ElemList{
    char npm[14];
    char nama[40];
    float ipk;
    ElemList* next;
    ElemList* info;
};

typedef ElemList* pointer;
typedef pointer List;

void createList(List& First);
void createElement(pointer& pBaru);
void insertSortNama(List& First, pointer pBaru);
void traversal(List First);

main(){
    pointer p;
    List Ma08;
    createList(Ma08);
    createElement(p);
    insertSortNama(Ma08, p);
    traversal(Ma08);
}

void createList(List& First){
    First = NULL;
}

void createElement(pointer& pBaru){
    pBaru = new ElemList;
    cout<<"NPM : ";
    cin>>pBaru->npm;
    cout<<"Nama : ";
    cin.ignore();
	cin.getline(pBaru->nama,40);
    cout<<"IPK : ";
    cin>>pBaru->ipk;
    pBaru->next = NULL;
}

void insertSortNama(List& First, pointer pBaru){
    if (First==NULL)
        First=pBaru;
    else {
        pBaru->next=First;
        First=pBaru;
    }
    pointer tempMhs, mhs;
    int n;
    tempMhs;
	for(int i=0; i<n;i++){
		for(int j=1;j<n;j++){
			if(strcmp(mhs[j-1].nama, mhs[j].nama)>0){
				tempMhs = mhs[j-1];
				mhs[j-1] = mhs[j];
				mhs[j] = tempMhs;
			}
		}
	}
}

void traversal(List First){
    pointer pBantu;
    pBantu=First;
    while(pBantu != NULL){
        cout<<pBantu->info;
        pBantu = pBantu->next;
}
}
