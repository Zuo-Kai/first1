#include "StockInput.h"
#include "StockUtils.h"
#include <iostream>

using namespace std;

int ��J�Ѽ�(const string& �ʧ@) {
    int �ƶq;
    char ���;

    cout << "�п�J" << �ʧ@ << "�ƶq�]z=�i / s=�ѡ^�G";
    cin >> ���;
    cout << "�п�J�ƶq�G";
    cin >> �ƶq;

    if (��� == 'z' || ��� == 'Z') return �ƶq * �@�i�Ѽ�;
    else return �ƶq;
}

double ��J����(const string& ����) {
    double ����;
    cout << "�п�J�C��" << ���� << "���G";
    cin >> ����;
    return ����;
}
