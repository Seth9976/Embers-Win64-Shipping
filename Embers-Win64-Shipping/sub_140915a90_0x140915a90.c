// 函数: sub_140915a90
// 地址: 0x140915a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t rax_1 = (*(*arg1 + 0x78))()

if (rax_1 != 0)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rcx = (rdi_1 + 1).d
    arg2[1].d = rcx
    
    if (rcx s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rdi_1 << 3)) = rax_1

return arg2
