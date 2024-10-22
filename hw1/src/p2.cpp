#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
void powerset(char* set, int size) {
    unsigned int power_set_size = pow(2, size); // �p�⾭���j�p

    // �M���Ҧ��i�઺�l��
    for (unsigned int counter = 0; counter < power_set_size; counter++) {
        cout << "{ ";
        // �ˬd�C�@��
        for (int j = 0; j < size; j++) {
            // �p�G��e��O1�A�h�]�A�o�Ӥ���
            if (counter & (1 << j)) {
                cout << set[j] << " ";
            }
        }
        cout << "}" << endl; 
    }
}

int main() {
    char set[100]; // ���]�̤j�����ƶq�� 100
    cout << "��JS�����e: ";
    cin >> set; 
    int size = strlen(set); // ���o���X�j�p
    cout << "S�i�઺�զX��:\n";
    powerset(set, size); 

    return 0;
}
