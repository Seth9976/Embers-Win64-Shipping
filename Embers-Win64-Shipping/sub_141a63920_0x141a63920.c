// 函数: sub_141a63920
// 地址: 0x141a63920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 8, 0)

int32_t rax = *(arg1 + 0x2c)
*(arg1 + 0x28) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 0x20, 0)

int64_t result = sub_141f98dc0(arg1 + 0x30)
*(arg1 + 0x1c) = 0
return result
