#include <iostream>
#include <iomanip>
#include "StockInput.h"
#include "StockCalc.h"

using namespace std;
int main() {
    cout << "\n買入交易\n";
    double 買入價 = 輸入價格("買入");
    int 買入股數 = 輸入股數("買入");
    double 總買入 = 計算買入總成本(買入價, 買入股數);

    cout << "\n賣出交易\n";
    double 賣出價 = 輸入價格("賣出");
    int 賣出股數 = 輸入股數("賣出");

    char 回答;
    cout << "是否為當沖交易？(y/n)：";
    cin >> 回答;
    bool 是當沖 = (回答 == 'y' || 回答 == 'Y');

    double 總賣出 = 計算賣出總收入(賣出價, 賣出股數, 是當沖);
    double 盈虧 = 計算盈虧(總買入, 總賣出);

    cout << fixed << setprecision(2);
    cout << "\n結果顯示：\n";
    cout << "買入總成本（含手續費）： " << 總買入 << " 元\n";
    cout << "賣出總收入（扣手續費及交易稅）： " << 總賣出 << " 元\n";
    cout << "盈虧金額： " << 盈虧 << " 元\n";

    return 0;
}

