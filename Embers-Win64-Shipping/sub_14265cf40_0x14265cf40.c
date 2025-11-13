// 函数: sub_14265cf40
// 地址: 0x14265cf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x18, 0)

int32_t rax = *(arg1 + 0x34)
*(arg1 + 0x30) = 0

if (rax s< 0 && rax != 0)
    sub_1405a51b0(arg1 + 0x28, 0)

*(arg1 + 0x38) = 0xffffffff
*(arg1 + 0x3c) = 0
*(arg1 + 0x98) = (*(arg1 + 0x98) & 0xfffffff1) | 1
char rax_4 = sub_140d3e110(arg1 + 0x40)
*(arg1 + 0x98) &= 0xfffffbff
uint32_t result = zx.d(rax_4) << 0xa
*(arg1 + 0x98) |= result
return result
