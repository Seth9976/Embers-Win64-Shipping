// 函数: sub_141bd93d0
// 地址: 0x141bd93d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (&arg2[0x38] != &var_18)
    *(arg2 + 0x38) = 0
    int64_t* rcx = *(arg2 + 0x40)
    *(arg2 + 0x40) = 0
    
    if (rcx != 0)
        int32_t temp0_1 = *(rcx + 0xc)
        *(rcx + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx + 8))(rcx, 1)

*(arg2 + 0xb4) = (*(arg2 + 0xb4) & 0xffffffdf) | 1
sub_140e54f20(arg2, arg2)
sub_140596b00(arg1, arg2)
return arg1
