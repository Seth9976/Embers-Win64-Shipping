// 函数: sub_141f89d50
// 地址: 0x141f89d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x78)) * 0x1c
int64_t rax = *(arg1 + 0x70)
int64_t zmm1 = *(r8 + rax - 0xc)
int32_t rax_1 = *(r8 + rax - 4)
*arg2 = *(r8 + rax - 0x1c)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_1
return arg2
