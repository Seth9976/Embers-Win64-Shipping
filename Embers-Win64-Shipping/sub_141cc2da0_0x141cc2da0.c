// 函数: sub_141cc2da0
// 地址: 0x141cc2da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t rbx = 0
arg1[1] = 0

if (arg2[1].d s> 0)
    int32_t rcx_5
    
    do
        int64_t var_18
        sub_140b63b70(*arg2 + (sx.q(rbx) << 3), &var_18)
        int32_t var_10
        int32_t r8_2
        
        if (var_10 == 0)
            r8_2 = 0
        else
            r8_2 = var_10 - 1
        
        sub_140a20ba0(arg1, var_18, r8_2)
        int64_t rcx_3 = var_18
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rcx_5 = arg2[1].d
        
        if (rbx s< rcx_5 - 1)
            sub_140a20ba0(arg1, &data_142d8adc4, 2)
            rcx_5 = arg2[1].d
        
        rbx += 1
    while (rbx s< rcx_5)

return arg1
