// 函数: sub_142331380
// 地址: 0x142331380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405a52a0(arg1 + 0x10, 0)

*(arg1 + 0x30) = 0
int32_t rax = *(arg1 + 0x44)
*(arg1 + 0x40) = 0

if (rax s< 0 && rax != 0)
    sub_1405a5410(arg1 + 0x38, 0)

int32_t rax_1 = *(arg1 + 0x54)
*(arg1 + 0x50) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(arg1 + 0x48, 0)

*(arg1 + 0x68) = 0
uint64_t result = sub_141f460c0(arg1 + 0x70)
*(arg1 + 0x104) &= 0xfc
*(arg1 + 0x100) = 0
return result
