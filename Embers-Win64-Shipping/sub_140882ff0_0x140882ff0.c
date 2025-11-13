// 函数: sub_140882ff0
// 地址: 0x140882ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
char rsi = *(arg1 + 8) & 1

if (rsi != 0)
    rbx = (rbx s>> 1) + arg1 + 8

if (rbx == 0)
    return 

j_sub_1406edef0()
sub_140b51740(rbx, &data_143cdf860, rsi)
*(arg1 + 8) = 0
