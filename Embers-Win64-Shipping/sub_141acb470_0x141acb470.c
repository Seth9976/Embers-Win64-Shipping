// 函数: sub_141acb470
// 地址: 0x141acb470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1405a5410(arg1 + 0x10, 0)

int32_t rax = *(arg1 + 0x3c)
*(arg1 + 0x38) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 0x30, 0)

int32_t result = *(arg1 + 0x2c)
*(arg1 + 0x28) = 0

if (result s< 0 && result != 0)
    return sub_1405dadb0(arg1 + 0x20, 0) __tailcall

return result
