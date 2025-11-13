// 函数: sub_1427964b0
// 地址: 0x1427964b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm1[0x4] = *(arg1 + 0x1a0)
uint32_t zmm0[0x4] = arg2[1]
int96_t var_38 = zmm1[0].12
zmm1[0] = zmm1[0] f- zmm0[0]
uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
int96_t var_28 = zmm0[0].12
uint32_t result

if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
    result.b = 1
else
    zmm0 = var_38:4.d
    zmm0[0] = zmm0[0] f- var_28:4.d
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
        result.b = 1
    else
        zmm0 = var_38:8.d
        zmm0[0] = zmm0[0] f- var_28:8.d
        
        if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
            result.b = 1
        else
            zmm6 = *(arg1 + 0x190)
            float zmm4[0x4] = *arg2
            zmm1 = _mm_sub_ps(zmm6, zmm4)
            float temp0_4[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
            uint32_t temp0_7 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_4, 
                __andps_xmmxud_memxud(zmm1, data_143f88580), 1))
            uint32_t temp0_11
            
            if (temp0_7 != 0)
                temp0_11 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_4, 
                    __andps_xmmxud_memxud(_mm_add_ps(zmm4, zmm6), data_143f88580), 1))
            
            if (temp0_7 != 0 && temp0_11 != 0)
                result.b = 1
            else
                zmm1 = *(arg1 + 0x1b0)
                zmm0 = arg2[2]
                int96_t var_28_1 = zmm1[0].12
                zmm1[0] = zmm1[0] f- zmm0[0]
                int96_t var_38_1 = zmm0[0].12
                
                if (_mm_and_ps(zmm1, 0x7fffffff)[0] f> 9.99999994e-09f)
                    result.b = 1
                else
                    zmm0 = var_28_1:4.d
                    zmm0[0] = zmm0[0] f- var_38_1:4.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
                        result.b = 1
                    else
                        zmm0 = var_28_1:8.d
                        zmm0[0] = zmm0[0] f- var_38_1:8.d
                        
                        if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
                            result.b = 1
                        else
                            result.b = 0

*(arg1 + 0x1c0) |= result.b
*(arg1 + 0x190) = *arg2
*(arg1 + 0x1a0) = arg2[1]
*(arg1 + 0x1b0) = arg2[2]
return result
