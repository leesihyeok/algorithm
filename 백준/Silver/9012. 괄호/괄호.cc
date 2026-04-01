#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    int num;
    cin >> num;
    vector<string>list;
    
    for(int i =1; i<=num; i++){
        int left = 0, right=0, total=0;
        string x;
        cin >> x;
        for(int j=0; j<=x.size()-1; j++){
            
            
            if(x[j]== '(')
                left++;
            
            if(x[j] == ')')
                right++;
            
            total = left - right;
            if(total < 0){
                list.push_back("NO");
                break;}
        }
            
        if (total == 0)
            list.push_back("YES");
        if (total > 0)
            list.push_back("NO");
        }
    for(int i=0; i<=list.size()-1; i++)
        cout << list[i] << endl;
    }



