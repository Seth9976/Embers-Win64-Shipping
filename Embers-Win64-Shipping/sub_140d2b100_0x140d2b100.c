// 函数: sub_140d2b100
// 地址: 0x140d2b100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x88))
uint32_t rax_1

if (rdi.d u> 8)
    int64_t rcx = 4
    
    if (*(arg1 + 0x8c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = (sub_140a846a0(rcx << 4, 0) u>> 4).d
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 8

*(arg1 + 0x8c) = rax_1
return sub_140d2b050(arg1, arg2, rax_1, 0x10) __tailcall
