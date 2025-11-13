// 函数: sub_141c46b90
// 地址: 0x141c46b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = data_143204dd0
float zmm7[0x4] = *arg1
float temp0[0x4] = __maxps_xmmps_memps(zmm7, data_143204df0)
*arg1 = temp0
float zmm2[0x4] = __andps_xmmxud_memxud(temp0, data_143204e00)
*arg1 = zmm2
zmm2 = __orps_xmmxud_memxud(zmm2, data_143204de0)
*arg1 = zmm2
float temp0_3[0x4] = __cmpps_xmmps_memps_immb(zmm2, data_143204e20, 1)
float zmm0[0x4] = __psubd_xmmdq_memdq(_mm_srli_epi32(temp0, 0x17), data_143204e10)
float temp0_6[0x4] = _mm_sub_ps(zmm2, zmm3)
float zmm5[0x4] = _mm_and_ps(zmm2, temp0_3)
float temp0_8[0x4] = _mm_cvtepi32_ps(zmm0)
float temp0_9[0x4] = _mm_add_ps(zmm5, temp0_6)
zmm0 = _mm_and_ps(temp0_3, zmm3)
float temp0_11[0x4] = _mm_add_ps(temp0_8, zmm3)
*arg1 = temp0_9
float temp0_12[0x4] = __mulps_xmmps_memps(temp0_9, data_143204e30)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, zmm0)
zmm0 = data_143204ec0
float zmm1[0x4] = data_143204de0
zmm3 = data_143204ed0
float temp0_14[0x4] = __addps_xmmps_memps(temp0_12, data_143204e40)
float temp0_15[0x4] = _mm_mul_ps(zmm0, temp0_13)
float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_9)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_9)
float temp0_18[0x4] = _mm_mul_ps(zmm3, temp0_13)
float temp0_19[0x4] = __addps_xmmps_memps(temp0_17, data_143204e50)
float temp0_20[0x4] = _mm_mul_ps(zmm1, temp0_16)
float temp0_33[0x4] = _mm_mul_ps(
    __addps_xmmps_memps(
        _mm_mul_ps(
            __addps_xmmps_memps(
                _mm_mul_ps(
                    __addps_xmmps_memps(
                        _mm_mul_ps(
                            __addps_xmmps_memps(
                                _mm_mul_ps(
                                    __addps_xmmps_memps(
                                        _mm_mul_ps(
                                            __addps_xmmps_memps(_mm_mul_ps(temp0_19, temp0_9), 
                                                data_143204e60), 
                                            temp0_9), 
                                        data_143204e70), 
                                    temp0_9), 
                                data_143204e80), 
                            temp0_9), 
                        data_143204e90), 
                    temp0_9), 
                data_143204ea0), 
            temp0_9), 
        data_143204eb0), 
    temp0_9)
float temp0_36[0x4] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(temp0_33, temp0_16), temp0_15), temp0_20)
float temp0_37[0x4] = _mm_cmpeq_ps(zmm7, zx.o(0), 2)
float result[0x4] = _mm_or_ps(_mm_add_ps(_mm_add_ps(temp0_36, temp0_9), temp0_18), temp0_37)
*arg1 = result
return result
