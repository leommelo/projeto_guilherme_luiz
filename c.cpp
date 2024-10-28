#include <iostream>
using namespace std;

class C{

    private:
        string C1;
        int C2;
    
    public:
        void MC1(){
            cout << __func__ << endl;
        }

        void MC2(){
            cout << __func__ << endl;
        }
};