// 函数: sub_1417a7c60
// 地址: 0x1417a7c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg2 + 0x2d8)
int64_t r8 = sx.q(arg4)
float zmm3[0x4] = *(result + (r8 << 2))

if (not(zmm3[0] == 0f))
    result = *(arg2 + 0x368)
    
    if (*(r8 + result) == 0)
        result = *(arg2 + 0x398)
        
        if (*(r8 + result) != 1)
            int64_t rax = *(arg2 + 0x260)
            int64_t rcx = *(arg2 + 0x1b8)
            int64_t rbx_1 = r8 * 3
            zmm3[0] = zmm3[0] f* *(rax + (rbx_1 << 2))
            float zmm1[0x4] = *(rax + (rbx_1 << 2) + 4)
            float zmm2[0x4] = *(rax + (rbx_1 << 2) + 8)
            zmm3[0] = zmm3[0] f+ *(rcx + (rbx_1 << 2))
            zmm1[0] = zmm1[0] * zmm3[0]
            zmm2[0] = zmm2[0] * zmm3[0]
            zmm1[0] = zmm1[0] f+ *(rcx + (rbx_1 << 2) + 4)
            *(rcx + (rbx_1 << 2)) = zmm3[0]
            zmm2[0] = zmm2[0] f+ *(rcx + (rbx_1 << 2) + 8)
            *(rcx + (rbx_1 << 2) + 4) = zmm1[0]
            *(rcx + (rbx_1 << 2) + 8) = zmm2[0]
            int64_t rcx_2 = r8 * 2
            int128_t* r8_2 = (r8 << 6) + *(arg2 + 0x2a8)
            zmm2 = *(*(arg2 + 0x68) + (rcx_2 << 3))
            int64_t rax_2 = *(arg2 + 0x218)
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = *(rax_2 + (rcx_2 << 3))
            float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_1)
            float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
            float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
            float temp0_7[0x4] = __mulps_xmmps_memps(temp0_3, data_143ef7f10)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
            float temp0_9[0x4] = _mm_add_ps(temp0_7, temp0_6)
            float temp0_11[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(zmm2, zmm2, 0x55))
            float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
            float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143ef7f00)
            float temp0_15[0x4] = __mulps_xmmps_memps(temp0_13, data_143ef7ef0)
            float var_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_9, temp0_14), temp0_15)
            float var_68
            int64_t zmm7_1 = sub_1417349b0(&var_68, &var_78, r8_2)
            int64_t rax_3 = *(arg2 + 0x278)
            int64_t zmm4_1 = *(rax_3 + (rbx_1 << 2) + 4)
            float zmm6_1 = *(rax_3 + (rbx_1 << 2))
            float zmm5_1 = *(rax_3 + (rbx_1 << 2) + 8)
            int64_t rax_4 = *(arg2 + 0x1d0)
            int32_t var_64
            int64_t zmm0_1
            zmm0_1.d = zmm4_1.d f* var_64
            float zmm2_1 = zmm6_1 * var_68 f+ zmm0_1.d
            int32_t var_54
            zmm0_1.d = zmm4_1.d f* var_54
            int32_t var_44
            zmm4_1.d = zmm4_1.d f* var_44
            float var_60
            *(rax_4 + (rbx_1 << 2)) = zmm2_1 + zmm5_1 * var_60 f+ *(rax_4 + (rbx_1 << 2))
            float var_58
            float var_50
            *(rax_4 + (rbx_1 << 2) + 4) =
                zmm6_1 * var_58 f+ zmm0_1.d + zmm5_1 * var_50 f+ *(rax_4 + (rbx_1 << 2) + 4)
            float var_48
            float var_40
            zmm6_1 = zmm6_1 * var_48 f+ zmm4_1.d + zmm5_1 * var_40 f+ *(rax_4 + (rbx_1 << 2) + 8)
            var_78[2] = 0
            int64_t temp0_18 = _mm_unpacklo_ps(zx.o(0), zmm7_1)
            *(rax_4 + (rbx_1 << 2) + 8) = zmm6_1
            int64_t rcx_4 = *(arg2 + 0x260)
            float rax_5 = var_78[2]
            var_78[2] = 0
            *(rcx_4 + (rbx_1 << 2)) = temp0_18
            *(rcx_4 + (rbx_1 << 2) + 8) = rax_5
            int64_t rcx_5 = *(arg2 + 0x278)
            result = zx.q(var_78[2])
            *(rcx_5 + (rbx_1 << 2)) = _mm_unpacklo_ps(zx.o(0), zmm7_1)
            *(rcx_5 + (rbx_1 << 2) + 8) = result.d

return result
