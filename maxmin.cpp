#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand(time(0));
	

	
int a,b,c,n=rand()%20+1,R;
int MAXRP=INT_MIN,MINRP=INT_MAX;
int MAXRI=INT_MIN,MINRI=INT_MAX;
int C=0,S=0,SP=0,SPP=0,SPI=0;
cout << " n= "<< n ;

E:

		
a=rand()%20;
b=rand()%100;
c=rand()%20;



if(MAXRP < R && R%2==0) MAXRP=R;
if(MINRP < R && R%2==0) MINRP=R;

if(MAXRI < R && R%2==0) MAXRI=R;
if(MINRI < R && R%2==0) MINRI=R;

	if(R>=0&& R < 10 || R >= 20 && R < 30 ) S+=R;
	if(C%2!= 0) {
		SP+=R;
		
		
	}
else {
	SP+=R;
cout <<" SP  perechi = "<<SP<< endl;
}
	if( SP%2==0) SPP++;
	else SPI++;

if( C == n && n % 2 != 0 ) {
	

 cout <<"  SP= "<< SP << endl;
}
C++;
cout << setw(5)<< C<<" a=  "<< setw(5)<< a <<" b=  "<< setw(5)<< b <<" c= "<< setw(5)<<c <<" a+b-c= "<< setw(5)<< R << endl;
   if( C < n ) goto E;
	
	

	
	
	return 0;
}
