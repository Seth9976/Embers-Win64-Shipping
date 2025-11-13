// 函数: sub_142aea870
// 地址: 0x142aea870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (*(arg1 + 0x28) s>= *(arg1 + 0x2c))
    r8.b = 1
    char rax_2
    rax_2, r8 = (*(*(arg1 + 0x38) + 0x20))(arg2, *(arg1 + 0x10), r8)
    
    if (rax_2 == 0)
        return 0xffffffff

int64_t rdx_2 = sx.q(*(arg1 + 0x28))
uint32_t rdi = zx.d(*(*(arg1 + 0x30) + (rdx_2 << 1)))
*(arg1 + 0x28) = rdx_2.d + 1

if ((rdi & 0xfffffc00) == 0xd800)
    char rax_6
    
    if (rdx_2.d + 1 s>= *(arg1 + 0x2c))
        r8.b = 1
        rax_6 = (*(*(arg1 + 0x38) + 0x20))(arg1, *(arg1 + 0x10), r8)
    
    if (rdx_2.d + 1 s< *(arg1 + 0x2c) || rax_6 != 0)
        int64_t rdx_5 = sx.q(*(arg1 + 0x28))
        uint32_t r8_1 = zx.d(*(*(arg1 + 0x30) + (rdx_5 << 1)))
        
        if ((r8_1 & 0xfffffc00) == 0xdc00)
            *(arg1 + 0x28) = (rdx_5 + 1).d
            return zx.q(((rdi - 0xd7f7) << 0xa) + r8_1)

return zx.q(rdi)
