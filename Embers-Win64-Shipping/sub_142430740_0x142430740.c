// 函数: sub_142430740
// 地址: 0x142430740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rax = (rdi + 1).d
*(arg1 + 0x30) = rax

if (rax s> *(arg1 + 0x34))
    sub_1405c4fe0(arg1 + 0x28)

int64_t rdx_2 = rdi << 6
__builtin_memset(rdx_2 + *(arg1 + 0x28), 0, 0x40)
int64_t rcx_1 = *(arg1 + 0x28)
*(rdx_2 + rcx_1 + 0x34) = arg2
*(rdx_2 + rcx_1 + 0x3c) = rdi.d
*(rdx_2 + rcx_1 + 0x38) = rdi.d
return zx.q(rdi.d)
