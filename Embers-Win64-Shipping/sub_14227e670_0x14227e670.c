// 函数: sub_14227e670
// 地址: 0x14227e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
float zmm6[0x4]
result, zmm6 = sub_141efce60(arg1, arg2)

if ((*(arg1 + 0x8a) & 1) != 0)
    int64_t* rdi_1 = arg1[0x18]
    
    if (rdi_1 != 0)
        float zmm2_1[0x4] = data_142dd3f70
        float var_18_1[0x4] = zmm6
        zmm6 = *(arg1 + 0x1c0)
        float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_5[0x4] = _mm_mul_ps(temp0_2, temp0_4)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_8[0x4] = _mm_sub_ps(temp0_5, _mm_mul_ps(temp0_1, temp0_6))
        float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_8)
        float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd2)
        float temp0_11[0x4] = _mm_mul_ps(temp0_9, temp0_3)
        float zmm1[0x4] = arg1[0x3e].d
        float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_4)
        float temp0_13[0x4] = _mm_add_ps(temp0_11, zmm2_1)
        float temp0_17[0x4] = _mm_add_ps(
            _mm_sub_ps(temp0_12, _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xc9), temp0_6)), 
            temp0_13)
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
        temp0_18[0] = temp0_18[0] * zmm1[0]
        temp0_19[0] = temp0_19[0] * zmm1[0]
        temp0_17[0] = temp0_17[0] * zmm1[0]
        float var_44_1 = temp0_19[0]
        float var_40_1 = temp0_18[0]
        float var_48_1 = temp0_17[0]
        void* rax = sub_142577430()
        void* rdx_1 = rdi_1[2]
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                zmm2_1 = *(arg1 + 0x1d0)
                float var_20_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
                int64_t rax_3 = *rdi_1
                int64_t var_38 =
                    (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
                int64_t var_28 = var_48_1.q
                return (*(rax_3 + 0x5d0))(rdi_1, &var_28, &var_38, 0, var_48_1, var_40_1, var_38, 
                    var_20_1, var_28, var_40_1, var_18_1)

return result
