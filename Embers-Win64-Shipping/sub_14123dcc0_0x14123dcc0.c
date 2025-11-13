// 函数: sub_14123dcc0
// 地址: 0x14123dcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x20)
int32_t var_30 = *(arg1 + 0x614)
uint64_t var_38 = *(arg1 + 0x60c)
float var_48
(*(*rcx + 0x80))(rcx, &var_48, &var_38)
float zmm4 = var_48
int32_t var_40
float zmm6[0x4] = var_40
int32_t var_2c = 0x3f800000
float zmm2[0x4] = var_38.o
zmm2[0] = zmm4
int32_t var_1c = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
int32_t var_44
temp0[0] = var_44
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm6[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), *(arg1 + 0x3f0))
float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0x55), *(arg1 + 0x3d0))
uint128_t zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), *(arg1 + 0x3e0))
float temp0_10[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_2, temp0_2, 0), *(arg1 + 0x3c0))
float temp0_11[0x4] = _mm_add_ps(temp0_4, zmm0)
float temp0_12[0x4] = _mm_add_ps(temp0_6, temp0_10)
zmm2 = *(arg1 + 0x60c)
zmm2[0] = zmm2[0] - zmm4
zmm4 = *(arg1 + 0x614) - zmm6[0]
float temp0_13[0x4] = _mm_add_ps(temp0_11, temp0_12)
float zmm1[0x4] = *(arg1 + 0x610)
zmm1[0] = zmm1[0] f- var_44
int64_t result

if (not(_mm_shuffle_ps(temp0_13, temp0_13, 0xff)[0] <= 0f))
    int64_t* rcx_1 = *(arg2 + 0x20)
    float temp0_15[0x4]
    
    if (*(rcx_1 + 0x13c) != 0)
        int64_t rax_2 = *rcx_1
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm1[0] = zmm1[0] + zmm2[0]
        zmm1[0] = zmm1[0] + zmm4 * zmm4
        temp0_15 = _mm_sqrt_ss(0, zmm1[0])
        temp0_15[0] = temp0_15[0] + 200f
        (*(rax_2 + 0x18))(rcx_1)
        zmm0.d = 0f * 5f
    
    if (*(rcx_1 + 0x13c) == 0 || not(temp0_15[0] f>= zmm0.d))
        result.b = 1
        return result

result.b = 0
return result
