// 函数: sub_140948f60
// 地址: 0x140948f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = &data_142e25968
*(arg1 + 0x10) = *(arg2 + 0x10)
void* rax_2 = *(arg2 + 0x18)
*(arg1 + 0x18) = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

*(arg1 + 8) = &data_142e259e0
__builtin_memset(&arg1[8], 0, 0x18)
sub_140946050(&arg1[0xc], *(arg2 + 0x30), arg2[0xe], 0, 0)
*(arg1 + 0x40) = 0
sub_140946050(&arg1[0x10], *(arg2 + 0x40), arg2[0x12], 0, 0)
return arg1
