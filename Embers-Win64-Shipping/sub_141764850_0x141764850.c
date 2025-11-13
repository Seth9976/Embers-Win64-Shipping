// 函数: sub_141764850
// 地址: 0x141764850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x2d8)
int64_t r8 = sx.q(arg4)
float zmm7[0x4] = arg3
float zmm3[0x4] = *(result + (r8 << 2))

if (not(zmm3[0] == 0f))
    result = *(arg2 + 0x368)
    
    if (*(r8 + result) == 0)
        result = *(arg2 + 0x398)
        
        if (*(r8 + result) != 1)
            int64_t rax = *(arg2 + 0x230)
            int64_t rcx = *(arg2 + 0x1b8)
            int64_t rbx_1 = r8 * 3
            zmm3[0] = zmm3[0] f* *(rax + (rbx_1 << 2))
            float zmm1[0x4] = *(rax + (rbx_1 << 2) + 4)
            arg3 = *(rax + (rbx_1 << 2) + 8)
            zmm1[0] = zmm1[0] * zmm3[0]
            arg3[0] = arg3[0] * zmm3[0]
            zmm3[0] = zmm3[0] * zmm7[0]
            zmm1[0] = zmm1[0] * zmm7[0]
            zmm3[0] = zmm3[0] f+ *(rcx + (rbx_1 << 2))
            arg3[0] = arg3[0] * zmm7[0]
            zmm1[0] = zmm1[0] f+ *(rcx + (rbx_1 << 2) + 4)
            arg3[0] = arg3[0] f+ *(rcx + (rbx_1 << 2) + 8)
            *(rcx + (rbx_1 << 2)) = zmm3[0]
            *(rcx + (rbx_1 << 2) + 4) = zmm1[0]
            *(rcx + (rbx_1 << 2) + 8) = arg3[0]
            int64_t rcx_2 = r8 * 2
            int128_t* r8_2 = (r8 << 6) + *(arg2 + 0x2a8)
            arg3 = *(*(arg2 + 0x68) + (rcx_2 << 3))
            int64_t rax_2 = *(arg2 + 0x218)
            float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
            zmm3 = *(rax_2 + (rcx_2 << 3))
            float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_1)
            float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
            float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xff), zmm3)
            float temp0_7[0x4] = __mulps_xmmps_memps(temp0_3, data_143ef7c70)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
            float temp0_9[0x4] = _mm_add_ps(temp0_7, temp0_6)
            float temp0_11[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(arg3, arg3, 0x55))
            float temp0_13[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(arg3, arg3, 0xaa))
            float temp0_14[0x4] = __mulps_xmmps_memps(temp0_11, data_143ef7c60)
            float temp0_15[0x4] = __mulps_xmmps_memps(temp0_13, data_143ef7c50)
            float var_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_9, temp0_14), temp0_15)
            float var_68
            float zmm7_1 = sub_1417349b0(&var_68, &var_78, r8_2)
            int64_t rax_3 = *(arg2 + 0x248)
            float zmm4_1 = *(rax_3 + (rbx_1 << 2) + 4)
            float zmm6_1 = *(rax_3 + (rbx_1 << 2))
            float zmm5_1 = *(rax_3 + (rbx_1 << 2) + 8)
            result = *(arg2 + 0x1d0)
            float var_64
            float var_60
            *(result + (rbx_1 << 2)) = (zmm6_1 * var_68 + zmm4_1 * var_64 + zmm5_1 * var_60)
                * zmm7_1 f+ *(result + (rbx_1 << 2))
            float var_58
            float var_54
            float var_50
            *(result + (rbx_1 << 2) + 4) = (zmm6_1 * var_58 + zmm4_1 * var_54 + zmm5_1 * var_50)
                * zmm7_1 f+ *(result + (rbx_1 << 2) + 4)
            float var_48
            float var_44
            float var_40
            *(result + (rbx_1 << 2) + 8) = (zmm6_1 * var_48 + zmm4_1 * var_44 + zmm5_1 * var_40)
                * zmm7_1 f+ *(result + (rbx_1 << 2) + 8)

return result
