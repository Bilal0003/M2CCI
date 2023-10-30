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
};


