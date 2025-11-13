// 函数: sub_141e0bd40
// 地址: 0x141e0bd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x108))
uint64_t rax = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x10c) != 0 || rdi.d u> 4)
        rax = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    rax = sub_140a846a0(rax << 6, 0) u>> 6
    
    if (rdi.d s> rax.d)
        rax = 0x7fffffff

*(arg1 + 0x10c) = rax.d
return sub_141e0bb50(arg1, arg2, rax.d, 0x40) __tailcall
