// 函数: sub_141f6cf60
// 地址: 0x141f6cf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141f21010(arg1)
int32_t i = 0

if (*(arg1 + 0x468) s> 0)
    int64_t rdx_1 = 0
    
    do
        result = *(arg1 + 0x460)
        rdx_1 += 0x90
        i += 1
        *(rdx_1 + result - 8) = arg1
    while (i s< *(arg1 + 0x468))

return result
