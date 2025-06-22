#include "StockInput.h"
#include "StockUtils.h"
#include <iostream>

using namespace std;

int 輸入股數(const string& 動作) {
    int 數量;
    char 單位;

    cout << "請輸入" << 動作 << "數量（z=張 / s=股）：";
    cin >> 單位;
    cout << "請輸入數量：";
    cin >> 數量;

    if (單位 == 'z' || 單位 == 'Z') return 數量 * 一張股數;
    else return 數量;
}

double 輸入價格(const string& 類型) {
    double 價格;
    cout << "請輸入每股" << 類型 << "價：";
    cin >> 價格;
    return 價格;
}
