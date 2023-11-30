#include <iostream>
#include <vector>

using namespace std;

class List{
    protected:
        //List *pt;
        int info;
        List *suiv;
    public:
        friend void affiche(List*);
        List();
        void remplir_list(List*,int);
        ~List();
    
};

List::List():info(0) , suiv(nullptr){}


void List::remplir_list(List* pt,int val){
    List* courant;
    
    if (pt==nullptr){
        pt = new List;
        pt->info=val;
        pt->suiv=nullptr;
    }
    else{
        courant = pt;
        while(courant->suiv != nullptr){
            courant = courant->suiv;
        }
        courant->suiv = new List;
        courant->suiv->info = val;
        courant->suiv->suiv = nullptr;
    }
}

void affiche(List* pt){
    while(pt!=nullptr){
        cout << pt->info << " ";
        pt = pt->suiv;
    }
}

List::~List(){delete suiv;}

int main(){
    List* Mylist=nullptr;
    Mylist = new List;
    Mylist->remplir_list(Mylist,5);
    Mylist->remplir_list(Mylist,12);
    Mylist->remplir_list(Mylist,9);
    Mylist->remplir_list(Mylist,13);

    affiche(Mylist);
    return 0;
}