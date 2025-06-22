
#ifndef STOCK_CALC_H
#define STOCK_CALC_H

double 計算買入總成本(double 價格, int 股數);
double 計算賣出總收入(double 價格, int 股數, bool 是當沖);
double 計算盈虧(double 買入成本, double 賣出收入);

#endif
