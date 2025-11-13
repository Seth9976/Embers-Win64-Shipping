// 函数: sub_142aea370
// 地址: 0x142aea370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = -1
int64_t rcx = *(arg1 + 0x20)

if (arg2 s>= rcx && arg2 s< sx.q(*(arg1 + 0x1c)) + rcx)
    int32_t rax_4 = arg2.d - rcx.d
    *(arg1 + 0x28) = rax_4
    rdi = zx.d(*(*(arg1 + 0x30) + (sx.q(rax_4) << 1)))

if (arg2 s< rcx || arg2 s>= sx.q(*(arg1 + 0x1c)) + rcx || (rdi & 0xfffff800) == 0xd800)
    sub_142aeacd0(arg1, arg2)
    
    if (arg2 s>= *(arg1 + 0x20))
        int64_t rax_6 = sx.q(*(arg1 + 0x28))
        
        if (rax_6.d s< *(arg1 + 0x2c))
            rdi = zx.d(*(*(arg1 + 0x30) + (rax_6 << 1)))
            
            if ((rdi & 0xfffff800) == 0xd800)
                rdi = sub_142aea4f0(arg1, arg3)

return zx.q(rdi)
