#include "rationnel.hpp"

using namespace std;

rationnel::rationnel(int a,int b){n=a; d=b;}

rationnel::rationnel(){n=0, d=1;}

rationnel::rationnel(int a){n=a; d=1;}

void rationnel::Aff(){ 
    if(n==d || n%d==0){
        cout << n/d << endl;
}
    /* else if(n%d == n){
        cout << n/(d%n) << "/" << d/(d%n) << endl;
    } */
    else {
        cout << n << "/" << d << endl;}}

rationnel rationnel::Add(rationnel a){
    if(d==a.d){
    return rationnel(a.n+n,d);   
}
    return rationnel(n*a.d+d*a.n, d*a.d);}

rationnel Soustracion(rationnel a,rationnel b) { return rationnel(b.d*a.n-b.n*a.d, b.d*a.d );}

rationnel Multip(rationnel a,rationnel b){return rationnel(a.n*b.n, a.d*b.d);}

rationnel operator+ (const rationnel &a, const rationnel &b){
    return rationnel(b.n*a.d+b.d*a.n, b.d*a.d);
}

void rationnel::Inv(){int c; c=n; n=d; d=c;}

//friend rationnel op+ (const rationel &,int);
//frined rationnel op+ (int, rationel &);
// ratione op+(const ration &, int){
//  return a+ ratio(a,1);

/* ou bien sol #2 : se rendre compte que 2 c)est 2/1 : R c= R(1,2) + 1
=> appel consturceut 1 param, */


