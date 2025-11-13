// 函数: sub_140ad7d70
// 地址: 0x140ad7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = data_143dbb010
float zmm2[0x4] = *arg3
uint32_t zmm4[0x4] = data_143dbb020
float temp0[0x4] = _mm_mul_ps(zmm2, zmm2)
zmm3[0].q = zx.o(0) u>> 0x40
float var_78[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
float zmm1[0x4] = _mm_and_ps(zmm3, zmm4)
float var_68[0x4] = zx.o(0)
float temp0_4[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_7[0x4] = _mm_sub_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x39), temp0_4))

if (_mm_movemask_ps(_mm_cmpeq_ps(data_143dbb150, __andps_xmmxud_memxud(temp0_7, data_143dbb000), 1))
        == 0)
    float zmm8[0x4]
    float zmm9[0x4]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(__minps_xmmps_memps(arg1[2], arg3[2]), 
            data_143dbb140, 1)) == 0)
        TEB* gsbase
        
        if (data_143dbb3b0
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143dbb3b0)
            
            if (data_143dbb3b0 == 0xffffffff)
                data_143dbb3a0 = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
                _Init_thread_footer(&data_143dbb3b0)
            
            zmm4 = data_143dbb020
        
        float zmm7[0x4] = arg3[2]
        float temp0_14[0x4] = __subps_xmmps_memps(arg1[1], arg3[1])
        float temp0_15[0x4] = _mm_rcp_ps(zmm7)
        float zmm5[0x4] = _mm_and_ps(temp0_14, zmm4)
        float temp0_17[0x4] = _mm_mul_ps(temp0_15, temp0_15)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
        float temp0_19[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_21[0x4] = _mm_sub_ps(temp0_18, _mm_mul_ps(temp0_17, zmm7))
        float temp0_22[0x4] = _mm_mul_ps(temp0_21, temp0_21)
        float temp0_23[0x4] = _mm_add_ps(temp0_21, temp0_21)
        float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm7)
        float temp0_26[0x4] =
            __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm7, data_143dbb000), data_143dbb3a0, 2)
        float temp0_27[0x4] = _mm_sub_ps(temp0_23, temp0_24)
        float temp0_28[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        zmm7 = _mm_and_ps(temp0_26, zx.o(0) ^ temp0_27)
        uint32_t zmm6[0x4] = __mulps_xmmps_memps(*arg3, data_143dbb040)
        zmm7 = _mm_and_ps(zmm7 ^ temp0_27, zmm4)
        zmm9 = __mulps_xmmps_memps(zmm7, arg1[2])
        float temp0_33[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_34[0x4] = _mm_mul_ps(temp0_19, temp0_33)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_36[0x4] = _mm_mul_ps(temp0_28, temp0_35)
        zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_38[0x4] = _mm_sub_ps(temp0_34, temp0_36)
        float temp0_39[0x4] = _mm_add_ps(temp0_38, temp0_38)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc9), temp0_35)
        float temp0_44[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd2), temp0_33), temp0_41)
        float temp0_45[0x4] = _mm_mul_ps(zmm4, temp0_39)
        zmm2 = *arg1
        float temp0_46[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
        float temp0_47[0x4] = _mm_add_ps(temp0_45, zmm5)
        float temp0_48[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        float temp0_49[0x4] = _mm_add_ps(temp0_44, temp0_47)
        float temp0_51[0x4] = _mm_mul_ps(temp0_46, _mm_shuffle_ps(zmm6, zmm6, 0))
        float temp0_52[0x4] = _mm_mul_ps(zmm2, zmm4)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        float temp0_54[0x4] = __mulps_xmmps_memps(temp0_51, data_143dbb110)
        zmm8 = _mm_mul_ps(temp0_49, zmm7)
        float temp0_56[0x4] = _mm_add_ps(temp0_54, temp0_52)
        float temp0_58[0x4] = _mm_mul_ps(temp0_48, _mm_shuffle_ps(zmm6, zmm6, 0x55))
        float temp0_60[0x4] = _mm_mul_ps(temp0_53, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
        float temp0_61[0x4] = __mulps_xmmps_memps(temp0_58, data_143dbb100)
        float temp0_62[0x4] = __mulps_xmmps_memps(temp0_60, data_143dbb0f0)
        zmm3 = _mm_add_ps(_mm_add_ps(temp0_56, temp0_61), temp0_62)
    else
        sub_140ad8180(&var_78, arg1, arg3)
        zmm3 = var_78
        zmm9 = zmm1
        zmm8 = var_68
    
    *arg2 = zmm3
    arg2[1] = zmm8
    arg2[2] = zmm9
else
    zmm1 = data_143dbb0d0
    *arg2 = data_143dbb0c0
    float zmm0[0x4] = data_143dbb0e0
    arg2[1] = zmm1
    arg2[2] = zmm0

return arg2
