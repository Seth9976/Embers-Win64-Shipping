// 函数: sub_140a366a0
// 地址: 0x140a366a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 0

int32_t rdi = 0
*(arg1 + 0x40000) = -1
*(arg1 + 0x40008) = 0
*(arg1 + 0x40028) = 0
arg1[0x10009] = 9
int32_t rax = 9
int32_t arg_8 = arg4

if ((arg1.b & 7) == 0)
    if (arg6 s>= 1)
        rax = arg6
    
    if (rax s> 0xc)
        rax = 0xc
    
    arg1[0x10009].w = rax.w
    sub_140a2c530(arg1, arg2)
    int32_t rdx
    
    if (arg4 u<= 0x7e000000)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = muls.dp.d(0x80808081, arg4)
        int32_t rdx_3 = (temp0_1 + arg4) s>> 7
        rdx = rdx_3 + 0x10 + (rdx_3 u>> 0x1f) + arg4
    else
        rdx = 0
    
    int32_t var_28_1
    
    var_28_1 = arg5 s>= rdx ? 0 : 1
    
    int32_t* r9 = &arg_8
    
    if (*(arg1 + 0x40028) == 0)
        return sub_140a27100(arg1, arg2, arg3, r9, arg5, arg6, var_28_1)
    
    rdi = sub_140a24820(arg1, arg2, arg3, r9, arg5, arg6, var_28_1)

return zx.q(rdi)
