#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    
    answer = phone_number.substr(phone_number.length() - 4, 4);
    
    for(int i= 0; i < phone_number.length() - 4; i++) {
        answer = "*" + answer;
    }
    
    return answer;
}