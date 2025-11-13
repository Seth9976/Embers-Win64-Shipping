// 函数: sub_1421fa680
// 地址: 0x1421fa680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x38))()
void* r8 = arg2
void* result_1 = result
int128_t* r12 = r8 + 0x80

if (*(result + 0xb0) == 0)
    r12 = &data_14399f6e0

float zmm3[0x4] = data_142d4cc00
int32_t i = 0
float zmm7[0x4] = *(arg4 + 0x380)
float zmm6[0x4] = *(arg4 + 0x390)
float zmm5[0x4] = *(arg4 + 0x3a0)
float zmm4[0x4] = *(arg4 + 0x3b0)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_3[0x4] = _mm_mul_ps(temp0, zmm4)
int64_t var_158 = 0
float temp0_4[0x4] = _mm_mul_ps(temp0_2, zmm5)
int32_t var_150 = 0
float temp0_5[0x4] = _mm_mul_ps(temp0_1, zmm6)
int64_t var_138 = 0
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_7[0x4] = _mm_add_ps(temp0_3, temp0_4)
int32_t var_130 = 0
float temp0_9[0x4] = _mm_add_ps(temp0_5, _mm_mul_ps(temp0_6, zmm7))
zmm3 = data_142d4cc20
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm5)
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm6)
var_158.o = temp0_12
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm4)
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm7)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_11)
float var_e8[0x4] = data_142f2cb30
var_138.o = _mm_add_ps(temp0_19, _mm_add_ps(temp0_14, temp0_18))

if (*(result + 0xc) s> 0)
    int64_t r14_1 = 0
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm12[0x4] = var_150
    float zmm13[0x4] = var_158:4.d
    float zmm14[0x4] = var_158.d
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int32_t var_ec_1 = 0x3f800000
    
    do
        int64_t rbx_1 = *arg3
        int64_t var_d8_1 = 0
        int32_t var_d0_1 = 0
        void* rax_5 =
            sx.q(zx.d(*(*(result_1 + 0x30) + r14_1)) * *(result_1 + 0x10)) + *(result_1 + 0x28)
        float zmm1[0x4] = *(rax_5 + 0x14)
        float var_f8[0x4]
        var_f8[0] = (*(rax_5 + 0x10))[0]
        float zmm2[0x4] = *(rax_5 + 0x18)
        float temp0_22[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
        temp0_22[0] = zmm1[0]
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
        temp0_23[0] = zmm2[0]
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc9)
        var_f8 = temp0_24
        float temp0_26[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0xff), r12[3])
        float temp0_28[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0x55), r12[1])
        float temp0_30[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0xaa), r12[2])
        float temp0_32[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_24, temp0_24, 0), *r12)
        float temp0_35[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_26, temp0_30), _mm_add_ps(temp0_28, temp0_32))
        float var_148 = temp0_35[0]
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
        float var_144_1 = temp0_36[0]
        float var_140_1 = temp0_37[0]
        int32_t var_170
        int32_t var_168
        char var_160
        
        if (arg5 == 0)
            result = (*(rbx_1 + 0x38))(arg3, &var_148, &var_e8, 0x40000000, 
                sub_14082c3b0(r8, arg4), var_170, var_168, var_160)
        else
            float zmm0[0x4] = *(rax_5 + 0x50)
            zmm0[0] = zmm0[0] f* *(result_1 + 0x38)
            zmm8 = *(result_1 + 0x3c)
            zmm6 = *(rax_5 + 0x54)
            zmm0[0] = zmm0[0] * 0.5f
            zmm13[0] = zmm13[0] * zmm0[0]
            zmm14[0] = zmm14[0] * zmm0[0]
            zmm12[0] = zmm12[0] * zmm0[0]
            temp0_36[0] = temp0_36[0] + zmm13[0]
            temp0_35[0] = temp0_35[0] + zmm14[0]
            temp0_35[0] = temp0_35[0] - zmm14[0]
            temp0_36[0] = temp0_36[0] - zmm13[0]
            float var_124_1 = temp0_36[0]
            float var_128 = temp0_35[0]
            temp0_37[0] = temp0_37[0] + zmm12[0]
            float var_11c = temp0_35[0]
            temp0_37[0] = temp0_37[0] - zmm12[0]
            float var_118_1 = temp0_36[0]
            float var_120_1 = temp0_37[0]
            float var_114_1 = temp0_37[0]
            (*(rbx_1 + 0x30))(arg3, &var_11c, &var_128, &var_e8, sub_14082c3b0(r8, arg4), 0, 0, 0)
            float zmm4_1[0x4] = var_148
            zmm3 = var_144_1
            zmm2 = var_140_1
            zmm7 = var_138.d
            int64_t rbx_2 = *arg3
            zmm8.d = zmm8.d f* zmm6[0]
            zmm6 = var_138:4.d
            zmm8.d = zmm8.d f* 0.5f
            float zmm5_1 = var_130.d f* zmm8.d
            zmm7[0] = zmm7[0] f* zmm8.d
            zmm6[0] = zmm6[0] f* zmm8.d
            zmm4_1[0] = zmm4_1[0] + zmm7[0]
            zmm4_1[0] = zmm4_1[0] - zmm7[0]
            zmm3[0] = zmm3[0] + zmm6[0]
            zmm3[0] = zmm3[0] - zmm6[0]
            float var_110 = zmm4_1[0]
            zmm2[0] = zmm2[0] + zmm5_1
            var_158.d = zmm4_1[0]
            zmm2[0] = zmm2[0] - zmm5_1
            float var_10c_1 = zmm3[0]
            var_158:4.d = zmm3[0]
            float var_108_1 = zmm2[0]
            var_160 = 0
            var_168 = 0
            var_170 = 0
            result = (*(rbx_2 + 0x30))(arg3, &var_158, &var_110, &var_e8, 
                sub_14082c3b0(arg2, arg4), 0, 0, 0, var_158, zmm2[0])
        r8 = arg2
        i += 1
        r14_1 += 2
    while (i s< *(result_1 + 0xc))

return result
