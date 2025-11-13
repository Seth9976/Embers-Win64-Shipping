// 函数: sub_142aeabf0
// 地址: 0x142aeabf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) s<= 0 && (*(*(arg1 + 0x38) + 0x20))(arg1, *(arg1 + 0x20), 0) == 0)
    return 0xffffffff

*(arg1 + 0x28) -= 1
int64_t rdx_2 = sx.q(*(arg1 + 0x28))
uint32_t rdi = zx.d(*(*(arg1 + 0x30) + (rdx_2 << 1)))

if ((rdi & 0xfffffc00) == 0xdc00)
    char rax_6
    
    if (rdx_2.d s<= 0)
        rax_6 = (*(*(arg1 + 0x38) + 0x20))(arg1, *(arg1 + 0x20), 0)
    
    if (rdx_2.d s> 0 || rax_6 != 0)
        uint32_t rdx_4 = zx.d(*(*(arg1 + 0x30) + (sx.q(*(arg1 + 0x28) - 1) << 1)))
        
        if ((rdx_4 & 0xfffffc00) == 0xd800)
            *(arg1 + 0x28) -= 1
            return zx.q(((rdx_4 - 0xd7f7) << 0xa) + rdi)

return zx.q(rdi)
