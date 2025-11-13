// 函数: sub_14085a3e0
// 地址: 0x14085a3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x88))
uint64_t rax = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x8c) != 0 || rdi.d u> 4)
        rax = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    rax = sub_140a846a0(rax << 5, 0) u>> 5
    
    if (rdi.d s> rax.d)
        rax = 0x7fffffff

*(arg1 + 0x8c) = rax.d
return sub_140859ec0(arg1, arg2, rax.d, 0x20) __tailcall
