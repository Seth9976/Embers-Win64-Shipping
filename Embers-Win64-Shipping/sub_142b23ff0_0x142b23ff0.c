// 函数: sub_142b23ff0
// 地址: 0x142b23ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 1 || arg5 s< arg2)
    *arg6 = 0
    return 0

int32_t* rax

if (arg1[3].d s<= 0)
    int32_t rcx_1 = arg1[2].d - *(arg1 + 0x14)
    
    if (rcx_1 s>= arg2)
        *arg6 = rcx_1
        return sx.q(*(arg1 + 0x14)) + arg1[1]
    
    rax = arg6
    
    if ((*(*arg1 + 0x28))(arg1, zx.q(arg3)) != 0)
        *rax = arg1[2].d - *(arg1 + 0x14)
        return sx.q(*(arg1 + 0x14)) + arg1[1]
else
    rax = arg6

*rax = arg5
return arg4
