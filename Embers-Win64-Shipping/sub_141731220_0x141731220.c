// 函数: sub_141731220
// 地址: 0x141731220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
int32_t rax = *(r8 + 0x80)
*arg2 = *(r8 + 0x78)
arg2[1].d = rax
int32_t rax_1 = *(r8 + 0x8c)
*(arg2 + 0xc) = *(r8 + 0x84)
*(arg2 + 0x14) = rax_1
return arg2
