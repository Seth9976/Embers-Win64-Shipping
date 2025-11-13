// 函数: sub_141a1b680
// 地址: 0x141a1b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_1419faf80(arg1, arg2)
*arg1 = &data_143021f28
arg1[0x2a] = &data_14301efb0
sub_141a1e870(&arg2[0xb7], &arg1[0xd4], zmm1)

if (&arg1[0xa8] != &arg2[0xb5])
    int32_t r8_1 = *(arg1 + 0x54c)
    int64_t rbp_1 = sx.q(arg2[0xb6].d)
    int64_t r14_1 = arg2[0xb5]
    arg1[0xa9].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&arg1[0xa8], rbp_1.d, r8_1)
        memcpy(arg1[0xa8], r14_1, (rbp_1 << 3).d)
    else
        *(arg1 + 0x54c) = rbp_1.d

arg1[0xac] = *arg2[0xb5]
return arg1
