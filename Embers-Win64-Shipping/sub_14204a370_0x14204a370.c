// 函数: sub_14204a370
// 地址: 0x14204a370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]

if (&arg1[3] != &arg2[3])
    int32_t r8_1 = *(arg1 + 0x74)
    int64_t rbp_1 = sx.q(arg2[7].d)
    arg1[7].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_14088f7d0(&arg1[3], rbp_1.d, r8_1)
        memcpy(&arg1[3], &arg2[3], (rbp_1 << 4).d)
    else
        *(arg1 + 0x74) = 4

*(arg1 + 0x78) = *(arg2 + 0x78)
*(arg1 + 0x88) = *(arg2 + 0x88)
*(arg1 + 0x98) = *(arg2 + 0x98)
arg1[0xa].q = arg2[0xa].q
*(arg1 + 0xa8) = *(arg2 + 0xa8)
arg1[0xb].q = arg2[0xb].q
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
arg1[0xc].d = arg2[0xc].d
*(arg1 + 0xc4) = *(arg2 + 0xc4)
return arg1
