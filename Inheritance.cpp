#include<iostream>

using namespace std;

class Base
{
    private:
        int private_m;
    public:
        int public_m;
    protected:
        int protected_m;
};

class Derived_public: public Base
{
    public:
        void display()
        {
            cout<<private_m<<public_m<<protected_m<<endl; //
        }
};

class Derived_protected: protected Base
{
    public:
        void display()
        {
            cout<<private_m<<public_m<<protected_m<<endl;
        }
};

class Derived_private: private Base
{
    public:
        void display()
        {
            cout<<private_m<<public_m<<protected_m<<endl;
        }
};