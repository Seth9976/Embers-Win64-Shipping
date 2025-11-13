// 函数: sub_141e47cf0
// 地址: 0x141e47cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x78))
uint64_t rcx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0x7c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rcx = sub_140a846a0(rcx * 0x1c, 0) u/ 0x1c
    
    if (rdi.d s> rcx.d)
        rcx = 0x7fffffff

*(arg1 + 0x7c) = rcx.d
return sub_141e47c60(arg1, arg2, rcx.d, 0x1c) __tailcall
