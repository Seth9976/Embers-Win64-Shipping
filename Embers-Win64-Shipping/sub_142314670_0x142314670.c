// 函数: sub_142314670
// 地址: 0x142314670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x80)
int64_t zmm1 = *(arg1 + 0x78)
*arg2 = *(arg1 + 0x68)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_1
return arg2
