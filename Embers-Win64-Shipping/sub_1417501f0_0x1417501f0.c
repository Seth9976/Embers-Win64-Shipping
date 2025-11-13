// 函数: sub_1417501f0
// 地址: 0x1417501f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x710))
uint32_t r8

if (rdi.d u> 8)
    int64_t rax_1 = 4
    
    if (*(arg1 + 0x714) != 0 || rdi.d u> 4)
        rax_1 = ((rdi * 3) u>> 3) + 0x10 + rdi
    
    r8 = (sub_140a846a0(rax_1 * 0xe0, 0) u/ 0xe0).d
    
    if (rdi.d s> r8)
        r8 = 0x7fffffff
else
    r8 = 8

*(arg1 + 0x714) = r8
return sub_14174fd20(arg1, arg2, r8, 0xe0) __tailcall
