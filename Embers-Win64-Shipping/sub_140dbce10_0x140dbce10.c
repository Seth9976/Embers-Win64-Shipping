// 函数: sub_140dbce10
// 地址: 0x140dbce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x18))
uint32_t rax_1

if (rdi.d u> 1)
    int64_t rcx = 4
    
    if (*(arg1 + 0x1c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = (sub_140a846a0(rcx << 4, 0) u>> 4).d
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 1

*(arg1 + 0x1c) = rax_1
return sub_140dbc370(arg1, arg2, rax_1, 0x10) __tailcall
