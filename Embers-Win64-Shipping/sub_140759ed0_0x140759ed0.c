// 函数: sub_140759ed0
// 地址: 0x140759ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0xd8)
int64_t zmm1 = *(arg1 + 0xd0)
*arg2 = *(arg1 + 0xc0)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_1
return arg2
