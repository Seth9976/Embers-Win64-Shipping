// 函数: sub_141bc9480
// 地址: 0x141bc9480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)

if (sub_140cdd6a0(arg1) s< 0x18d)
    void* rcx_1 = arg1[0x179]
    
    if (rcx_1 != 0)
        int64_t* rax_1 = sub_141b72ec0(rcx_1)
        
        if (rax_1 != 0)
            sub_140de1700(&arg1[0x2d], rax_1)
        
        arg1[0x179] = 0

void* result = sub_140cdd6a0(arg1)

if (result.d s< 0x1d3)
    result = sub_140db26d0(&arg1[0x17a])
    
    if (result.b != 0)
        sub_140d962e0(&arg1[0x74], &arg1[0x17a])
        void var_58
        result = sub_140693420(&arg1[0x17a], sub_140d93b50(&var_58))
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                result = (**var_20)(var_20)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*var_20 + 8))(var_20, 1)
    
    void var_68
    uint128_t zmm0_1
    
    if (data_14399f5e0.d.d f!= arg1[0x184].d || data_14399f5e0:4.d.d f!= *(arg1 + 0xc24)
            || data_14399f5e0:8.d.d f!= arg1[0x185].d
            || not(data_14399f5e0:0xc.d.d f== *(arg1 + 0xc2c)))
        result = &arg1[0x81]
        arg1[0x80].b = 0
        *(arg1 + 0x3f0) = *(arg1 + 0xc20)
        
        if (&var_68 != result)
            zmm0_1 = *result
            *result = zx.o(0)
            int64_t* rdi_2 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    result = (**rdi_2)(rdi_2)
                    int32_t temp3_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rdi_2 + 8))(rdi_2, 1)
        
        *(arg1 + 0xc20) = data_14399f5e0
    
    if (data_14399f5c0.d.d f!= arg1[0x186].d || data_14399f5c0:4.d.d f!= *(arg1 + 0xc34)
            || data_14399f5c0:8.d.d f!= arg1[0x187].d
            || not(data_14399f5c0:0xc.d.d f== *(arg1 + 0xc3c)))
        result = &arg1[0x86]
        arg1[0x85].b = 0
        *(arg1 + 0x418) = *(arg1 + 0xc30)
        
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
        
        *(arg1 + 0xc30) = data_14399f5c0
    
    if (data_14399f5e0.d.d f!= arg1[0x188].d || data_14399f5e0:4.d.d f!= *(arg1 + 0xc44)
            || data_14399f5e0:8.d.d f!= arg1[0x189].d
            || not(data_14399f5e0:0xc.d.d f== *(arg1 + 0xc4c)))
        result = &arg1[0x8b]
        arg1[0x8a].b = 0
        *(arg1 + 0x440) = *(arg1 + 0xc40)
        
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
        
        *(arg1 + 0xc40) = data_14399f5e0

return result
