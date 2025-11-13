// 函数: sub_1405bf5f0
// 地址: 0x1405bf5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x48) = 0xffffffff
*(arg1 + 0x4c) = 0
void var_18

if (arg1 + 0x38 != &var_18)
    *(arg1 + 0x38) = 0
    int64_t* rcx = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            jump(*(*rcx + 8))

return arg1 + 0x38
