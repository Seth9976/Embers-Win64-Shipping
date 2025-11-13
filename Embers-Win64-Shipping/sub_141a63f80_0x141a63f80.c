// 函数: sub_141a63f80
// 地址: 0x141a63f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x48))
uint64_t rax = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x4c) != 0 || rdi.d u> 4)
        rax = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    rax = sub_140a846a0(rax << 4, 0) u>> 4
    
    if (rdi.d s> rax.d)
        rax = 0x7fffffff

*(arg1 + 0x4c) = rax.d
return sub_141a63ca0(arg1, arg2, rax.d, 0x10) __tailcall
