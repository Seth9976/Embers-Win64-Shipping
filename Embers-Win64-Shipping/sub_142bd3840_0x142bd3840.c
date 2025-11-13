// 函数: sub_142bd3840
// 地址: 0x142bd3840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1[0x91e]
int64_t rbp

if (*(result + 9) == 0 || *(arg1 + 0x48dd) != 0)
    rbp.b = 0
else
    rbp.b = 1

int32_t rdx = arg1[0x925].d

if (rdx != arg2 || *(arg1 + 0x492c) != arg3 || rbp.b != 0)
    int32_t arg_8
    int32_t arg_10
    sub_142bd31b0(arg1, rdx, *(arg1 + 0x492c), arg2, arg3, &arg_10, &arg_8)
    int32_t rcx = arg_8
    int32_t rdx_1 = arg_10
    int32_t arg_20 = arg1[0x925].d + rdx_1
    bool cond:0_1 = *(arg1 + 0x48df) == 0
    int32_t arg_24 = *(arg1 + 0x492c) + rcx
    int64_t rbx_1 = arg_20.q
    arg_8 = rdx_1 + arg2
    result = zx.q(rcx + arg3)
    int32_t arg_c = result.d
    int64_t rdi_1 = arg_8.q
    
    if (not(cond:0_1))
        result, arg5 = sub_142bd3af0(arg1, rbx_1, arg6, arg4, arg5)
        *(arg1 + 0x48df) = 0
        *(arg1 + 0x48dc) = 1
        arg1[0x924] = rdi_1
    
    if (arg1[0x928].b != 0)
        result = sub_142bd3ba0(arg1, &arg1[2], &arg_20, rdi_1, 0)
        rbx_1 = arg_20.q
    
    arg1[0x929] = rbx_1
    arg1[0x92a] = rdi_1
    arg1[0x928].b = 1
    *(arg1 + 0x4944) = 2
    
    if (rbp.b != 0)
        int32_t* var_40_1
        var_40_1.b = 0
        result = sub_142bd4180(&arg1[2], arg1[0x91c], arg1[0x91d], arg1[0x91e], arg5, arg6, 
            arg1[0x91f].d, var_40_1.b)
    
    arg1[0x925].d = arg2
    *(arg1 + 0x492c) = arg3

return result
