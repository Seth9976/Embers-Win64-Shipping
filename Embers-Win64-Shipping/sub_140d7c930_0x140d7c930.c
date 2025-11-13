// 函数: sub_140d7c930
// 地址: 0x140d7c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 0x38) u>> 1).b & 1) == 0)
    return 0x80040201

if (arg2 != 0xffffffff)
    return 0x80040205

*arg5 = 0

if (arg3 u>= 1)
    arg3 = 1

if (arg3 != 0)
    int32_t* rbx_1 = arg4 + 8
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        int64_t* rcx = *(arg1 + 0x18)
        int32_t var_28
        int32_t var_24
        int32_t arg_8
        (*(*rcx + 0x20))(rcx, &arg_8, &var_28, &var_24)
        int32_t rcx_1 = arg_8
        rbx_1[-2] = rcx_1
        rbx_1[-1] = rcx_1 + var_28
        int32_t rcx_3 = var_24
        
        if (rcx_3 == 0)
            *rbx_1 = 1
        else if (rcx_3 == 1)
            *rbx_1 = 2
        
        rbx_1[1] = 0
        rbx_1 = &rbx_1[4]
        *arg5 += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return 0
