// 函数: sub_14085a340
// 地址: 0x14085a340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x1c8))
uint64_t rcx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x1cc) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rcx = sub_140a846a0(rcx * 0x70, 0) u/ 0x70
    
    if (rdi.d s> rcx.d)
        rcx = 0x7fffffff

*(arg1 + 0x1cc) = rcx.d
return sub_140859e20(arg1, arg2, rcx.d, 0x70) __tailcall
