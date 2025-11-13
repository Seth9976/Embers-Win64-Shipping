// 函数: sub_1424a6c10
// 地址: 0x1424a6c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b &= 0xe0
*(arg1 + 0x10) = 0
*arg1 = 0
*(arg1 + 4) = 1
*(arg1 + 8) = 1
*(arg1 + 0x18) = 4
*(arg1 + 0x1c) = 4
__builtin_memset(&arg1[0x10], 0, 0x20)
void* rcx = &arg1[0x20]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
*(arg1 + 0x80) = 0
int64_t rsi = sx.q(*(arg1 + 0x28))
int32_t rax_1 = (rsi + 1).d
*(arg1 + 0x28) = rax_1

if (rax_1 s> *(arg1 + 0x2c))
    sub_1406105e0(&arg1[0x10])

*(*(arg1 + 0x20) + (rsi << 2)) = 0x3e75c28f
int64_t rsi_1 = sx.q(*(arg1 + 0x28))
int32_t rax_3 = (rsi_1 + 1).d
*(arg1 + 0x28) = rax_3

if (rax_3 s> *(arg1 + 0x2c))
    sub_1406105e0(&arg1[0x10])

*(*(arg1 + 0x20) + (rsi_1 << 2)) = 0x3df5c28f
return arg1
