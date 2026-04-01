#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int stick = 0; // 막대를 쪼갰을 때 발생하는 막대의 갯수
    int totalstick = 0; // 막대의 총 갯수
    int want = 0;   // 문제에서 구하고자 하는 값
    vector<int> list; // 설계 : 입력값을 string으로 받을텐데 '(' 를 0으로 , ')'을 1로 변환하여 담을 수 있는 list를 만들고 싶다.
    string x;
    cin >> x;        // 입력값 받기
    for(int i=0; i <= x.length() -1; i++){   // 입력된 문자열을 하나하나 문자로 쪼개서 0과 1로 대응시키고 리스트에 담자.
        if(x[i] == '('){
            list.push_back(0);
        }
        else{
            list.push_back(1);
        }
    }                                         // 이제 list에는 정수 0과 1로 이루어졌음.
    for(int i=0; i<=list.size()-2; i++){     /* 내 사고 : (( 는 00 () 는 01 )( 는 10 )) 는 11로 대응될텐데 이 것을 이진수의 값이라고 생각한다면 십진수로 변환하자.
                                              그렇다면, 각각의 값은 0 ,1 ,2 ,3이라는 서로 다른 숫자로 변환 될 것이고 구분이 가능하다. */
                                              
        if (2*list[i] + list[i+1] == 0){       /* 문제 상황을 해석해보자. ((가 나온다면 1개의 막대가 보장된다. 이 말은 즉,뒤에 레이저를 통해 쪼개져 만들어 질 수 막대의갯수도                                          1개인 것이다. 또한, 총 막대수도 한개가 늘어난다.*/
            stick ++;
            totalstick++;
        }
        if (2*list[i] + list[i+1] == 1){       /* ()가 나온다면 레어저 한개가 늘어난다. 이 말은 즉, 그 앞에 존재했던 막대를 쪼갠다는 것이다. 그 막대의 갯수를 stick에                                               저장해뒀으므로 want 값에 stick을 더하면 된다*/
            want += stick;
        }
        
        if (2*list[i] + list[i+1] == 2){      /* )(가 나온다면 아무런 의미를 갖지 못한다. 왜냐하면 그 다음 원소가 ),(중 무엇인지에 따라 다르기 때문이다.*/
            continue;
        }
        if (2*list[i] + list[i+1] == 3){       /* ))가 나온다면 그 뒤에 오는 레이저에 의해 쪼개지는 막대의 갯수가 줄었음을 의미한다. 따라서 -1을 한다. */
            stick--;
        }
    }
    want += totalstick;                     /* 우리가 위에서 구한 want값은 기존의 막대가 존재할 때 기존의 막대수를 제외한 쪼개진 막대의 개수만 센 것이다. 따라서, 총 막대수를                                          더해주자*/
    cout << want << endl;
}

