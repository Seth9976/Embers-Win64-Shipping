// 函数: sub_142003bb0
// 地址: 0x142003bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = zx.d(*(arg1 + 0x30))

if (r9 == 0)
    return zx.q(*(arg1 + 0x6c))

if (r9 == 1)
    void* var_88
    sub_142411870(sub_14240f390(), &var_88)
    int64_t* var_80
    
    if (var_88 != 0)
        int128_t zmm0 = data_14399f5e0
        int32_t r8 = *(arg1 + 0x13c)
        int32_t var_78 = 0
        int16_t var_74_1 = 0
        int64_t var_70_1 = 0
        int128_t var_68_1 = zmm0
        void var_58
        sub_140d93a40(&var_58, arg1, r8, arg1 + 0x140, &var_78)
        char var_c
        char rax_2 = sub_140da7dd0(sub_140da4220(var_88, &var_58, 0x3f800000, &data_143e20dd8), 
            arg2, arg3, var_c)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                int64_t rdx_4 = *var_20
                (*rdx_4)(var_20, rdx_4)
                int32_t temp4_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp5_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
        
        return zx.q(rax_2)
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t temp2_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_80 + 8))(var_80, 1)

uint64_t result
result.b = 0
return result
