// 函数: sub_142344060
// 地址: 0x142344060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb4) |= 0x10
void var_18

if (arg1 + 0x58 != &var_18)
    *(arg1 + 0x58) = 0
    int64_t* rcx = *(arg1 + 0x60)
    *(arg1 + 0x60) = 0
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)

return arg1
