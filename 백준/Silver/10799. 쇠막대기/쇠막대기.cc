#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int stick = 0;
    int totalstick = 0;
    int want = 0;
    vector<int> list;
    string x;
    cin >> x;
    for(int i=0; i <= x.length() -1; i++){
        if(x[i] == '('){
            list.push_back(0);
        }
        else{
            list.push_back(1);
        }
    }
    for(int i=0; i<=list.size()-2; i++){
        if (2*list[i] + list[i+1] == 0){
            stick ++;
            totalstick++;
        }
        if (2*list[i] + list[i+1] == 1){
            want += stick;
        }
        if (2*list[i] + list[i+1] == 2){
            continue;
        }
        if (2*list[i] + list[i+1] == 3){
            stick--;
        }
    }
    want += totalstick;
    cout << want << endl;
}

