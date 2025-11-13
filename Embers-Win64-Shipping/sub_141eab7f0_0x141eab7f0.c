// 函数: sub_141eab7f0
// 地址: 0x141eab7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
uint32_t rax_1

if (rdi.d u> 6)
    int64_t rcx = 4
    
    if (*(arg1 + 0x1c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = (sub_140a846a0(rcx * 2, 0) u>> 1).d
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 6

*(arg1 + 0x1c) = rax_1
return sub_141eab5f0(arg1, arg2, rax_1, 2) __tailcall
