// 函数: sub_1425d5680
// 地址: 0x1425d5680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int64_t rsi_1 = sx.q(arg2[1].d)
    int64_t rbp_1 = *arg2
    int32_t r8_1 = *(arg1 + 0xc)
    arg1[1].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405c4bc0(arg1, rsi_1.d, r8_1)
        memcpy(*arg1, rbp_1, (rsi_1 * 0x14).d)
    else
        *(arg1 + 0xc) = rsi_1.d

if (&arg1[2] != &arg2[2])
    int64_t rbp_2 = sx.q(arg2[3].d)
    int32_t r8_4 = *(arg1 + 0x1c)
    int64_t r14_1 = arg2[2]
    arg1[3].d = rbp_2.d
    
    if (rbp_2.d != 0 || r8_4 != 0)
        sub_1405c4a00(&arg1[2], rbp_2.d, r8_4)
        memcpy(arg1[2], r14_1, (rbp_2 << 3).d)
    else
        *(arg1 + 0x1c) = rbp_2.d

sub_141d43fd0(&arg1[4], &arg2[4])

if (&arg1[6] != &arg2[6])
    int64_t rsi_3 = sx.q(arg2[7].d)
    int64_t rbp_3 = arg2[6]
    int32_t r8_7 = *(arg1 + 0x3c)
    arg1[7].d = rsi_3.d
    
    if (rsi_3.d != 0 || r8_7 != 0)
        sub_1405a4b40(&arg1[6], rsi_3.d, r8_7)
        memcpy(arg1[6], rbp_3, (rsi_3 * 0x30).d)
    else
        *(arg1 + 0x3c) = rsi_3.d

return arg1
