// 函数: sub_141bad980
// 地址: 0x141bad980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (sub_140d3e110(arg1 + 0x3e8) != 0)
    int64_t rax_1 = sub_140d3c6e0(arg1 + 0x3e8)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rcx_2 = (rdi_1 + 1).d
    arg2[1].d = rcx_2
    
    if (rcx_2 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rdi_1 << 3)) = rax_1

return arg2
