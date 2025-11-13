// 函数: sub_1429eb3a0
// 地址: 0x1429eb3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rsi = arg1 - 3
int64_t rcx = arg2 << 3
void* r15 = arg4
int64_t var_d8 = arg3
int32_t result = (arg9 & 0xfffffff8) + 8
int32_t r9_1 = arg8
int64_t r10 = r15 << 3
arg9 = result
int32_t i

do
    int32_t rbx_1 = arg6
    
    if (r9_1 s> 0)
        void* rax_4 = r15 * 2
        void* var_e8_1 = rax_4 + arg3
        int64_t r13_2 = neg.q(rax_4)
        uint64_t j_1 = zx.q(((r9_1 - 1) u>> 3) + 1)
        uint64_t j
        
        do
            int64_t var_98
            void* r10_1 = &var_98:1
            int64_t k_1 = 8
            int64_t* r8 = &var_98
            int64_t k
            
            do
                int64_t r9_2 = sx.q(rbx_1)
                int64_t* r11_3 = (r9_2 s>> 4) + rsi
                
                if ((rbx_1.b & 0xf) == 0)
                    *(r10_1 - 1) = *(r11_3 + 3)
                    *r10_1 = *(arg2 + r11_3 + 3)
                    *(r10_1 + 1) = *(r11_3 + (arg2 << 1) + 3)
                    char rcx_15 = *(arg2 * 3 + r11_3 + 3)
                    *(r10_1 + 3) = *(r11_3 + (arg2 << 2) + 3)
                    *(r10_1 + 2) = rcx_15
                    *(r10_1 + 4) = *(arg2 * 5 + r11_3 + 3)
                    *(r10_1 + 5) = *(r11_3 + arg2 * 6 + 3)
                    *(r10_1 + 6) = *(arg2 * 7 + r11_3 + 3)
                else
                    sub_1429eaeb0(r11_3, arg2, r8, ((zx.q(r9_2.d) & 0xf) << 4) + arg5)
                
                rbx_1 += arg7
                r8 = &r8[1]
                r10_1 += 8
                k = k_1
                k_1 -= 1
            while (k != 1)
            int64_t* rcx_19 = var_e8_1
            int64_t var_90
            uint128_t zmm5 = _mm_unpacklo_epi8(zx.o(var_98), var_90)
            int64_t var_88
            int64_t var_80
            uint128_t zmm2 = _mm_unpacklo_epi8(zx.o(var_88), var_80)
            int64_t var_78
            int64_t var_70
            uint128_t zmm3 = _mm_unpacklo_epi8(zx.o(var_78), var_70)
            int64_t var_68
            int64_t var_60
            uint128_t zmm1 = _mm_unpacklo_epi8(zx.o(var_68), var_60)
            uint128_t zmm0 = _mm_unpacklo_epi16(zmm3, zmm1.q)
            uint128_t zmm4 = _mm_unpacklo_epi16(zmm5, zmm2.q)
            zmm3 = _mm_unpackhi_epi16(zmm3, zmm1.q)
            zmm1 = _mm_unpacklo_epi32(zmm4, zmm0.q)
            zmm4 = _mm_unpackhi_epi32(zmm4, zmm0.q)
            *(rcx_19 + r13_2) = _mm_unpacklo_epi64(zmm1, zmm1.q).q
            zmm0 = _mm_unpacklo_epi64(zmm4, zmm4.q)
            zmm5 = _mm_unpackhi_epi16(zmm5, zmm2.q)
            *(r15 + r13_2 + rcx_19) = _mm_unpackhi_epi64(zmm1, zmm1.q).q
            *rcx_19 = zmm0.q
            zmm2 = _mm_unpacklo_epi32(zmm5, zmm3.q)
            zmm5 = _mm_unpackhi_epi32(zmm5, zmm3.q)
            zmm0 = _mm_unpacklo_epi64(zmm2, zmm2.q)
            *(r15 * 3 - rax_4 + rcx_19) = _mm_unpackhi_epi64(zmm4, zmm4.q).q
            zmm2 = _mm_unpackhi_epi64(zmm2, zmm2.q)
            *((r15 << 2) - rax_4 + rcx_19) = zmm0.q
            zmm0 = _mm_unpacklo_epi64(zmm5, zmm5.q)
            zmm5 = _mm_unpackhi_epi64(zmm5, zmm5.q)
            *(r15 * 5 - rax_4 + rcx_19) = zmm2.q
            *(r15 * 6 - rax_4 + rcx_19) = zmm0.q
            *(r15 * 7 - rax_4 + rcx_19) = zmm5.q
            j = j_1
            j_1 -= 1
            var_e8_1 = &rcx_19[1]
        while (j != 1)
        r15 = arg4
        rcx = arg2 << 3
        result = arg9
        arg3 = var_d8
        r9_1 = arg8
        r10 = arg4 << 3
    
    arg3 += r10
    rsi += rcx
    i = result
    result -= 8
    var_d8 = arg3
    arg9 = result
while (i != 8)
__security_check_cookie(rax_1 ^ &var_108)
return result
