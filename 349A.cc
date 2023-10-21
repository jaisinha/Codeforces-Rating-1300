#include <iostream>
using namespace std;
int main(){
    int n, x, b25 = 0, b50 = 0, b100 = 0;
    bool r = true;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 25) b25++;
        else if(x == 50 and b25 >= 1){
            b25 --;
            b50 ++;
        }
        else if(x == 100 and (b50 >= 1 and b25 >= 1)){
            b50 --;
            b25 --;
        }
        else if(x == 100 and b25 >= 3)b25 -= 3;
        else {
            r = false;
            break;
        }       
    }
    if(r)cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}
