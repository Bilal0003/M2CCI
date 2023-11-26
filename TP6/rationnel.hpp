class rationnel{
    protected:
        int n,d;
    public:
        rationnel();
        rationnel(int,int);
        rationnel(int);
        void Aff();
        rationnel Add(rationnel);
        friend rationnel Soustracion(rationnel,rationnel);
        friend rationnel Multip(rationnel,rationnel);
        void Inv();
        rationnel Multiplication(rationnel);
        rationnel Sous_Membre(rationnel);
        void Inverse();
        friend rationnel operator*(rationnel, rationnel);
        friend rationnel operator+ (const rationnel &, const rationnel &);
};


