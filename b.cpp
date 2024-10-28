#include <iostream>
using namespace std;

class B{

    private:
        int B1;
        float B2;

    public:
        int getB1(){
            return B1;
        }

        void setB1(int value){
            B1 = value;
        }

        float getB2(){
            return B2;
        }

        void setB2(float value){
            value = B2;
        }

        void MB1(){
            cout << __func__ << endl;
        }

        void MB2(){
            cout << __func__ << endl;
        }
};