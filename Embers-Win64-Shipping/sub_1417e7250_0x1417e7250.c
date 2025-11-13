// 函数: sub_1417e7250
// 地址: 0x1417e7250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(arg2[4])
    int32_t r8_1 = arg1[5]
    int64_t r14_1 = *(arg2 + 8)
    arg1[4] = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[2], rbp_1.d, r8_1)
        memcpy(*(arg1 + 8), r14_1, (rbp_1 << 3).d)
    else
        arg1[5] = rbp_1.d

if (&arg1[6] != &arg2[6])
    int64_t rsi_1 = sx.q(arg2[8])
    int64_t rbp_2 = *(arg2 + 0x18)
    int32_t r8_4 = arg1[9]
    arg1[8] = rsi_1.d
    
    if (rsi_1.d != 0 || r8_4 != 0)
        sub_140638750(&arg1[6], rsi_1.d, r8_4)
        memcpy(*(arg1 + 0x18), rbp_2, (rsi_1 << 2).d)
    else
        arg1[9] = rsi_1.d

return arg1
