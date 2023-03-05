#include <algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    cin>>i;
    string suma[i];
    i=i*2;
    string liczba[i];
    int x=0;
    //write numbers
    while(i!=x){
        cin>>liczba[x];
        x++;
    }
    x=0;
    //reverse numbers
    while(x!=i){
        reverse(liczba[x].begin(), liczba[x].end());
        x++;
	}
	//sum numbers
	x=0;
    while(x!=(i/2)){
        suma[x]=to_string(stoi(liczba[x+x])+stoi(liczba[x+1+x]));
        reverse(suma[x].begin(), suma[x].end());
        cout<<stoi(suma[x])<<endl;
        x++;
    }


    return 0;
}
