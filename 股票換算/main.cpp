#include <iostream>
#include <iomanip>
#include "StockInput.h"
#include "StockCalc.h"

using namespace std;
int main() {
    cout << "\n�R�J���\n";
    double �R�J�� = ��J����("�R�J");
    int �R�J�Ѽ� = ��J�Ѽ�("�R�J");
    double �`�R�J = �p��R�J�`����(�R�J��, �R�J�Ѽ�);

    cout << "\n��X���\n";
    double ��X�� = ��J����("��X");
    int ��X�Ѽ� = ��J�Ѽ�("��X");

    char �^��;
    cout << "�O�_����R����H(y/n)�G";
    cin >> �^��;
    bool �O��R = (�^�� == 'y' || �^�� == 'Y');

    double �`��X = �p���X�`���J(��X��, ��X�Ѽ�, �O��R);
    double ���� = �p�����(�`�R�J, �`��X);

    cout << fixed << setprecision(2);
    cout << "\n���G��ܡG\n";
    cout << "�R�J�`�����]�t����O�^�G " << �`�R�J << " ��\n";
    cout << "��X�`���J�]������O�Υ���|�^�G " << �`��X << " ��\n";
    cout << "�������B�G " << ���� << " ��\n";

    return 0;
}

