// 函数: sub_1429eb970
// 地址: 0x1429eb970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg9)
void* r13 = arg2 * 3
int32_t rbx = arg6
int32_t* rsi = arg3

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    int32_t* rdi_1 = arg3
    uint64_t i
    
    do
        int64_t rcx = sx.q(rbx)
        result = (rcx s>> 4) * arg2 + arg1 - r13
        
        if ((rbx.b & 0xf) == 0)
            result = memcpy(rdi_1, result + r13, arg8)
        else
            uint128_t zmm4 = zx.o(*(result + (arg2 << 2)))
            uint128_t zmm1 = zx.o(*result)
            uint128_t zmm5 = _mm_unpacklo_epi8(zx.o(*(result + (arg2 << 1))), zx.q(*(result + r13)))
            uint128_t zmm3 = *(((zx.q(rcx.d) & 0xf) << 4) + arg5)
            zmm5 = _mm_maddubs_epi16(zmm5, __pshufb_xmmdq_memdq(zmm3, data_1435ff830))
            int32_t zmm2[0x4] = zx.o(*(result + arg2 * 6))
            zmm4 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm4, zx.q(*(arg2 * 5 + result))), 
                __pshufb_xmmdq_memdq(zmm3, data_1435ff850))
            int32_t temp0_7[0x4] = _mm_unpacklo_epi8(zmm2, zx.q(*(arg2 * 7 + result)))
            uint128_t zmm0 = __pshufb_xmmdq_memdq(zmm3, data_1435ff860)
            zmm3 = __pshufb_xmmdq_memdq(zmm3, data_1435ff800)
            zmm2 = _mm_maddubs_epi16(temp0_7, zmm0)
            zmm1 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm1, zx.q(*(result + arg2))), zmm3)
            zmm0 = _mm_min_epi16(zmm4, zmm5)
            zmm4 = _mm_max_epi16(zmm4, zmm5)
            int32_t temp0_18[0x4] = __pmulhrsw_xmmdq_memdq(
                _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm2, zmm1), zmm0), zmm4), 
                data_1435ff7f0)
            *rsi = _mm_packus_epi16(temp0_18, temp0_18)[0]
        
        rbx += arg7
        rdi_1 += arg4
        rsi += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
