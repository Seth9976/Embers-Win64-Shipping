// 函数: sub_1427fcec0
// 地址: 0x1427fcec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x68)
int64_t zmm1 = *(rax_2 + 0x6c)
int32_t rax = *(rax_2 + 0x74)
*arg2 = *(rax_2 + 0x5c)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax
return arg2
