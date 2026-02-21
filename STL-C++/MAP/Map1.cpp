#include <iostream> 
#include <map>
using namespace std;

int main() {
    // ======== inisialigation-value ==========
    map<int,string> m;
    m[3]= " Shivam";
    m[1]= " Shukla";
    m[0]= " Dev-shukla";
    // ----------------------------------------

    // ===========inserting ===============
    m.insert({5, " dev VS Shivam shukla "});
    // ------------------------------------

    cout << " before erase..." << endl;
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    // ======= Given key Erase 1 value  ==========
    cout << " After Erase..." << endl;
    // m.erase(1);
    // -------------------------------------------
    // ======== Print with erase value ===========
    for(auto i:m){
        cout << i.first << i.second << " " << endl;
    }
    cout << endl;
    // -------------------------------------------
    // ========== Find value =====================
    auto it = m.find(1);

    for(auto i=it; i!=m.end(); i++){
        cout << (*i).first<<endl;
    }

}