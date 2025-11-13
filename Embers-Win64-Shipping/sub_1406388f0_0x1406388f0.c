// 函数: sub_1406388f0
// 地址: 0x1406388f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0xc8))
uint32_t rax

if (rdi.d u> 0x18)
    rax = (sub_140a846a0(((((rdi * 3) u>> 3) + rdi) << 3) + 0x80, 0) u>> 3).d
    
    if (rdi.d s> rax)
        rax = 0x7fffffff
else
    rax = 0x18

*(arg1 + 0xcc) = rax
return sub_140638610(arg1, arg2, rax, 8) __tailcall
