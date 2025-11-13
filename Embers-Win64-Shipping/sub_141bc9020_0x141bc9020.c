// 函数: sub_141bc9020
// 地址: 0x141bc9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)

if (sub_140cdd6a0(arg1) s< 0x18d)
    void* rcx_1 = arg1[0x124]
    
    if (rcx_1 != 0)
        int64_t* rax_1 = sub_141b72ec0(rcx_1)
        
        if (rax_1 != 0)
            sub_140de1700(&arg1[0x26], rax_1)
        
        arg1[0x124] = 0

void* result = sub_140cdd6a0(arg1)

if (result.d s< 0x1d3)
    result = sub_140db26d0(&arg1[0x12a])
    
    if (result.b != 0)
        sub_140d962e0(&arg1[0x6d], &arg1[0x12a])
        void var_58
        result = sub_140693420(&arg1[0x12a], sub_140d93b50(&var_58))
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                result = (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_20 + 8))(var_20, 1)
    
    int128_t zmm1_1 = zx.o(0)
    *(arg1 + 0x358) = *(arg1 + 0x9d8)
    *(arg1 + 0x9d8) = zmm1_1
    void var_68
    uint128_t zmm0_1
    
    if (data_14399f5e0.d.d f!= arg1[0x134].d || data_14399f5e0:4.d.d f!= *(arg1 + 0x9a4)
            || data_14399f5e0:8.d.d f!= arg1[0x135].d
            || not(data_14399f5e0:0xc.d.d f== *(arg1 + 0x9ac)))
        result = &arg1[0x7a]
        arg1[0x79].b = 0
        *(arg1 + 0x3b8) = *(arg1 + 0x9a0)
        
        if (&var_68 != result)
            zmm0_1 = *result
            *result = zmm1_1
            int64_t* rdi_2 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    result = (**rdi_2)(rdi_2)
                    int32_t temp3_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rdi_2 + 8))(rdi_2, 1)
        
        *(arg1 + 0x9a0) = data_14399f5e0
    
    if (data_14399f5c0.d.d f!= arg1[0x136].d || data_14399f5c0:4.d.d f!= *(arg1 + 0x9b4)
            || data_14399f5c0:8.d.d f!= arg1[0x137].d
            || not(data_14399f5c0:0xc.d.d f== *(arg1 + 0x9bc)))
        result = &arg1[0x7f]
        arg1[0x7e].b = 0
        *(arg1 + 0x3e0) = *(arg1 + 0x9b0)
        
        if (&var_68 != result)
            zmm0_1 = *result
            *result = zx.o(0)
            int64_t* rdi_3 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    result = (**rdi_3)(rdi_3)
                    int32_t temp5_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rdi_3 + 8))(rdi_3, 1)
        
        *(arg1 + 0x9b0) = data_14399f5c0
    
    if (data_14399f5e0.d.d f!= arg1[0x138].d || data_14399f5e0:4.d.d f!= *(arg1 + 0x9c4)
            || data_14399f5e0:8.d.d f!= arg1[0x139].d
            || not(data_14399f5e0:0xc.d.d f== *(arg1 + 0x9cc)))
        result = &arg1[0x84]
        arg1[0x83].b = 0
        *(arg1 + 0x408) = *(arg1 + 0x9c0)
        
        if (&var_68 != result)
            zmm0_1 = *result
            *result = zx.o(0)
            int64_t* rdi_4 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    result = (**rdi_4)(rdi_4)
                    int32_t temp7_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rdi_4 + 8))(rdi_4, 1)
        
        *(arg1 + 0x9c0) = data_14399f5e0

return result
