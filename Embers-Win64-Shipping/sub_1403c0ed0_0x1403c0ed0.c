// 函数: sub_1403c0ed0
// 地址: 0x1403c0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_b8[0x4] = arg5
float zmm7[0x4]
float var_d8[0x4] = zmm7
uint64_t rbx = zx.q(1 << (8 - arg3).b)
uint64_t rbp_1 = zx.q(not.d(0xffffffff << (0x10 - arg3.b)))
int32_t r12 = 1 << (0xf - arg3.b)
uint64_t var_f8 = rbx
uint64_t result_1 = png_calloc(arg1, rbx << 3)
*arg2 = result_1
uint128_t zmm8
zmm8.q = float.d(arg4)
zmm8.q = zmm8.q f* 1.0000000000000001e-05
int128_t zmm11
zmm11.q = float.d(rbp_1)
int32_t rax_1
rax_1.b = arg3 == 0
uint128_t zmm0 = zx.o(8 - arg3)
uint32_t temp0_1[0x4] = _mm_shuffle_epi32(_mm_shufflelo_epi16(zx.o(rax_1), 0xe0), 0)
int120_t var_118 = (data_1435ffba0 ^ temp0_1).15
rax_1.b = var_118.b
char var_119 = rax_1.b
rax_1.b = var_118:2.b
char var_11a = rax_1.b
rax_1.b = var_118:4.b
char var_11b = rax_1.b
rax_1.b = var_118:6.b
char var_11c = rax_1.b
rax_1.b = var_118:8.b
int32_t r14
r14.b = var_118:0xa.b
int64_t r13
r13.b = var_118:0xc.b
int64_t r15_1 = 0
rbx.b = var_118:0xe.b
int32_t zmm10[0x4] = zx.o(0)
zmm10[0] = zmm0.d
uint32_t zmm6[0x4] = _mm_srai_epi32(_mm_slli_epi32(_mm_unpacklo_epi16(temp0_1, zmm0.q), 0x1f), 0x1f)
uint32_t zmm12[0x4] =
    _mm_srai_epi32(_mm_slli_epi32(_mm_unpackhi_epi16(temp0_1, zmm0.q), 0x1f), 0x1f)
int32_t zmm13[0x4] = data_142fc95f0
uint64_t result

do
    int64_t rax_2
    uint32_t zmm4_1[0x4]
    rax_2, zmm4_1 = png_malloc(arg1, 0x200)
    result = result_1
    *(result + (r15_1 << 3)) = rax_2
    
    if (arg4 - 0x17318 u>= 0x2711)
        for (int64_t i = 0; i != 0x100; i += 1)
            zmm0.q = float.d(zx.q((i.d << (8 - arg3).b) + r15_1.d))
            zmm0.q = zmm0.q f/ zmm11.q
            result = zx.q(int.d(floor(pow(zmm0.q, zmm8.q) f* 0x40efffe000000000
                f+ 0x3fe0000000000000).q))
            *(rax_2 + (i << 1)) = result.w
    else
        zmm0 = _mm_shuffle_epi32(zx.o(r15_1.d), 0)
        int64_t i_1 = 0
        uint128_t zmm1 = data_142e11d00
        int32_t zmm2[0x4] = data_142fc9500
        
        do
            uint128_t zmm3 = _mm_add_epi32(_mm_sll_epi32(zmm1, zmm10), zmm0)
            
            if ((var_119 & 1) == 0)
                if ((var_11a & 1) != 0)
                    goto label_1403c11d6
                
                goto label_1403c1113
            
            result = zx.q(divu.dp.d(0:(zmm3.d * 0xffff + r12), rbp_1.d))
            zmm4_1 = zx.o(result.d)
            
            if ((var_11a & 1) == 0)
            label_1403c1113:
                
                if ((var_11b & 1) != 0)
                label_1403c111f:
                    result = zx.q(divu.dp.d(0:(_mm_shuffle_epi32(zmm3, 0x4e)[0] * 0xffff + r12), 
                        rbp_1.d))
                    zmm4_1 =
                        _mm_shuffle_ps(zmm4_1, _mm_shuffle_ps(zx.o(result.d), zmm4_1, 0x30), 0x84)
            else
            label_1403c11d6:
                result =
                    zx.q(divu.dp.d(0:(_mm_shuffle_epi32(zmm3, 0xe5)[0] * 0xffff + r12), rbp_1.d))
                zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(result.d), zmm4_1, 0), zmm4_1, 0xe2)
                
                if ((var_11b & 1) != 0)
                    goto label_1403c111f
            
            int32_t temp0_19[0x4] = _mm_sll_epi32(zmm2, zmm10)
            
            if ((var_11c & 1) != 0)
                result =
                    zx.q(divu.dp.d(0:(_mm_shuffle_epi32(zmm3, 0xe7)[0] i* 0xffff + r12), rbp_1.d))
                zmm4_1 = _mm_shuffle_ps(zmm4_1, _mm_shuffle_ps(zx.o(result.d), zmm4_1, 0x20), 0x24)
            
            int32_t temp0_24[0x4] = _mm_add_epi32(temp0_19, zmm0)
            
            if ((rax_1.b & 1) != 0)
                result = zx.q(divu.dp.d(0:(temp0_24[0] * 0xffff + r12), rbp_1.d))
                arg5[0] = zx.o(result.d)[0]
                
                if ((r14.b & 1) != 0)
                    goto label_1403c121b
            else if ((r14.b & 1) != 0)
            label_1403c121b:
                result = zx.q(divu.dp.d(0:(_mm_shuffle_epi32(temp0_24, 0xe5)[0] i* 0xffff + r12), 
                    rbp_1.d))
                arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(result.d), arg5, 0), arg5, 0xe2)
            
            if ((r13.b & 1) != 0)
                result = zx.q(divu.dp.d(0:(_mm_shuffle_epi32(temp0_24, 0x4e)[0] i* 0xffff + r12), 
                    rbp_1.d))
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(result.d), arg5, 0x30), 0x84)
                
                if ((rbx.b & 1) != 0)
                label_1403c1253:
                    result = zx.q(divu.dp.d(
                        0:(_mm_shuffle_epi32(temp0_24, 0xe7)[0] i* 0xffff + r12), rbp_1.d))
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zx.o(result.d), arg5, 0x20), 0x24)
            else if ((rbx.b & 1) != 0)
                goto label_1403c1253
            
            zmm3 = (zmm3 & zmm6) | (zmm6 & not.o(zmm4_1))
            zmm4_1 = zmm12 & not.o(arg5)
            int32_t temp0_40[0x4] =
                _mm_srai_epi32(_mm_slli_epi32((temp0_24 & zmm12) | zmm4_1, 0x10), 0x10)
            *(rax_2 + (i_1 << 1)) =
                _mm_packs_epi32(_mm_srai_epi32(_mm_slli_epi32(zmm3, 0x10), 0x10), temp0_40)
            i_1 += 8
            zmm1 = _mm_add_epi32(zmm1, zmm13)
            zmm2 = _mm_add_epi32(zmm2, zmm13)
        while (i_1 != 0x100)
    
    r15_1 += 1
while (r15_1 u< var_f8)

return result
