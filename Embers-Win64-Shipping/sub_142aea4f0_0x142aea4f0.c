// 函数: sub_142aea4f0
// 地址: 0x142aea4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (*(arg1 + 0x28) == *(arg1 + 0x2c))
    r8.b = 1
    char rax_2
    rax_2, r8 = (*(*(arg1 + 0x38) + 0x20))(arg2, *(arg1 + 0x10), r8)
    
    if (rax_2 == 0)
        return 0xffffffff

int64_t rcx = *(arg1 + 0x30)
int64_t rbp = sx.q(*(arg1 + 0x28))
uint32_t rdi = zx.d(*(rcx + (rbp << 1)))

if ((rdi & 0xfffffc00) != 0xd800)
    return zx.q(rdi)

int32_t rax_7 = (rbp + 1).d
uint32_t rsi = 0

if (rax_7 s>= *(arg1 + 0x2c))
    r8.b = 1
    int64_t r14_1 = *(arg1 + 0x10)
    
    if ((*(*(arg1 + 0x38) + 0x20))(arg1, r14_1, r8) != 0)
        rsi = zx.d(*(*(arg1 + 0x30) + (sx.q(*(arg1 + 0x28)) << 1)))
    
    char rax_14 = (*(*(arg1 + 0x38) + 0x20))(arg1, r14_1, 0)
    *(arg1 + 0x28) = rbp.d
    
    if (rax_14 == 0)
        return 0xffffffff
else
    rsi = zx.d(*(rcx + (sx.q(rax_7) << 1)))

if ((rsi & 0xfffffc00) == 0xdc00)
    rdi = ((rdi - 0xd7f7) << 0xa) + rsi

return zx.q(rdi)
