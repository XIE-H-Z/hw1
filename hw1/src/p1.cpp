#include <iostream>

using namespace std;

const int maxm = 1000; // m���̤j��
const int maxn = 1000; // n���̤j��
int arr[maxm + 1][maxn + 1]; // �ϥΤG���}�C�ӰO�Ф�

// ��l�ƤG���}�C
void a() {
    for (int i = 0; i <= maxm; ++i) {
        for (int j = 0; j <= maxn; ++j) {
            arr[i][j] = -1;  // -1��ܸӦ�m�|���p��L
        }
    }
}

int ack(int m, int n) {
    if (arr[m][n] != -1) {
        return arr[m][n]; // �p�G�ӭȤw�g�p��L�A������^
    }

    if (m == 0) {
        arr[m][n] = n + 1;
    }
    else if (m > 0 && n == 0) {
        arr[m][n] = ack(m - 1, 1);
    }
    else if (m > 0 && n > 0) {
        arr[m][n] = ack(m - 1, ack(m, n - 1));
    }

    return arr[m][n];
}

int main() {
    int m, n;
    cout << "�п�Jm�Mn����: ";
    cin >> m >> n;
    // ��l�ưO�Фư}�C
    a();
    int result = ack(m, n);
    cout << "Ackermann(" << m << ", " << n << ") = " << result << endl;


    return 0;
}
