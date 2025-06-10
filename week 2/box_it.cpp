#include <iostream>
#include <string> 
#include <cmath>

class Box{
    private:
        int l, b, h;

    public:
        Box(): l(0), b(0), h(0) {}

        Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}

        Box(const Box& B) : l(B.l), b(B.b), h(B.h) {}


        int getLength(){
            return l;
        }
        int getBreadth(){
            return b;
        }
        int getHeight(){
            return h;
        }

        long long CalculateVolume(){
            return (long long) l * b * h;
        }

        bool operator <(const Box& B){
            if(l < B.l){
                return true;
            }
            if(l == B.l && b < B.b){
                return true;
            }
            if(l == B.l && b == B.b && h < B.h){
                return true;
            }
            return false;
        }

        friend std::ostream& operator<<(std::ostream& out, const Box& B){
            out << B.l << " " << B.b << " " << B.h;
            return out;
        }

};


void check2(){
    int n;
    std::cin >> n;
    Box temp;

    for(int i = 0; i < n; i++){
        int type;
        std::cin >> type;

        if(type == 1){
            std::cout << temp;
        }
        if(type == 2){
            int l, b, h;

            std::cin >> l >> b >> h;

            Box NewBox(l, b, h);

            temp = NewBox;

            std::cout << temp;
        }

        if(type == 3){
            int l, b, h;

            std::cin >> l >> b >> h;

            Box NewBox(l, b, h);

            if(temp < NewBox){
                std::cout << "Lesser than \n";
            }
            else{
                std::cout << "Greater than \n";
            }
        }

        if(type == 4){
            std::cout << temp.CalculateVolume();
        }

        if(type == 5){
            Box NewBox(temp);

            std::cout << NewBox;
        }
    }

}



int main(){
    check2();
}
