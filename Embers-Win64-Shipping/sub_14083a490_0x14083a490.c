// 函数: sub_14083a490
// 地址: 0x14083a490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x28))
uint64_t rax = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x2c) != 0 || rdi.d u> 4)
        rax = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    rax = sub_140a846a0(rax << 3, 0) u>> 3
    
    if (rdi.d s> rax.d)
        rax = 0x7fffffff

*(arg1 + 0x2c) = rax.d
return sub_140839270(arg1, arg2, rax.d, 8) __tailcall
