// 函数: sub_142152df0
// 地址: 0x142152df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x208))
uint32_t rax = 0x80

if (rdi.d u> 0x80)
    int64_t rcx = 4
    
    if (*(arg1 + 0x20c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax = (sub_140a846a0(rcx << 2, 0) u>> 2).d
    
    if (rdi.d s> rax)
        rax = 0x7fffffff

*(arg1 + 0x20c) = rax
return sub_142152b70(arg1, arg2, rax, 4) __tailcall
