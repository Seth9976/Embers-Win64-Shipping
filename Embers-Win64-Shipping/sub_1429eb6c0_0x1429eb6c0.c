// 函数: sub_1429eb6c0
// 地址: 0x1429eb6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg9)
int64_t r15 = arg2 * 3
int32_t rdi = arg6
void* rsi = arg3

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    char zmm6[0x10]
    char var_38_1[0x10] = zmm6
    char zmm7[0x10]
    char var_48_1[0x10] = zmm7
    int32_t zmm8[0x4]
    int32_t var_58_1[0x4] = zmm8
    char zmm9[0x10]
    char var_68_1[0x10] = zmm9
    int32_t zmm10[0x4]
    int32_t var_78_1[0x4] = zmm10
    int32_t zmm11[0x4]
    int32_t var_88_1[0x4] = zmm11
    int32_t zmm12[0x4]
    int32_t var_98_1[0x4] = zmm12
    int32_t zmm13[0x4]
    int32_t var_a8_1[0x4] = zmm13
    int32_t zmm14[0x4]
    int32_t var_b8_1[0x4] = zmm14
    uint64_t i
    
    do
        int64_t rcx = sx.q(rdi)
        result = (rcx s>> 4) * arg2 + arg1 - r15
        
        if ((rdi.b & 0xf) == 0)
            result = memcpy(rsi, r15 + result, arg8)
        else
            zmm14 = data_1435ff7f0
            zmm10 = *(((zx.q(rcx.d) & 0xf) << 4) + arg5)
            int32_t temp0_1[0x4] = __pshufb_xmmdq_memdq(zmm10, data_1435ff800)
            int32_t temp0_2[0x4] = __pshufb_xmmdq_memdq(zmm10, data_1435ff830)
            int32_t temp0_3[0x4] = __pshufb_xmmdq_memdq(zmm10, data_1435ff850)
            int32_t temp0_4[0x4] = __pshufb_xmmdq_memdq(zmm10, data_1435ff860)
            
            if (arg8 s> 0)
                int64_t rdx = result + (arg2 << 1)
                result = neg.q(arg2)
                void* r8 = rsi
                uint64_t j_1 = zx.q(((arg8 - 1) u>> 4) + 1)
                uint64_t j
                
                do
                    r8 += 0x10
                    int32_t zmm0[0x4] = *(rdx + arg2)
                    int16_t zmm1[0x8] = *(rdx + r15)
                    zmm9 = *rdx
                    zmm6 = *(rdx + (arg2 << 1))
                    zmm7 = *(result * 2 + rdx)
                    zmm8 = *(rdx + (arg2 << 2))
                    int64_t zmm5 = (*(neg.q(arg2) + rdx)).q
                    int64_t zmm4 = (*(rdx + arg2 * 5)).q
                    rdx += 0x10
                    int32_t zmm3[0x4] = zmm9
                    zmm9 = _mm_unpackhi_epi8(zmm9, zmm0[0].q)
                    int32_t temp0_6[0x4] = _mm_unpacklo_epi8(zmm3, zmm0[0].q)
                    int32_t temp0_7[0x4] = _mm_unpacklo_epi8(zmm6, zmm1[0].q)
                    zmm6 = _mm_unpackhi_epi8(zmm6, zmm1[0].q)
                    zmm1 = _mm_unpacklo_epi8(zmm8, zmm4)
                    int32_t temp0_10[0x4] = _mm_unpacklo_epi8(zmm7, zmm5)
                    zmm1 = _mm_maddubs_epi16(zmm1, temp0_4)
                    zmm0 = _mm_maddubs_epi16(temp0_10, temp0_1)
                    zmm8 = _mm_maddubs_epi16(_mm_unpackhi_epi8(zmm8, zmm4), temp0_4)
                    zmm3 = _mm_maddubs_epi16(temp0_6, temp0_2)
                    int32_t zmm2[0x4] = _mm_maddubs_epi16(temp0_7, temp0_3)
                    char temp0_17[0x10] = _mm_maddubs_epi16(zmm9, temp0_2)
                    zmm1 = _mm_adds_epi16(zmm1, zmm0)
                    char temp0_19[0x10] = _mm_maddubs_epi16(zmm6, temp0_3)
                    char temp0_21[0x10] = _mm_maddubs_epi16(_mm_unpackhi_epi8(zmm7, zmm5), temp0_1)
                    int32_t temp0_22[0x4] = _mm_min_epi16(zmm3, zmm2)
                    int32_t temp0_23[0x4] = _mm_max_epi16(zmm3, zmm2)
                    zmm1 = _mm_adds_epi16(_mm_adds_epi16(zmm1, temp0_22), temp0_23)
                    int32_t temp0_26[0x4] = _mm_min_epi16(temp0_17, temp0_19)
                    zmm1 = _mm_mulhrs_epi16(zmm1, zmm14)
                    zmm9 = _mm_max_epi16(temp0_17, temp0_19)
                    *(r8 - 0x10) = _mm_packus_epi16(zmm1, 
                        _mm_mulhrs_epi16(
                            _mm_adds_epi16(
                                _mm_adds_epi16(_mm_adds_epi16(zmm8, temp0_21), temp0_26), zmm9), 
                            zmm14))
                    j = j_1
                    j_1 -= 1
                while (j != 1)
        
        rsi += arg4
        rdi += arg7
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
