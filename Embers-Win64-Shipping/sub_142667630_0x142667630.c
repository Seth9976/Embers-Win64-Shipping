// 函数: sub_142667630
// 地址: 0x142667630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x388))
uint32_t r8

if (rdi.d u> 0x10)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x38c) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    r8 = (sub_140a846a0(rax_1 * 0x38, 0) u/ 0x38).d
    
    if (rdi.d s> r8)
        r8 = 0x7fffffff
else
    r8 = 0x10

*(arg1 + 0x38c) = r8
return sub_142667500(arg1, arg2, r8, 0x38) __tailcall
