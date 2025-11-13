// 函数: sub_1400ed480
// 地址: 0x1400ed480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm12
int128_t var_18 = zmm12
float zmm11[0x4]
float var_28[0x4] = zmm11
float zmm10[0x4]
float var_38[0x4] = zmm10
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm6[0x4]
float var_78[0x4] = zmm6

if (arg4 s<= 0)
    return 

float temp0_1[0x4] = _mm_broadcastss_ps(arg3)
uint64_t i_1 = zx.q(arg4)
int64_t rax = 0x20
zmm11 = data_142e6da00
zmm8 = data_142d3f7c0
zmm9 = data_142d3f7d0
zmm10 = data_142d3f7b0
uint64_t i

do
    zmm6 = *(arg2 + rax - 0x10)
    float temp0_2[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_1, *(arg2 + rax - 0x20))
    float temp0_3[0x4] = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm6, temp0_1, *(arg1 + rax - 0x10))
    float temp0_5[0x4] =
        __vmulps_xmmdq_xmmdq_memdq(_mm_fmadd_ps(*(arg2 + rax), temp0_1, zmm11), *(arg1 + rax))
    float temp0_6[0x4] = _mm_permute_ps(temp0_2, 0xe7)
    
    if (not(0x3f800000 f<= (temp0_6 f* temp0_6[0])[0]))
        float zmm4[0x4] = *(arg1 + rax - 0x20)
        float temp0_12[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_2, 0xff), zmm4, 
            __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(temp0_2), 
                    _mm_permute_ps(zmm4, 0x1b)), 
                zmm8))
        float temp0_16[0x4] = _mm_fmadd_ps(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_2, 0x55), _mm_permute_pd(zmm4, 1)), 
            temp0_12, zmm9)
        *(arg1 + rax - 0x20) = _mm_fmadd_ps(
            __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_2, 0xaa), _mm_permute_ps(zmm4, 0xb1)), 
            temp0_16, zmm10)
    
    *(arg1 + rax - 0x10) = temp0_3
    *(arg1 + rax) = temp0_5
    rax += 0x30
    i = i_1
    i_1 -= 1
while (i != 1)
