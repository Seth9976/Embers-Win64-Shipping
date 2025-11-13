// 函数: sub_142c48ec0
// 地址: 0x142c48ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_144019c64 += 1
int32_t result = sub_142c48400(0, 0)

if (result == 0)
    int64_t rbx_1 = data_14401a1b8
    
    if (rbx_1 != 0)
    label_142c48f33:
        int64_t rax_2 = data_144019c98
        int64_t var_18 = 0
        
        if (rax_2 != 0)
            rax_2(0x6c0ed98c, &var_18)
        
        int32_t result_1 = rbx_1(arg1, arg2, zx.q(arg3), zx.q(arg4), arg5)
        int64_t rax_4 = data_144019ca0
        
        if (rax_4 != 0)
            rax_4(0x6c0ed98c, var_18, zx.q(result_1))
        
        result = result_1
    else
        int64_t rax = data_144019c88
        int64_t rax_1
        
        if (rax != 0)
            rax_1 = rax(0x6c0ed98c)
            data_14401a1b8 = rax_1
            rbx_1 = rax_1
        
        if (rax != 0 && rax_1 != 0)
            goto label_142c48f33
        
        result = -3

data_144019c64 -= 1
return result
