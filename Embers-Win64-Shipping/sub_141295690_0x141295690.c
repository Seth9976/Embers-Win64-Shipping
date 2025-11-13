// 函数: sub_141295690
// 地址: 0x141295690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xa28))
uint64_t rcx = 4

if (rdi.d u> 4)
    if (*(arg1 + 0xa2c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rcx = sub_140a846a0(rcx * 0x288, 0) u/ 0x288
    
    if (rdi.d s> rcx.d)
        rcx = 0x7fffffff

*(arg1 + 0xa2c) = rcx.d
return sub_1412952d0(arg1, arg2, rcx.d, 0x288) __tailcall
