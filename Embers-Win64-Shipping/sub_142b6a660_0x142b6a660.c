// 函数: sub_142b6a660
// 地址: 0x142b6a660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(arg3)

if (arg4 == 0)
    return arg1(arg2, rdx, arg6, arg7, arg8)

int32_t rbx = 0xdbff
void var_28
void* r14 = &var_28

if (arg8 != 0)
    r14 = arg8

if (arg4 == 2)
    rbx = 0xdfff

int32_t rax_2 = arg1(arg2, rdx, arg6, arg7, r14)

if (rax_2 s>= 0xd7ff && arg3 s<= rbx)
    if (*r14 != arg5)
        if (arg3 s<= 0xd7ff)
            return 0xd7ff
        
        *r14 = arg5
        
        if (rax_2 s> rbx)
            return rbx
        
        goto label_142b6a734
    
    if (rax_2 s< rbx)
    label_142b6a734:
        int32_t arg_20
        int32_t rax_3 = arg1(arg2, zx.q(rbx + 1), arg6, arg7, &arg_20)
        
        if (arg_20 == arg5)
            return rax_3
        
        return rbx

return rax_2
