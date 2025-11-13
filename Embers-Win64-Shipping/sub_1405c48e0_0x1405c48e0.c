// 函数: sub_1405c48e0
// 地址: 0x1405c48e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x80)

if (rcx != 0)
    sub_1405db200(rcx, 0)

*(arg1 + 0x80) = 0
*(arg1 + 0x48) = 0xffffffff
*(arg1 + 0x4c) = 0
void var_18

if (arg1 + 0x38 != &var_18)
    *(arg1 + 0x38) = 0
    int64_t* rcx_1 = *(arg1 + 0x40)
    *(arg1 + 0x40) = 0
    
    if (rcx_1 != 0)
        int32_t temp0_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            jump(*(*rcx_1 + 8))

return arg1 + 0x38
