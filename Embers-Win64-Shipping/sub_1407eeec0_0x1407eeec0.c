// 函数: sub_1407eeec0
// 地址: 0x1407eeec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = *(arg1 + 0x40)
int64_t zmm1 = *(arg1 + 0x38)
*arg2 = *(arg1 + 0x28)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_1
return arg2
