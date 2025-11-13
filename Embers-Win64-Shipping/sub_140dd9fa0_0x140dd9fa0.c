// 函数: sub_140dd9fa0
// 地址: 0x140dd9fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memcpy(arg1, arg2, 0x10)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)

if (*(arg1 + 0x20) != 0)
    void* rax_12 = *(arg1 + 0x20)
    *(rax_12 + 8) += 1

return arg1
