// 函数: sub_142b9e500
// 地址: 0x142b9e500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xb]

if (rax == 1)
    *arg1 = arg2
    arg1[1] = arg2 + 0xb40000
    return sub_142b9e470(arg1, arg3) __tailcall

int32_t result
int32_t arg_8
int64_t r15_2

if (rax != 2)
    if (rax != 0)
        return 0
    
    int32_t r14_2 = arg1[0xf]
    r15_2 = sx.q(arg3) * 0x30
    sub_142b97220(&arg_8, r14_2, 0x5a0000 - arg3 * 0xb40000 + arg2)
    arg_8 += arg1[2]
    arg4 += arg1[3]
    result = sub_142b9e3b0(&arg1[0x10] + r15_2, &arg_8, 0)
    
    if (result == 0)
        sub_142b97220(&arg_8, r14_2, arg2 - (0x5a0000 - arg3 * 0xb40000))
        arg_8 += arg1[2]
        arg4 += arg1[3]
        return sub_142b9e3b0(&arg1[0x10] + r15_2, &arg_8, 0)
else
    int32_t r14_1 = arg1[0xf]
    r15_2 = sx.q(arg3) * 0x30
    int32_t arg_20
    sub_142b97220(&arg_20, r14_1, 0x5a0000 - arg3 * 0xb40000 + arg2)
    sub_142b97220(&arg_8, r14_1, arg2)
    arg4 += arg1[3] + arg5
    arg_8 += arg1[2] + arg_20
    result = sub_142b9e3b0(&arg1[0x10] + r15_2, &arg_8, 0)
    
    if (result == 0)
        sub_142b97220(&arg_20, r14_1, arg2 - (0x5a0000 - arg3 * 0xb40000))
        sub_142b97220(&arg_8, r14_1, arg2)
        int32_t rdx_7 = arg1[3]
        arg_8 += arg1[2] + arg_20
        arg4 += rdx_7 + arg5
        return sub_142b9e3b0(&arg1[0x10] + r15_2, &arg_8, 0)
return result
