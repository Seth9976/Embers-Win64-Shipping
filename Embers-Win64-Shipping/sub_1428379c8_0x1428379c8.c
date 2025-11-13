// 函数: sub_1428379c8
// 地址: 0x1428379c8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t var_18
    int32_t rax_1
    int64_t r8
    rax_1, r8 = (*(arg4 + 0x18))(&var_18, 8)
    int32_t rax_5
    
    if (rax_1 != 0xffffffff)
        if (sub_142834384(var_18) != 0x13)
            return sub_142835944(3, "Expected SMPL chunk found invalid id instead", r8)
        
        int32_t var_14
        
        if (arg1 - var_14 != 8)
            return sub_142835944(3, "SDTA chunk size mismatch", r8)
        
        *(arg2 + 8) = (*(arg4 + 0x30))(arg3)
        data_143fe79e0 = var_14
        *(arg2 + 0xc) = var_14
        rax_5 = (*(arg4 + 0x20))(arg3, var_14, 1)
    
    if (rax_1 == 0xffffffff || rax_5 == 0xffffffff)
        return 0

return 1
