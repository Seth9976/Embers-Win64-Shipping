// 函数: sub_1413a8850
// 地址: 0x1413a8850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x4008))
uint32_t rax = 0x100

if (rdi.d u> 0x100)
    int64_t rcx = 4
    
    if (*(arg1 + 0x400c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax = (sub_140a846a0(rcx << 6, 0) u>> 6).d
    
    if (rdi.d s> rax)
        rax = 0x7fffffff

*(arg1 + 0x400c) = rax
return sub_1413a8620(arg1, arg2, rax, 0x40) __tailcall
