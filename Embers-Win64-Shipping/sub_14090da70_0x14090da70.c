// 函数: sub_14090da70
// 地址: 0x14090da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (void* i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        int64_t* rcx = *(i + 0x28)
        
        if (rcx != 0)
            int32_t temp0_1 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx + 8))(rcx, 1)
        
        j_sub_140a74f90(i)
