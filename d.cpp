#include <iostream>
using namespace std;

class D{

    private:
        int D1;
        int D2;
    
    public:

        int getD1(){
            return D1;
        }

        void setD1(int value){
            D1 = value;
        }

        int getD2(){
            return D2;
        }

        void setD2(int value){
            D2 = value;
        }

        void MD1(){
            cout << __func__ << endl;
        }

        void MD2(){
            cout << __func__ << endl;
        }

        void MD4(){
            cout << __func__ << endl;
        }

        void MD3(){
            cout << __func__ << endl;
        }
};
