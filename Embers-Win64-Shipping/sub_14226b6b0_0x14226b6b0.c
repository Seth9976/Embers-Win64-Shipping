// 函数: sub_14226b6b0
// 地址: 0x14226b6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_28[0x4] = arg5
float zmm9[0x4]
float var_58[0x4] = zmm9
float var_d8
float var_d4
float var_d0
float var_c8
float var_c4
float var_c0
int64_t var_b8
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]

if ((arg1[0xa2].b & 1) == 0)
    (*(*arg1 + 0x6f8))(arg1, &var_d8, &var_c8)
else
    void* rax = sub_140d3c6e0(arg1 + 0x514)
    
    if (rax == 0)
        var_d8.q = *(arg1 + 0x524)
        var_d0 = *(arg1 + 0x52c)
        var_c8.q = arg1[0xa6]
        var_c0 = arg1[0xa7].d
    else
        zmm1 = *(rax + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rax + 0x180), zmm1, 4))
        float var_a8[0x4] = zmm1
        
        if (temp0_2 != 0)
            *(rax + 0x180) = zmm1
            int32_t* rax_1 = sub_140adf5d0(&var_a8, &var_b8)
            *(rax + 0x190) = *rax_1
            *(rax + 0x198) = rax_1[2]
        
        zmm0 = zx.o(*(rax + 0x190))
        int32_t rax_3 = *(rax + 0x198)
        zmm1 = zmm0
        var_b8 = zmm0.q
        zmm2 = zmm0
        zmm0 = rax_3
        zmm2[0] = zmm2[0] f+ arg1[0xa6].d
        zmm0[0] = zmm0[0] f+ arg1[0xa7].d
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        temp0_3[0] = temp0_3[0] f+ *(arg1 + 0x534)
        var_c8 = zmm2[0]
        var_c0 = zmm0[0]
        var_c4 = temp0_3[0]
        *(rax + 0x1d0)
        int32_t* rax_4
        rax_4, arg5 = sub_140adf300(&var_c8, &var_b8, arg1 + 0x524)
        float temp0_4[0x4] = _mm_shuffle_ps(arg5, arg5, 0x55)
        float temp0_5[0x4] = _mm_shuffle_ps(arg5, arg5, 0xaa)
        temp0_5[0] = temp0_5[0] f+ rax_4[2]
        arg5[0] = arg5[0] f+ *rax_4
        temp0_4[0] = temp0_4[0] f+ rax_4[1]
        var_d0 = temp0_5[0]
        var_d8 = arg5[0]
        var_d4 = temp0_4[0]

float zmm4[0x4] = data_143f52640
float temp0_9[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(var_c8, var_c0[0].q), _mm_unpacklo_ps(var_c4, 0)[0].q), 
    data_143f52690)
float temp0_14[0x4] = _mm_sub_ps(temp0_9, 
    __mulps_xmmps_memps(
        _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_9, data_143f52680))), 
        data_143f52670))
zmm1 = data_142dc1870
zmm0 = __andps_xmmxud_memxud(temp0_14, data_143f525c0)
zmm2 = __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_14, data_143f52660), data_143f52650)
float temp0_18[0x4] = _mm_cmpeq_ps(zmm4, zmm0, 1)
zmm0 = data_142dc1850
float temp0_19[0x4] = _mm_sub_ps(zmm2, temp0_14)
float temp0_20[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float temp0_21[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm2 = _mm_and_ps(temp0_19 ^ temp0_14, temp0_18) ^ temp0_14
float temp0_23[0x4] = _mm_mul_ps(zmm2, zmm2)
float temp0_25[0x4] = _mm_add_ps(_mm_mul_ps(temp0_20, temp0_23), temp0_21)
float temp0_26[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_28[0x4] = _mm_add_ps(_mm_mul_ps(temp0_25, temp0_23), temp0_26)
float temp0_29[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_31[0x4] = _mm_add_ps(_mm_mul_ps(temp0_28, temp0_23), temp0_29)
float temp0_32[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_33[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_35[0x4] = _mm_add_ps(_mm_mul_ps(temp0_31, temp0_23), temp0_32)
zmm0 = data_142dc1860
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), temp0_23)
float temp0_38[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_39[0x4] = _mm_mul_ps(temp0_35, temp0_23)
float temp0_40[0x4] = _mm_add_ps(temp0_37, temp0_38)
float temp0_41[0x4] = _mm_add_ps(temp0_39, temp0_33)
zmm1 = data_142dc1880
float temp0_42[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_43[0x4] = _mm_mul_ps(temp0_40, temp0_23)
float temp0_44[0x4] = _mm_mul_ps(temp0_41, zmm2)
float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_42)
float temp0_46[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_48[0x4] = _mm_add_ps(_mm_mul_ps(temp0_45, temp0_23), temp0_46)
float temp0_49[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_50[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_56[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_48, temp0_23), temp0_49), temp0_23), 
        temp0_50), 
    _mm_and_ps(data_143f52300 ^ data_143f522c0, temp0_18) ^ data_143f522c0)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
temp0_57[0] = temp0_57[0] * temp0_56[0]
float var_98 = temp0_57[0]
float var_90 = temp0_44[0]
int32_t var_8c = 0
float temp0_58[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
temp0_58[0] = temp0_58[0] * temp0_44[0]
int32_t var_7c = 0
int32_t var_6c = 0
temp0_59[0] = temp0_59[0] * temp0_44[0]
float temp0_60[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
temp0_56[0] = temp0_56[0] * temp0_60[0]
temp0_59[0] = temp0_59[0] * temp0_60[0]
float var_94 = temp0_56[0]
temp0_57[0] = temp0_57[0] * temp0_58[0]
temp0_57[0] = temp0_57[0] - temp0_59[0]
temp0_59[0] = temp0_59[0] * temp0_57[0]
temp0_59[0] = temp0_59[0] * temp0_56[0]
float var_88 = temp0_57[0]
temp0_60[0] = temp0_60[0] * temp0_58[0]
float var_70 = temp0_59[0]
temp0_60[0] = temp0_60[0] + temp0_59[0]
temp0_58[0] = temp0_58[0] * temp0_60[0]
temp0_60[0] = temp0_60[0] * temp0_59[0]
float var_84 = temp0_60[0]
temp0_56[0] = temp0_56[0] * temp0_58[0]
float var_80 = (temp0_56 ^ data_142d3f780)[0]
temp0_57[0] = temp0_57[0] * temp0_59[0]
temp0_57[0] = temp0_57[0] * temp0_58[0]
temp0_57[0] = temp0_57[0] + temp0_58[0]
float var_68 = var_d8[0]
temp0_57[0] = temp0_57[0] - temp0_60[0]
float var_60 = var_d0[0]
float var_78 = (temp0_57 ^ data_142d3f780)[0]
float var_64 = var_d4[0]
*arg2 = var_d8.q
int32_t var_5c = 0x3f800000
float var_74 = temp0_57[0]
arg2[1].d = var_d0
uint64_t* rax_9 = sub_140a04880(&var_98, &var_b8, 1)
*arg3 = *rax_9
arg3[1].d = rax_9[1].d
uint64_t* rax_11
int512_t zmm6
int512_t zmm7
int512_t zmm8
rax_11, zmm6, zmm7, zmm8 = sub_140a04880(&var_98, &var_b8, 2)
zmm6.o = var_28
zmm7.o = arg6
*arg4 = *rax_11
int32_t result = rax_11[1].d
arg4[1].d = result
zmm8.o = arg7
return result
