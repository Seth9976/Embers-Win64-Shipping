// 函数: sub_140b269c0
// 地址: 0x140b269c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x2008))
uint32_t rax = 0x1000

if (rdi.d u> 0x1000)
    int64_t rcx = 4
    
    if (*(arg1 + 0x200c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax = (sub_140a846a0(rcx * 2, 0) u>> 1).d
    
    if (rdi.d s> rax)
        rax = 0x7fffffff

*(arg1 + 0x200c) = rax
return sub_140b26650(arg1, arg2, rax, 2) __tailcall
