// 函数: sub_14269b310
// 地址: 0x14269b310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x24) & 2) == 0)
    (*(*(arg1 - 0xb0) + 0x3e8))(arg1 - 0xb0)
    *(arg1 + 0x24) |= 2

int32_t rax_2 = *(arg1 + 0x20)
int64_t zmm1 = *(arg1 + 0x18)
*arg2 = *(arg1 + 8)
arg2[1].q = zmm1
*(arg2 + 0x18) = rax_2
return arg2
