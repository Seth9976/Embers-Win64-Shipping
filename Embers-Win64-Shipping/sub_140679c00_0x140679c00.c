// 函数: sub_140679c00
// 地址: 0x140679c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    uint64_t rax = sub_140a846a0(rbx << 2, 0) u>> 2
    
    if (rbx.d s> rax.d)
        rax = 0x7fffffff
    
    rbx = zx.q(rax.d)

if (rbx.d == *(arg1 + 0xc))
    return 

*(arg1 + 0xc) = rbx.d
uint64_t rcx_2 = *arg1

if (rcx_2 != 0 || rbx.d != 0)
    *arg1 = sub_140a84c80(rcx_2, sx.q(rbx.d) << 2, 0)
