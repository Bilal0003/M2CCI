#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Note
{
protected:
    int note;
    int pondé;
    string type;

public:
    Note();
    friend class UE;
    Note(int, int, string);
    friend void Affiche_note(Note);
    friend void Change(Note, int);
};

Note::Note()
{
    note = 0;
    pondé = 0;
    type = "";
}
Note::Note(int a, int b, string c)
{
    note = a;
    pondé = b;
    type = c;
}

void Affiche_note(Note N){
    cout << N.note << " " << "(" << N.pondé << ")" << endl;
}

void Change(Note N, int a){
    N.note = a;
}

class UE{
    protected:
        vector<Note> V;
    public:
        UE();
        friend class Note;
        void Ajoute(Note);
        void Affiche();
        float Moyenne();
        bool Valide();
        void Change(int,int);
        friend UE Fusion(const UE &,const UE &);
        void Bilan();
        //friend ostream& operator<<(const ostream &, const UE &);


};

UE::UE(){
    V=vector<Note>();
    }

void UE::Ajoute(Note N){
    V.push_back(N);
}

void UE::Affiche(){
    for (int i=0; i<V.size();i++){
        if ( V[i].type =="TP" ){
            cout << "CM: ";
            Affiche_note(V[i]);
        }
        else{
            cout << "TP: ";
            Affiche_note(V[i]);
        }
    }
}

float UE::Moyenne(){
    float moy = 0;
    for (int i=0; i<V.size();i++){
        moy += V[i].note;
    }
    return (moy/V.size());
}

bool UE::Valide(){
    return (Moyenne() >= 10);
}

void UE::Change(int i, int n){
    V[i].note = n;
}

UE Fusion(const UE &uni1, const UE &uni2){
    UE temp;

    for (int i =0; i<uni1.V.size();i++){
        temp.Ajoute(uni1.V[i]);
    }
    for (int j=0; j<uni2.V.size();j++){
        temp.Ajoute(uni2.V[j]);
    }
    return temp;
}

void UE::Bilan(){
    Affiche();
    cout << Moyenne() << " ";
    if (Valide()){
        cout << "UE validée." << endl;
    }
    else{
        cout << "UE non validée." << endl;
    }
}

int main(){
    UE Progra;
    Progra.Affiche();
    Note N1(13,1,"TP");
    Note N2(8,2,"TP");
    Note N3(4,3,"CM");
    Note N4(15,1,"CM");
    Note N5(13,1,"CM");
    Progra.Ajoute(N1);
    Progra.Ajoute(N2);
    Progra.Ajoute(N3);
    Progra.Ajoute(N4);
    Progra.Ajoute(N5);
    //Progra.Bilan();
    Progra.Change(2,17);
    Progra.Bilan();
    return 0;
}