// 函数: sub_141ddfdd0
// 地址: 0x141ddfdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[1] != &arg2[1])
    int32_t r8_1 = *(arg1 + 0x14)
    int64_t rbp_1 = arg2[1]
    int32_t rsi_1 = arg2[2].d
    arg1[2].d = rsi_1
    
    if (rsi_1 != 0 || r8_1 != 0)
        sub_1405a4c70(&arg1[1], rsi_1, r8_1)
        memcpy(arg1[1], rbp_1, rsi_1 * 2)
    else
        *(arg1 + 0x14) = rsi_1

return arg1
