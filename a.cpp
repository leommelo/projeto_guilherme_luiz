#include <iostream>
using namespace std;

class A{

    private:
        int A1;
        float A2;

    public:
        int getA1(){
            return A1;
        }

        void setA1(int value){
            A1 = value;
        }

        float getA2(){
            return A2;
        }

        void setA2(float value){
            A2 = value;
        }

        void MA1(){
            cout << __func__ << endl;
        }

        void MA2(){
            cout << __func__ << endl;
        }

        void MA3(){
            cout << "Alteração da classe A partir do clone" << endl;
        }

        int getSoma(int a, int b){
            return (a+b);
        }
};