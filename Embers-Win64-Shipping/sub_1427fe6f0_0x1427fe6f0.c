// 函数: sub_1427fe6f0
// 地址: 0x1427fe6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_2 = *(arg1 + 0x68)
int64_t zmm1 = *(rax_2 + 0x60)
int32_t rax = *(rax_2 + 0x68)
*arg2 = *(rax_2 + 0x50)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax
return arg2
