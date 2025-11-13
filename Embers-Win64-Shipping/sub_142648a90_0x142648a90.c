// 函数: sub_142648a90
// 地址: 0x142648a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg1[1].d
int32_t rdx = (arg4 * 3).d
int128_t* rsi = arg3

if (rdx s> 0)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    uint64_t i_1 = zx.q((rdx - 1) u/ 3 + 1)
    uint64_t i
    
    do
        int32_t var_3c[0x5]
        int32_t* rax_2 = sub_142690d00(&var_3c, rsi)
        float zmm5[0x4] = *arg7
        int64_t rbp_1 = sx.q(arg1[1].d)
        float zmm3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        int32_t rax_3 = (rbp_1 + 1).d
        zmm6 = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_2, rax_2[2][0].q), 
                _mm_unpacklo_ps(rax_2[1], zx.o(0)[0].q)[0].q), 
            arg7[2])
        float zmm1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float zmm0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), zmm1)
        float zmm4[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm3), zmm0_1)
        zmm4 = _mm_add_ps(zmm4, zmm4)
        float zmm2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm3)
        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm1)
        zmm5 = _mm_mul_ps(zmm5, zmm4)
        zmm2 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm2, zmm0_1), _mm_add_ps(zmm5, zmm6)), 
            arg7[1])
        arg1[1].d = rax_3
        float var_48_1 = zmm2[0]
        zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float var_40_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
        float var_44_1 = zmm0_1[0]
        
        if (rax_3 s> *(arg1 + 0xc))
            sub_140638a00(arg1)
        
        int64_t rcx_2 = *arg1
        int64_t rdx_7 = rbp_1 * 3
        rsi += 0xc
        *(rcx_2 + (rdx_7 << 2)) = var_48_1.q
        *(rcx_2 + (rdx_7 << 2) + 8) = var_40_1
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rsi_1 = arg2[1].d
uint32_t rbx_1 = arg6 * 3
uint64_t result = zx.q(rsi_1 + rbx_1)
arg2[1].d = result.d

if (result.d s> *(arg2 + 0xc))
    result = sub_1405a4cf0(arg2)

int32_t r8 = 0

if (rbx_1 != 0)
    int32_t* r9 = arg5
    
    do
        int32_t rdx_9 = *r9
        int64_t rcx_4 = sx.q(r8 + rsi_1)
        r9 = &r9[1]
        result = *arg2
        r8 += 1
        *(result + (rcx_4 << 2)) = rdx_9 + r15
    while (r8 u< rbx_1)

return result
