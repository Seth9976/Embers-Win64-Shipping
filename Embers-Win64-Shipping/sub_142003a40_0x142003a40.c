// 函数: sub_142003a40
// 地址: 0x142003a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 1)
    void* var_b8
    sub_142411870(sub_14240f390(), &var_b8)
    int64_t* var_b0
    
    if (var_b8 != 0)
        int128_t zmm0 = data_14399f5e0
        int32_t r8 = *(arg1 + 0x13c)
        int32_t var_a8 = 0
        int16_t var_a4 = 0
        int64_t var_a0 = 0
        int128_t var_98 = zmm0
        void var_88
        sub_140d93a40(&var_88, arg1, r8, arg1 + 0x140, &var_a8)
        char var_3c
        void var_38
        sub_140da3dd0(sub_140da4220(var_b8, &var_88, 0x3f800000, &data_143e20dd8), &var_38, arg2, 
            var_3c)
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t temp4_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_50 + 8))(var_50, 1)
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t temp5_1 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
        
        int16_t var_16
        return zx.q(var_16)
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t temp2_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_b0 + 8))(var_b0, 1)

return 0
