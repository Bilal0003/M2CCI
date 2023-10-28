class F{
    protected:
     int n,d;
    public:
        F();
        F(int ,int ) ;
        F(int ) ;
        void Aff() const;
        friend F Add(F,F);
        friend bool isNull(F);
};
