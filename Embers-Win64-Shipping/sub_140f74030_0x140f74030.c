// 函数: sub_140f74030
// 地址: 0x140f74030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x8d4) == 0
*(arg1 + 0x8d5) = 0

if (not(cond:0) && data_143e24360 == 0)
    int128_t var_18 = *(arg1 + 0x18)
    
    if (sub_140db3510(&var_18) == 0)
        sub_140db7c60(arg1 + 0x390)
        return *(arg1 + 0x29) u>> 1 & 1

return 1
