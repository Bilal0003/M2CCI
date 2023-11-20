using namespace std;
class P{
    protected:
    float x,y;
    public:

    P();
    P(float,float);
    friend float D(P,P);
    friend P operator+(P,P);
    friend P operator/(P,float);

    friend std::ostream& operator<<(std::ostream &,const P&);
};