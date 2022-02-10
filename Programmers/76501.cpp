#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 0;

    for(int i = 0; i < absolutes.size(); i++) {
        if (signs[i]) {
            answer += absolutes[i];
        } else {
            answer -= absolutes[i];
        }
    }
    cout << "answer : " << answer << endl;
    return answer;
}

int main() {
    vector<int> absolutes = {4,7,12};
    vector<bool> signs = {true,false,true};
    solution(absolutes, signs);
}