// 函数: sub_141a20ff0
// 地址: 0x141a20ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140780c40(arg1, arg2)

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(arg2[3].d)
    int32_t r8_1 = *(arg1 + 0x1c)
    int64_t r14_1 = arg2[2]
    arg1[3].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405a4be0(&arg1[2], rbp_1.d, r8_1)
        memcpy(arg1[2], r14_1, (rbp_1 << 4).d)
    else
        *(arg1 + 0x1c) = rbp_1.d

if (&arg1[4] != &arg2[4])
    int64_t rsi_1 = sx.q(arg2[5].d)
    int64_t rbp_2 = arg2[4]
    int32_t r8_4 = *(arg1 + 0x2c)
    arg1[5].d = rsi_1.d
    
    if (rsi_1.d != 0 || r8_4 != 0)
        sub_1405c4a00(&arg1[4], rsi_1.d, r8_4)
        memcpy(arg1[4], rbp_2, (rsi_1 << 3).d)
    else
        *(arg1 + 0x2c) = rsi_1.d

return arg1
