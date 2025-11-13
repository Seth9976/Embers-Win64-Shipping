// 函数: sub_140f896b0
// 地址: 0x140f896b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x38 != &var_18)
    *(arg1 + 0x38) = 0
    int64_t* rcx = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)

*(arg1 + 0xb4) = (*(arg1 + 0xb4) & 0xffffffdf) | 1
return arg1
