// 函数: sub_140dbc540
// 地址: 0x140dbc540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x198))
uint32_t rax_1

if (rdi.d u> 0x64)
    int64_t rcx = 4
    
    if (*(arg1 + 0x19c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = (sub_140a846a0(rcx << 2, 0) u>> 2).d
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 0x64

*(arg1 + 0x19c) = rax_1
return sub_140dbbfb0(arg1, arg2, rax_1, 4) __tailcall
