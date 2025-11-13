// 函数: sub_142a6d820
// 地址: 0x142a6d820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x29]

if (rcx == 0)
    return arg3

int64_t* rax_1 = (*(*rcx + 0x10))(rcx)

if (rax_1 != 0)
    int32_t arg_8 = 0
    sub_142a6c1a0(rax_1, arg2.q, &arg_8)
    
    if (arg_8 s<= 0)
        (*(*arg1 + 0x40))(arg1, rax_1, arg3, arg4, arg5)
    
    (**rax_1)(rax_1, 1)

return arg3
