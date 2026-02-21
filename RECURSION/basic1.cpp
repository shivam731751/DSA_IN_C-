#include <iostream>
using namespace std;
void reachhome(int src, int desti){
    cout << " SRC -> " << src << " desti -> " << desti << endl;
    if(src == desti){
        cout<< " i'm Here Done ! " <<endl;
        return ;
    }
    src++;
    reachhome(src, desti);

}

int main(){

    int src = 1;
    int desti =10;
    reachhome(src, desti);
}