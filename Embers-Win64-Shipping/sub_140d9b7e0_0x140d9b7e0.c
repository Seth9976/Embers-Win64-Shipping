// 函数: sub_140d9b7e0
// 地址: 0x140d9b7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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

int32_t rax_3 = *(arg1 + 0xb4) & 0xfffffff5
*(arg1 + 0xb0) = arg2
*(arg1 + 0xb4) = zx.d(arg3) << 3 | rax_3 | 4
return arg1
