// 函数: sub_141ae6680
// 地址: 0x141ae6680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ae6560(arg1, arg2)

if (&arg1[3] != &arg2[3])
    int64_t r14_1 = sx.q(arg2[4].d)
    int64_t r15_1 = arg2[3]
    int32_t r8_1 = *(arg1 + 0x24)
    arg1[4].d = r14_1.d
    
    if (r14_1.d != 0 || r8_1 != 0)
        sub_140808ed0(&arg1[3], r14_1.d, r8_1)
        memcpy(arg1[3], r15_1, (r14_1 * 0x50).d)
    else
        *(arg1 + 0x24) = r14_1.d

arg1[5].b = arg2[5].b
*(arg1 + 0x2c) = *(arg2 + 0x2c)
sub_141ae6560(&arg1[6], &arg2[6])

if (&arg1[9] != &arg2[9])
    int64_t r14_2 = sx.q(arg2[0xa].d)
    int64_t r15_2 = arg2[9]
    int32_t r8_4 = *(arg1 + 0x54)
    arg1[0xa].d = r14_2.d
    
    if (r14_2.d != 0 || r8_4 != 0)
        sub_1405c4bc0(&arg1[9], r14_2.d, r8_4)
        memcpy(arg1[9], r15_2, (r14_2 * 0x14).d)
    else
        *(arg1 + 0x54) = r14_2.d

arg1[0xb].b = arg2[0xb].b
*(arg1 + 0x5c) = *(arg2 + 0x5c)
arg1[0xc] = arg2[0xc]
return arg1
