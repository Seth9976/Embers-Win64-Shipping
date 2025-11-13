// 函数: sub_141a84e50
// 地址: 0x141a84e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rsi_1 = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(arg1, rsi_1.d, r8_1)
        memcpy(*arg1, rbp_1, (rsi_1 << 4).d)
    else
        *(arg1 + 0xc) = rsi_1.d

if (&arg1[2] != &arg2[2])
    int64_t rbp_2 = sx.q(arg2[3].d)
    int32_t r8_4 = *(arg1 + 0x1c)
    int64_t r14_1 = arg2[2]
    arg1[3].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405a4b40(&arg1[2], rbp_2.d, r8_4)
        memcpy(arg1[2], r14_1, (rbp_2 * 0x30).d)
    else
        *(arg1 + 0x1c) = rbp_2.d

sub_1405cd980(&arg1[4], &arg2[4])
return arg1
