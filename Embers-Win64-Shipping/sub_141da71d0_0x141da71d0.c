// 函数: sub_141da71d0
// 地址: 0x141da71d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result

if (*(arg1 + 0x2b8) == 0)
label_141da7200:
    
    for (int64_t* i = *(arg1 + 0x2e8); i != &i[sx.q(*(arg1 + 0x2f0)) * 2]; i = &i[2])
        result = *i
        
        if (result[1].d == 6)
            return result
    
    result = *(arg1 + 0x2f8)
    
    if (result == 0 || result[1].d != 6)
        result = zx.q(*(arg1 + 0x238))
        int32_t rcx_1 = *(arg1 + 0x270)
        
        if (result.d s< rcx_1 || *(arg1 + 0x25d) != 0)
            int32_t rdx_4 = *(arg1 + 0x298)
            int64_t performanceCount
            
            if (rdx_4 == 0 || *(arg1 + 0x280) u>= rdx_4 || result.d s>= rcx_1)
                result = QueryPerformanceCounter(&performanceCount)
                int64_t zmm0 =
                    float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f- *(arg1 + 0x240)
                
                if (not(zmm0 f< 5.0))
                    if (zmm0 f>= 30.0)
                        goto label_141da734e
                    
                    int32_t rax_2 = *(arg1 + 0x280)
                    int32_t rcx_3 = *(arg1 + 0x27c)
                    
                    if (rax_2 u<= rcx_3)
                        goto label_141da734e
                    
                    int32_t rdx_5 = *(arg1 + 0x148)
                    
                    if (rdx_5 s<= 0)
                        goto label_141da734e
                    
                    zmm0.d = float.s(rdx_5)
                    int64_t zmm1
                    zmm1.d = float.s(zx.q(rax_2 - rcx_3))
                    result = data_143f38850
                    zmm1.d = zmm1.d f* 0.00100000005f
                    zmm0.d = zmm1.d f* float.s(*(arg1 + 0x150)) f/ zmm0.d
                    zmm1.d = zmm1.d f- zmm0.d
                    zmm0.d = (*result).d f* 0.5f
                    
                    if (not(zmm1.d f> zmm0.d))
                        goto label_141da734e
            else
            label_141da734e:
                int64_t* rax_4 = sub_141802500()
                int64_t r8_1 = *rax_4
                int64_t* var_48
                (*(r8_1 + 0x40))(rax_4, &var_48, r8_1)
                int16_t* const r8_2 = &data_142d40450
                
                if (*(arg1 + 0x208) != 0)
                    *(arg1 + 0x200)
                
                if (*(arg1 + 0x230) != 0)
                    r8_2 = *(arg1 + 0x228)
                
                int32_t var_68_1 = *(arg1 + 0x238)
                int64_t var_38
                sub_140a2e390(&var_38, u"%sreplay/%s/file/stream.%i", r8_2)
                int64_t* rcx_6 = var_48
                (*(*rcx_6 + 0x50))(rcx_6, &var_38)
                int64_t var_58 = 0
                int32_t var_50_1 = 0
                sub_1405947f0(&var_58, 4)
                int32_t rax_7 = var_50_1 + 4
                var_50_1 = rax_7
                
                if (rax_7 s> 0)
                    sub_140594770(&var_58)
                
                UnDecorator::getReferenceType(var_58, &data_142d85f90, 8)
                int64_t* rcx_10 = var_48
                (*(*rcx_10 + 0x48))(rcx_10, &var_58)
                int64_t rcx_11 = var_58
                
                if (rcx_11 != 0)
                    sub_140a74f90(rcx_11)
                
                int64_t* rcx_12 = var_48
                char r14_1 = *(arg1 + 0x25d)
                int32_t r15_1 = *(arg1 + 0x238)
                int64_t* rax_10 = (*(*rcx_12 + 0x90))(rcx_12)
                void*** rax_11 = sub_140a84c80(0, 0x30, 0)
                
                if (rax_11 != 0)
                    rax_11[1] = arg1
                    *rax_11 = &data_14323abd8
                    rax_11[2] = sub_141dab3c0
                    rax_11[3].d = r15_1
                    *(rax_11 + 0x1c) = r14_1
                    rax_11[4] = sub_140a387b0()
                    *rax_11 = &data_14323ac30
                
                if (&var_58 != rax_10)
                    if (rax_11 != 0)
                        (*rax_11)[8](rax_11, rax_10)
                    else if (rax_10[1].d != 0)
                        int64_t* rcx_14 = *rax_10
                        
                        if (rcx_14 != 0)
                            (*(*rcx_14 + 0x38))(rcx_14, 0)
                            int64_t rcx_15 = *rax_10
                            
                            if (rcx_15 != 0)
                                *rax_10 = sub_140a84c80(rcx_15, 0, 0)
                            
                            rax_10[1].d = 0
                
                if (rax_11 != 0)
                    (*rax_11)[7](rax_11, 0)
                    int64_t rax_17 = sub_140a84c80(rax_11, 0, 0)
                    
                    if (rax_17 != 0)
                        sub_140a74f90(rax_17)
                
                uint128_t zmm0_1 = var_48.o
                var_58.o = zmm0_1
                void* rax_18 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rax_18 != 0)
                    *(rax_18 + 8) += 1
                
                sub_141da6730(arg1, 6, &var_58, 0, 0)
                result = QueryPerformanceCounter(&performanceCount)
                int64_t rcx_21 = var_38
                *(arg1 + 0x240) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
                
                if (rcx_21 != 0)
                    result = sub_140a74f90(rcx_21)
                
                int64_t* var_40
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        result = (**var_40)(var_40)
                        int32_t temp1_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            return (*(*var_40 + 8))(var_40, 1)
else
    int64_t* rcx = *(arg1 + 0x2b0)
    
    if (rcx == 0)
        goto label_141da7200
    
    result = (*(*rcx + 0x28))(rcx)
    
    if (result.b == 0)
        goto label_141da7200

return result
