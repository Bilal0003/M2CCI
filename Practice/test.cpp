#include <iostream>
#include <vector>

using namespace std;

class list{
    protected:
        int info;
        list* suiv;
    public:
        list();
        friend void ajoute(list*,int);
        friend void affiche(list*);
};

list::list():info(0), suiv(nullptr){}

void ajoute(list* pt, int val){
    list* courant = new list;
    if (pt == nullptr){
        pt=new list;
        pt->info = val;
        pt->suiv = nullptr;
    }

    else{
        courant = pt;
        while(courant->suiv != nullptr){
            courant = courant->suiv ;
        }
        courant->suiv = new list;
        courant->suiv->info = val;
        courant->suiv->suiv = nullptr;
    }
}

void affiche(list* pt){
    list* courant = new list;
    courant = pt;
    while(courant != nullptr){
        cout << courant->info << " ";
        courant = courant->suiv;
    }
}


int main(){

    list* mylist= new list;
    

    ajoute(mylist,1);
    ajoute(mylist,2);
    ajoute(mylist,3);
    affiche(mylist);

    return 0;
}