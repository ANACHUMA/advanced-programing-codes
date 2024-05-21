#include <iostream>
#include <string>
using namespace std;
int main(){
    const string element[8] = {"B123","C234","A345","C15","B177","G3003","C235","B179"};
    //int arraysize = sizeof(array); 
    cout << "element of starting with 'B':" << endl;
    for (int i = 0; i<8;i++){
    
    if (element[i][0] == 'B'){
        cout << element[i]<< endl;

    }
       
    }    
        return 0;
}

