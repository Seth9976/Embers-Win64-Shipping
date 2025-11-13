// 函数: sub_14205ee10
// 地址: 0x14205ee10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
int32_t rcx = *(*arg3 + 0x28)
uint32_t rcx_1

if (*(arg1 + 0x7f0) == 0)
    rcx_1 = rcx u>> 0x1e & 1
else
    rcx_1 = rcx u>> 0x1f

if (rcx_1 != 0)
    void var_18
    *arg2 = *sub_142390320(arg1, &var_18, arg3)
    int32_t rax_4 = (arg2[1].d | 2) & 0xfffffffe
    arg2[1].d = rax_4
    
    if (*(arg1 + 0x58) s> 0 && *(arg1 + 0x37) s>= 0)
        arg2[1].d = rax_4 & 0xfffffffd

return arg2
