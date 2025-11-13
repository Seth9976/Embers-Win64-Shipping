// 函数: sub_142c09a80
// 地址: 0x142c09a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 && arg1 != 0)
    int32_t rdi_1 = arg1[6]
    
    if (arg2 u< rdi_1)
        if (arg1[1] != 0)
            arg1[1] = 0
        
        int32_t rdi_2 = rdi_1 - arg2
        
        if (*arg1 != 0)
            *arg1
            *arg1 += 1
        
        if (arg3 u< rdi_2)
            rdi_2 = arg3
        
        int64_t rsi_1 = zx.q(arg2) + *(arg1 + 0x10)
        
        if (rdi_2 - 1 u<= 0x7ffffffe)
            int32_t* result = sub_140dc0ea0(1, 0x30)
            
            if (result != 0)
                *result = 1
                result[1] = 1
                *(result + 8) = 0
                *(result + 0x10) = rsi_1
                *(result + 0x28) = j_sub_142c09b70
                result[6] = rdi_2
                result[7] = 1
                *(result + 0x20) = arg1
                return result
        
        sub_142c09b70(arg1)

return &data_14369a5d0
