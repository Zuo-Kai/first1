#include "StockCalc.h"
#include <cmath> // ���F�ϥ� round()

// �x�Ѥ���O�v
const double ����O�v = 0.001425;
// �x�ѥ���|�v�]�u�b��X���^
const double ����|�v = 0.003;

// �|�ˤ��J��Ƥ�
int �|�ˤ��J(int ���B) {
    return static_cast<int>(round(���B));
}

// �R�J�`�����G���� * �Ѽ� + ����O�]�|�ˤ��J�^
double �p��R�J�`����(double ����, int �Ѽ�) {
    double ������B = ���� * �Ѽ�;
    int ����O = �|�ˤ��J(������B * ����O�v);
    return ������B + ����O;
}

// ��X�`���J�G���� * �Ѽ� - ����O - ����|�]���|�ˤ��J�^
double �p���X�`���J(double ����, int �Ѽ�, bool �O��R) {
    double ������B = ���� * �Ѽ�;
    int ����O = �|�ˤ��J(������B * ����O�v);
    double �|�v = �O��R ? 0.0015 : 0.003;
    int ����| = �|�ˤ��J(������B * �|�v);
    return ������B - ����O - ����|;
}

double �p�����(double �R�J����, double ��X���J) {
    return ��X���J - �R�J����;
}
