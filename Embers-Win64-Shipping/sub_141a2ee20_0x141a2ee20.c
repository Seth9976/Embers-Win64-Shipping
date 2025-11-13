// 函数: sub_141a2ee20
// 地址: 0x141a2ee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
*(arg1 + 0x38) = *(arg2 + 0x38)
*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0xb].b = arg2[0xb].b
sub_1405ac190(&arg1[0xc], &arg2[0xc])
arg1[0x10] = 0
int64_t rbp = sx.q(arg2[0x11].d)
int64_t r14 = arg2[0x10]
arg1[0x11].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[0x10], rbp.d, 0)
    memcpy(arg1[0x10], r14, (rbp << 2).d)
else
    *(arg1 + 0x8c) = 0

arg1[0x12].d = arg2[0x12].d
return arg1
