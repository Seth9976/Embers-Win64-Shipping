// 函数: sub_141902e10
// 地址: 0x141902e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x38))
uint32_t rax_1

if (rdi.d u> 6)
    int64_t rcx = 4
    
    if (*(arg1 + 0x3c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = (sub_140a846a0(rcx << 3, 0) u>> 3).d
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 6

*(arg1 + 0x3c) = rax_1
return sub_141902cc0(arg1, arg2, rax_1, 8) __tailcall
