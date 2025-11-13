// 函数: src_reset
// 地址: 0x141c2c7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 2).d)

int64_t rax_1 = *(arg1 + 0x38)

if (rax_1 != 0)
    rax_1()

__builtin_memset(arg1, 0, 0x14)
*(arg1 + 0x58) = 0
*(arg1 + 0x50) = 0
return 0
