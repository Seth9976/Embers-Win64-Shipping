// 函数: sub_141c3eb70
// 地址: 0x141c3eb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t rdi = arg2[1].d
int32_t rbp = 0
float* r15 = *arg2
int64_t r12 = *(arg1 + 8)
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdi))
int32_t arg_8 = zmm0.d
uint128_t zmm1 = _mm_shuffle_ps(zmm0, zmm0, 0)
uint128_t var_d8 = zmm1

if (rdi s> 0)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    result = data_143ccb970
    uint128_t zmm11
    uint128_t var_88_1 = zmm11
    int32_t zmm12[0x4]
    int32_t var_98_1[0x4] = zmm12
    int128_t zmm13 = 0x40490fdb
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_c8_1[0x4] = zmm15
    
    do
        int32_t i = 0
        int64_t rsi_1 = 0
        zmm11 = _mm_shuffle_epi32(zx.o(rbp), 0)
        zmm6 = zx.o(0)
        
        if (rdi s> 0)
            if (rdi u>= 4 && result s>= 2)
                zmm12 = data_142e11d00
                int32_t rax_1 = rdi & 0x80000003
                
                if (rax_1 s< 0)
                    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1
                
                zmm14 = data_142d3f6d0
                zmm15 = data_142d3f6c0
                float temp0_3[0x4] = _mm_rcp_ps(zmm1)
                zmm0 = _mm_mul_ps(temp0_3, temp0_3)
                zmm9 = _mm_sub_ps(_mm_add_ps(temp0_3, temp0_3), _mm_mul_ps(zmm0, zmm1))
                float temp0_18[0x4]
                
                do
                    *(r12 + (rsi_1 << 2))
                    uint32_t zmm0_1[0x4]
                    float zmm6_1[0x4]
                    uint32_t zmm8_1[0x4]
                    zmm0_1, zmm6_1, zmm8_1 = sub_142c94100(_mm_mul_ps(
                        _mm_mul_ps(
                            _mm_mul_ps(
                                _mm_cvtepi32_ps(_mm_mullo_epi32(
                                    _mm_add_epi32(_mm_shuffle_epi32(zx.o(i), 0), zmm12), zmm11)), 
                                zmm14), 
                            zmm15), 
                        zmm9))
                    _mm_mul_ps(zmm0_1, zmm6_1)
                    zmm0, zmm6, zmm7, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                        sub_142c93930(zmm8_1)
                    i += 4
                    rsi_1 += 4
                    temp0_18 = _mm_add_ps(zmm10, _mm_sub_ps(zmm7, _mm_mul_ps(zmm0, zmm6)))
                while (i s< rdi - rax_1)
                
                temp0_18[0].q = temp0_18 u>> 0x40
                zmm6 = _mm_add_ps(temp0_18, temp0_18)
                zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xf5)
                zmm6[0] = zmm6[0] f+ zmm0.d
                zmm0 = arg_8
            
            if (i s< rdi)
                zmm7 = 0x3f800000
                int32_t* rsi_2 = r12 + (rsi_1 << 2)
                int32_t rbx_4 = i * rbp
                uint64_t i_2 = zx.q(rdi - i)
                zmm7[0] = 1f f/ zmm0.d
                uint64_t i_1
                
                do
                    zmm1.d = float.s(rbx_4)
                    zmm1.d = zmm1.d f* zmm13.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f* zmm7[0]
                    zmm0, zmm6, zmm7, zmm13 = __libm_sse2_sincosf_(zmm1)
                    rbx_4 += rbp
                    uint128_t zmm2_1
                    zmm2_1.d = _mm_shuffle_ps(zmm0, zmm0, 1).d f* *rsi_2
                    zmm0.d = zmm0.d f* *rsi_2
                    rsi_2 = &rsi_2[1]
                    zmm2_1.d = zmm2_1.d f- zmm0.d
                    zmm6[0] = zmm6[0] f+ zmm2_1.d
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
        
        zmm1 = var_d8
        rbp += 1
        zmm0 = arg_8
        *r15 = zmm6[0]
        r15 = &r15[1]
        rdi = arg2[1].d
        result = data_143ccb970
    while (rbp s< rdi)

return result
