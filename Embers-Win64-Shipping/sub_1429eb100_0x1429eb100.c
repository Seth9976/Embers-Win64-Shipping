// 函数: sub_1429eb100
// 地址: 0x1429eb100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint64_t result = zx.q(arg9)
int64_t rbx = arg1 - 3
int64_t rcx = sx.q(arg8)
var_68 = arg3
void* r11 = arg3

if (result.d s> 0)
    int64_t rdx = arg2 << 2
    result = zx.q(((result.d - 1) u>> 2) + 1)
    uint64_t result_1 = result
    uint64_t i
    
    do
        int32_t r8 = arg6
        
        if (rcx s> 0)
            int64_t rax_4 = arg4 * 2
            int64_t r14_2 = neg.q(rax_4)
            int32_t* r11_1 = r11 + rax_4
            void* r9 = arg2 * 3
            int64_t j_1 = ((rcx - 1) u>> 2) + 1
            int64_t j
            
            do
                int32_t var_58
                uint128_t zmm2
                
                for (int64_t k = 0; k s< 4; k += 1)
                    int64_t rcx_1 = sx.q(r8)
                    int64_t* rax_7 = (rcx_1 s>> 4) + rbx
                    
                    if ((r8.b & 0xf) == 0)
                        (&var_58)[k].b = *(rax_7 + 3)
                        *(&var_58:1 + (k << 2)) = *(rax_7 + arg2 + 3)
                        void var_56
                        *(&var_56 + (k << 2)) = *(rax_7 + (arg2 << 1) + 3)
                        void var_55
                        *(&var_55 + (k << 2)) = *(r9 + rax_7 + 3)
                    else
                        uint128_t zmm1 = zx.o(*(rax_7 + (arg2 << 1)))
                        uint128_t zmm5 = _mm_unpacklo_epi16(zx.o(*rax_7), *(rax_7 + arg2))
                        zmm2 = zmm5
                        uint128_t zmm4 = *(arg5 + (zx.q(rcx_1.d) & 0xf) * 0x10)
                        zmm1 = _mm_unpacklo_epi16(zmm1, *(r9 + rax_7))
                        uint128_t zmm0 = __pshufb_xmmdq_memdq(zmm4, data_1435ff830)
                        zmm5 = _mm_unpackhi_epi32(zmm5, zmm1.q)
                        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1.q)
                        zmm1 = zmm5
                        zmm5 = _mm_bsrli_si128(zmm5, 8)
                        uint128_t zmm3 = _mm_maddubs_epi16(_mm_bsrli_si128(zmm2, 8), zmm0)
                        zmm1 = _mm_maddubs_epi16(zmm1, __pshufb_xmmdq_memdq(zmm4, data_1435ff850))
                        zmm0 = __pshufb_xmmdq_memdq(zmm4, data_1435ff860)
                        zmm4 = __pshufb_xmmdq_memdq(zmm4, data_1435ff800)
                        zmm5 = _mm_maddubs_epi16(zmm5, zmm0)
                        zmm2 = _mm_maddubs_epi16(zmm2, zmm4)
                        zmm0 = _mm_min_epi16(zmm1, zmm3)
                        zmm1 = _mm_max_epi16(zmm1, zmm3)
                        zmm5 = __pmulhrsw_xmmdq_memdq(
                            _mm_adds_epi16(_mm_adds_epi16(_mm_adds_epi16(zmm5, zmm2), zmm0), zmm1), 
                            data_1435ff7f0)
                        (&var_58)[k] = _mm_packus_epi16(zmm5, zmm5).d
                    
                    r8 += arg7
                
                int32_t var_54
                int32_t var_50
                int32_t var_4c
                zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_58), zx.q(var_54)), 
                    _mm_unpacklo_epi8(zx.o(var_50), zx.q(var_4c)).q)
                *(r14_2 + r11_1) = zmm2.d
                *(r11_1 + r14_2 + arg4) = _mm_bsrli_si128(zmm2, 4).d
                *r11_1 = _mm_bsrli_si128(zmm2, 8).d
                *(arg4 * 3 - rax_4 + r11_1) = _mm_bsrli_si128(zmm2, 0xc).d
                r11_1 = &r11_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            r11 = var_68
            rdx = arg2 << 2
            result = result_1
            rcx = sx.q(arg8)
        
        rbx += rdx
        r11 += arg4 << 2
        i = result
        result -= 1
        var_68 = r11
        result_1 = result
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_68)
return result
