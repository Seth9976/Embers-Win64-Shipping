// 函数: sub_142c6c0d0
// 地址: 0x142c6c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1[2]

if (not.q(arg3) u< r8)
    data_143ccb8a0(*arg1)
    *arg1 = 0
    data_143ccb8a0(arg1)
    return 0x1b

int64_t r9 = *arg1

if (r9 == 0 || r8 + arg3 u> arg1[1] - 1)
    int64_t rdi_2
    
    if (arg3 u> 0x7fffffffffffffff || r8 u> 0x7fffffffffffffff || not.q(arg3 * 2) u< r8 * 2)
        rdi_2 = -1
    else
        rdi_2 = (r8 + arg3) * 2
    
    int64_t rax_6
    
    if (r9 == 0)
        rax_6 = data_143ccb898(rdi_2)
    else
        rax_6 = sub_142c562c0(r9, rdi_2)
    
    if (rax_6 == 0)
        data_143ccb8a0(arg1)
        return 0x1b
    
    *arg1 = rax_6
    arg1[1] = rdi_2

memcpy(*arg1 + arg1[2], arg2, arg3.d)
arg1[2] += arg3
return 0
