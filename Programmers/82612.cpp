#include <iostream>
#include <cmath>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    for (int i = 1; i <= count; i++) {
        answer += price * i;
    }
    if (answer < money)
        return 0;
    answer = answer - money;
    return answer;
}

int main() {
    cout << solution(, , ) << endl;
    return 0;
}

// ���� ����..!!!!!, �ٸ� Ǯ�̴� n*(n+1)/2 ���, ���콺 ���� �̿�.