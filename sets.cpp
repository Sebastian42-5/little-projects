#include <cmath>
#include <iostream>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    
    int n;
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int q, e;
        
        cin >> q >> e;
        
        if(q == 1){
            s.insert(e);
        }
        else if(q == 2){
            s.erase(e);
        }
        else{
            set<int>::iterator itr = s.find(e);
            
            if(itr != s.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
