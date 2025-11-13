// 函数: sub_14085a2c0
// 地址: 0x14085a2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x28))
int32_t rax_1

if (rdi.d u> 0x20)
    int64_t rcx = 4
    
    if (*(arg1 + 0x2c) != 0 || rdi.d u> 4)
        rcx = rdi + 0x10 + ((rdi * 3) u>> 3)
    
    rax_1 = sub_140a846a0(rcx, 0)
    
    if (rdi.d s> rax_1)
        rax_1 = 0x7fffffff
else
    rax_1 = 0x20

*(arg1 + 0x2c) = rax_1
return sub_140859d90(arg1, arg2, rax_1, 1) __tailcall
