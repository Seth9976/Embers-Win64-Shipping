// 函数: sub_1422d1f40
// 地址: 0x1422d1f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u<= 4)
    *(arg1 + 0x24) = 4
else if (arg2 u> 8)
    *(arg1 + 0x24) = 0xc
else
    *(arg1 + 0x24) = 8

char result = sub_1405949a0()
bool cond:0 = *(arg1 + 0x24) != 0xc
*(arg1 + 0x21) = result

if (not(cond:0) && result == 0)
    *(arg1 + 0x24) = 8

return result
