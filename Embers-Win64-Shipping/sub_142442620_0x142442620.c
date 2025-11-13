// 函数: sub_142442620
// 地址: 0x142442620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x4008))
int32_t rax = 0x4000

if (rdi.d u> 0x4000)
    int64_t rcx = 4
    
    if (*(arg1 + 0x400c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax = sub_140a846a0(rcx, 0)
    
    if (rdi.d s> rax)
        rax = 0x7fffffff

*(arg1 + 0x400c) = rax
return sub_142442560(arg1, arg2, rax, 1) __tailcall
