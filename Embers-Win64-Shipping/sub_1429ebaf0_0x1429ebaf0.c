// 函数: sub_1429ebaf0
// 地址: 0x1429ebaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg9)
void* r15 = arg2 * 3
int32_t rbx = arg6
int64_t* rdi = arg3

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int64_t rcx = sx.q(rbx)
        result = (rcx s>> 4) * arg2 + arg1 - r15
        
        if ((rbx.b & 0xf) == 0)
            result = memcpy(rdi, r15 + result, arg8)
        else
            uint128_t zmm3 = zx.o(*(result + (arg2 << 2)))
            uint128_t zmm1 = zx.o(*result)
            uint128_t zmm5 = _mm_unpacklo_epi8(zx.o(*(result + (arg2 << 1))), *(r15 + result))
            uint128_t zmm4 = *(((zx.q(rcx.d) & 0xf) << 4) + arg5)
            zmm5 = _mm_maddubs_epi16(zmm5, __pshufb_xmmdq_memdq(zmm4, data_1435ff830))
            int32_t zmm2[0x4] = zx.o(*(result + arg2 * 6))
            zmm3 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm3, *(arg2 * 5 + result)), 
                __pshufb_xmmdq_memdq(zmm4, data_1435ff850))
            int32_t temp0_7[0x4] = _mm_unpacklo_epi8(zmm2, *(arg2 * 7 + result))
            uint128_t zmm0 = __pshufb_xmmdq_memdq(zmm4, data_1435ff860)
            zmm4 = __pshufb_xmmdq_memdq(zmm4, data_1435ff800)
            zmm2 = _mm_maddubs_epi16(temp0_7, zmm0)
            zmm1 = _mm_maddubs_epi16(_mm_unpacklo_epi8(zmm1, *(result + arg2)), zmm4)
            zmm0 = _mm_min_epi16(zmm3, zmm5)
            zmm3 = _mm_max_epi16(zmm3, zmm5)
            int32_t temp0_18[0x4] = __pmulhrsw_xmmdq_memdq(
                _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm2, zmm1), zmm0), zmm3), 
                data_1435ff7f0)
            *rdi = _mm_packus_epi16(temp0_18, temp0_18)[0].q
        
        rbx += arg7
        rdi += arg4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
