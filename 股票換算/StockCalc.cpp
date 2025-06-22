#include "StockCalc.h"
#include <cmath> // 為了使用 round()

// 台股手續費率
const double 手續費率 = 0.001425;
// 台股交易稅率（只在賣出收）
const double 交易稅率 = 0.003;

// 四捨五入整數元
int 四捨五入(int 金額) {
    return static_cast<int>(round(金額));
}

// 買入總成本：價格 * 股數 + 手續費（四捨五入）
double 計算買入總成本(double 價格, int 股數) {
    double 成交金額 = 價格 * 股數;
    int 手續費 = 四捨五入(成交金額 * 手續費率);
    return 成交金額 + 手續費;
}

// 賣出總收入：價格 * 股數 - 手續費 - 交易稅（都四捨五入）
double 計算賣出總收入(double 價格, int 股數, bool 是當沖) {
    double 成交金額 = 價格 * 股數;
    int 手續費 = 四捨五入(成交金額 * 手續費率);
    double 稅率 = 是當沖 ? 0.0015 : 0.003;
    int 交易稅 = 四捨五入(成交金額 * 稅率);
    return 成交金額 - 手續費 - 交易稅;
}

double 計算盈虧(double 買入成本, double 賣出收入) {
    return 賣出收入 - 買入成本;
}
