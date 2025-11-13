// 函数: sub_140b26b00
// 地址: 0x140b26b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x10)
        uint64_t rax = sub_140a846a0(rbx << 3, 0) u>> 3
        
        if (rbx.d s> rax.d)
            rax = 0x7fffffff
        
        rbx = zx.q(rax.d)
    else
        rbx = 0x10

if (rbx.d == *(arg1 + 0x8c))
    return 

int64_t rsi_1 = sx.q(*(arg1 + 0x88))
*(arg1 + 0x8c) = rbx.d
int64_t rcx_2 = *(arg1 + 0x80)

if (rbx.d u> 0x10)
    if (rcx_2 == 0)
        if (rbx.d != 0)
            int64_t rax_2 = sub_140a84c80(rcx_2, sx.q(rbx.d) << 3, 0)
            *(arg1 + 0x80) = rax_2
            rcx_2 = rax_2
        
        return memmove(rcx_2, arg1, (rsi_1 << 3).d) __tailcall
    
    *(arg1 + 0x80) = sub_140a84c80(rcx_2, sx.q(rbx.d) << 3, 0)
else if (rcx_2 != 0)
    memmove(arg1, rcx_2, (rsi_1 << 3).d)
    rcx_2 = *(arg1 + 0x80)
    
    if (rcx_2 != 0)
        *(arg1 + 0x80) = sub_140a84c80(rcx_2, 0, 0)
