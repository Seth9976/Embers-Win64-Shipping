// 函数: sub_142c48d10
// 地址: 0x142c48d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_144019c64 += 1
int32_t result = sub_142c48400(0, 0)

if (result == 0)
    int64_t rbx_1 = data_14401a180
    
    if (rbx_1 != 0)
    label_142c48d72:
        int64_t rax_2 = data_144019c98
        int64_t arg_18 = 0
        
        if (rax_2 != 0)
            rax_2(0x4b708b54, &arg_18)
        
        int32_t result_1 = rbx_1(arg1, arg2)
        int64_t rax_3 = data_144019ca0
        
        if (rax_3 != 0)
            rax_3(0x4b708b54, arg_18, zx.q(result_1))
        
        result = result_1
    else
        int64_t rax = data_144019c88
        int64_t rax_1
        
        if (rax != 0)
            rax_1 = rax(0x4b708b54)
            data_14401a180 = rax_1
            rbx_1 = rax_1
        
        if (rax != 0 && rax_1 != 0)
            goto label_142c48d72
        
        result = -3

data_144019c64 -= 1
return result
