// 函数: sub_1405af670
// 地址: 0x1405af670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]

if (&arg1[2] != &arg2[2])
    int32_t r8_1 = *(arg1 + 0x1c)
    int64_t rbp_1 = arg2[2]
    int64_t rsi_1 = sx.q(arg2[3].d)
    arg1[3].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[2], rsi_1.d, r8_1)
        memcpy(arg1[2], rbp_1, (rsi_1 << 3).d)
    else
        *(arg1 + 0x1c) = rsi_1.d

return arg1
