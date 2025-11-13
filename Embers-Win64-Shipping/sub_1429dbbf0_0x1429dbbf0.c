// 函数: sub_1429dbbf0
// 地址: 0x1429dbbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2

if (r8 != 0 && (r8 - 0x20 u> 0x3e0 || (r8 & (r8 - 1)) != 0))
    return 8

void* rax_4 = *(arg1 + 0x1c0)
*(arg1 + 0x1b0) = r8

if (rax_4 != 0)
    *(**(rax_4 + 0x18) + 0x47b4) = r8

return 0
