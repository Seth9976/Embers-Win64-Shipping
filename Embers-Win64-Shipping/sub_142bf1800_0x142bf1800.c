// 函数: sub_142bf1800
// 地址: 0x142bf1800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 0x28

int64_t rbp = *(arg2 + 0x30)
int32_t rax = sub_142b97060(arg2, 0, arg4)

if (rax == 0)
    char arg_8
    rax = sub_142b96990(arg2, &arg_8, rax + 2, arg3)
    
    if (rax == 0 && (arg_8 != 0x1f || arg5 != 0x9d))
        rax = 3

int32_t arg_18 = rax

if (rax != 0)
    return rax

__builtin_memset(arg1, 0, 0x30)
arg1[7] = 0
arg1[8] = 0
arg1[6] = rbp
int64_t* rax_1
char r9_1
int512_t zmm0
rax_1, r9_1, zmm0 = sub_142b99860(rbp, 0x1108, &arg_18)
int32_t rax_2 = arg_18

if (rax_2 == 0)
    rax_2 = sub_142bf1930(rax_1, arg1, arg2, zmm0, arg4, r9_1)
    arg_18 = rax_2
    
    if (rax_2 != 0)
        sub_142b99980(rbp, rax_1)
        return arg_18
    
    arg1[2] = rax_1

*arg1 = 0
arg1[4] = sub_142bf1ee0
arg1[5] = sub_142bf1e80
arg1[1] = 0x7fffffff
return rax_2
