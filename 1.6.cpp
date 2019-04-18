#include <iostream>
#include<stdlib.h>
using namespace std;
float kiloKaybi(float*, int);
int main()
{
    setlocale(LC_ALL, "Turkish");
	float *g;
	int sure;
	cout<<"Diyet programýnýn süresini giriniz (hafta sayýsý):";
	cin>>sure;
	g=new float[sure];
	for(int i=0;i<sure;i++)
	{
		cout<<i+1<<". hafta kilonuz";
		cin>>g[i];
	}
	cout<<"bu program ile toplam"<<kiloKaybi(g, sure)<<"kilo kaybettiniz";
	return 0;
	
}
float kiloKaybi(float *g, int sure)
{
	float enBuyuk, enKucuk;
	for(int i=0; i<sure;i++)
	{
		enBuyuk=g[0];
		enKucuk=g[0];
		if (enBuyuk<g[i])
		enBuyuk=g[i];
		else if(enKucuk<g[i])
		enKucuk=g[i];
		
	}
	return enBuyuk - enKucuk;
}
