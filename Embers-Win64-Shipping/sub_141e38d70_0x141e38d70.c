// 函数: sub_141e38d70
// 地址: 0x141e38d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
arg1[2] = arg2[2]

if (&arg1[3] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x24)
    int64_t rbp_1 = arg2[3]
    int32_t rsi_1 = arg2[4].d
    arg1[4].d = rsi_1
    
    if (rsi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&arg1[3], rsi_1, r8_1)
        memcpy(arg1[3], rbp_1, rsi_1 * 2)
    else
        *(arg1 + 0x24) = rsi_1

return arg1
