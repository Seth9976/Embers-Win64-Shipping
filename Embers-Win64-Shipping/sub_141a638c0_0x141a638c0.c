// 函数: sub_141a638c0
// 地址: 0x141a638c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x10, 0)

int32_t rax = *(arg1 + 0x2c)
*(arg1 + 0x28) = 0

if (rax s< 0 && rax != 0)
    sub_1413f6f70(arg1 + 0x20, 0)

int64_t result = sub_141f98dc0(arg1 + 0x38)
*(arg1 + 0x34) = 0
return result
