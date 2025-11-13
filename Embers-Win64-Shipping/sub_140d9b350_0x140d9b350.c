// 函数: sub_140d9b350
// 地址: 0x140d9b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xb4) &= 0xfffffffd
void var_18

if (arg1 + 0x48 != &var_18)
    *(arg1 + 0x48) = 0
    int64_t* rcx = *(arg1 + 0x50)
    *(arg1 + 0x50) = 0
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)

*(arg1 + 0xb4) &= 0xfffffffb
return arg1
