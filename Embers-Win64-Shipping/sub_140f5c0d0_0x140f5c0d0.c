// 函数: sub_140f5c0d0
// 地址: 0x140f5c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x208))
uint32_t rax_1

if (rdi.d u> 0x40)
    int64_t rcx = 4
    
    if (*(arg1 + 0x20c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = (sub_140a846a0(rcx << 3, 0) u>> 3).d
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 0x40

*(arg1 + 0x20c) = rax_1
return sub_140f5c020(arg1, arg2, rax_1, 8) __tailcall
