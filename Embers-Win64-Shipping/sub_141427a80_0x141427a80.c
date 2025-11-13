// 函数: sub_141427a80
// 地址: 0x141427a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 4)
        uint64_t rax = sub_140a846a0(rbx << 3, 0) u>> 3
        
        if (rbx.d s> rax.d)
            rax = 0x7fffffff
        
        rbx = zx.q(rax.d)
    else
        rbx = 4

if (rbx.d == *(arg1 + 0x2c))
    return 

int64_t rsi_1 = sx.q(*(arg1 + 0x28))
*(arg1 + 0x2c) = rbx.d
int64_t rcx_2 = *(arg1 + 0x20)

if (rbx.d u> 4)
    if (rcx_2 == 0)
        if (rbx.d != 0)
            int64_t rax_2 = sub_140a84c80(rcx_2, sx.q(rbx.d) << 3, 0)
            *(arg1 + 0x20) = rax_2
            rcx_2 = rax_2
        
        return memmove(rcx_2, arg1, (rsi_1 << 3).d) __tailcall
    
    *(arg1 + 0x20) = sub_140a84c80(rcx_2, sx.q(rbx.d) << 3, 0)
else if (rcx_2 != 0)
    memmove(arg1, rcx_2, (rsi_1 << 3).d)
    rcx_2 = *(arg1 + 0x20)
    
    if (rcx_2 != 0)
        *(arg1 + 0x20) = sub_140a84c80(rcx_2, 0, 0)
