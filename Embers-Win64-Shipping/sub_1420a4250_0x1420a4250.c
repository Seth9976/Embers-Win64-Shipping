// 函数: sub_1420a4250
// 地址: 0x1420a4250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
float zmm3[0x4] = *arg4
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
int64_t r14 = sx.q(arg3)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_6)
float zmm1[0x4] = arg4[2]
float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float zmm4[0x4] = data_143f47560
float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_5)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_8)
float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float zmm2[0x4] =
    __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm4, temp0_10), zmm1), data_143f47570)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, zmm2, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, temp0_15, 0x12), zmm2, 0xe8)
float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0x10), temp0_22, 0x88)
float zmm0[0x4] = arg4[1]
*arg2 = temp0_21
arg2[1] = temp0_26
arg2[2] = temp0_24
zmm4[0].q = zmm0 u>> 0x40
arg2[3] = _mm_shuffle_ps(zmm0, zmm4, 0xc4)

if ((arg1[0x11].b & 4) != 0)
    zmm0 = arg4[2]
    int96_t var_38_1 = zmm0[0].12
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] > 9.99999975e-05f)
    label_1420a43be:
        int32_t* rax_2 = j_sub_140a82f30(0x130)
        int32_t* rsi_3
        
        if (rax_2 == 0)
            rsi_3 = nullptr
        else
            rsi_3 = sub_14220ad50(rax_2)
        
        int32_t rbp_1 = arg1[0xa4].d
        arg1[0xa4].d = rbp_1 + 1
        
        if (rbp_1 + 1 s> *(arg1 + 0x524))
            sub_1405a4d70(&arg1[0xa3])
        
        int64_t rdx_3 = arg1[0xa3] + (r14 << 3)
        memmove(rdx_3 + 8, rdx_3, (rbp_1 - r14.d) << 3)
        *(arg1[0xa3] + (r14 << 3)) = rsi_3
        return sub_142096f00(arg1, r14.d, rsi_3)
    
    if (_mm_and_ps(var_38_1:4.d, 0x7fffffff)[0] > 9.99999975e-05f)
        goto label_1420a43be
    
    if (_mm_and_ps(var_38_1:8.d, 0x7fffffff)[0] > 9.99999975e-05f)
        goto label_1420a43be
    
    int32_t rsi_1 = arg1[0xa4].d
    arg1[0xa4].d = rsi_1 + 1
    
    if (rsi_1 + 1 s> *(arg1 + 0x524))
        sub_1405a4d70(&arg1[0xa3])
    
    int64_t rdx_1 = arg1[0xa3] + (r14 << 3)
    memmove(rdx_1 + 8, rdx_1, (rsi_1 - r14.d) << 3)
    result = arg1[0xa3]
    result[r14] = 0

return result
