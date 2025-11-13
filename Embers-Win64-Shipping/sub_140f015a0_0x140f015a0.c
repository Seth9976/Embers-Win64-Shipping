// 函数: sub_140f015a0
// 地址: 0x140f015a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 - 1 s>= 0)
    int64_t* r9 = *(arg1 + 0x78)
    int32_t r8 = r9[1].d
    int32_t rbx_1 = r8 - 1
    
    if (r8 == 0)
        rbx_1 = -1
    
    result = r8 - 1
    
    if (r8 == 0)
        result = -1
    
    if (r8 == 0)
        result = 0
    
    if (arg2 != result)
        int16_t* r9_1
        
        if (r8 == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *r9
        
        int128_t zmm0 = *(arg1 + 0xa0)
        int128_t zmm1 = *(arg1 + 0xb0)
        
        if (r8 == 0)
            rbx_1 = 0
        
        int32_t zmm2
        int32_t var_68 = zmm2
        int32_t var_74 = rbx_1
        int64_t var_70 = 0.q
        int16_t var_64 = *arg4
        int64_t var_60 = *(arg1 + 0x90)
        int64_t var_58 = *(arg1 + 0x98)
        int64_t var_30 = *(arg1 + 0xc0)
        int64_t* rax_5 = *(arg1 + 0xc8)
        int128_t var_50 = zmm0
        int128_t var_40 = zmm1
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        int64_t var_20 = *(arg1 + 0xd0)
        int32_t var_18 = *(arg1 + 0xd8)
        char var_14 = *(arg1 + 0xdc)
        char rax_9 = sub_140f02950(&arg4[4], &var_70, arg2 - 1, r9_1, 0)
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                int64_t rdx_1 = *rax_5
                (*rdx_1)(rax_5, rdx_1)
                int32_t temp2_1 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rax_5 + 8))(rax_5, 1)
        
        return zx.q(rax_9)

result.b = 0
return result
