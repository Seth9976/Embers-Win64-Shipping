// 函数: sub_140661160
// 地址: 0x140661160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x138) s<= 0
int128_t result = *arg2
*(arg1 + 0x118) = result

if (cond:0)
    return result

int128_t result_1 = result
return sub_1405a9f90(arg1 + 0x130, &result_1)
