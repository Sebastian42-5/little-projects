#include <iostream>
#include <vector> 
#include <string>
using namespace std;

int main(){
    // my program
    string a;
    string b;
    
    cin >> a;
    cin >> b;
    
    int len_a = a.size();
    int len_b = b.size();
    
    string c = a + b;
    
    char ca = a[0];
    char cb = b[0];
    
    a[0] = cb;
    b[0] = ca;
    
    cout << len_a << " " << len_b << "\n";
    
    cout << c << "\n";
    
    cout << a << " " << b;
    
    return 0;

}

