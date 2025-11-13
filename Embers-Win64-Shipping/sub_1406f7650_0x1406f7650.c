// 函数: sub_1406f7650
// 地址: 0x1406f7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_4 = 0
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(*rax) & 0x7fff

if (i s>= *rdx)
    int64_t rax_1 = 0
    int32_t* rcx_1 = nullptr
    
    do
        i -= *(rcx_1 + rdx)
        rax_1 += 1
        rcx_1 = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx_1 + rdx))

int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(*(arg2 + 0x18) + (sx.q(r9) << 3)))) << 3))
int32_t rdx_4 = zx.d(rax[1]) & 0x7fff
*(arg2 + 0x10) = &rax[2]
int32_t var_48 = rdx_4
int32_t result_1
result_1.b = rdx_4 != 0x7fff
void* var_38
void var_40

if (rdx_4 == 0x7fff)
    var_38 = &var_40
else
    var_38 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)

if (result == 0)
label_1406f79af:
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_11 = var_38
            i_1 += 1
            result = sx.q(result_1)
            var_38 = rdx_11 + (result << 2)
            *rdx_11 = 0
        while (i_1 s< *(arg2 + 0x40))
else
    int64_t rcx_7 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    int64_t r14_1 = *(rcx_7 + (result << 3))
    
    if (rsi[0x86].b == 0)
        goto label_1406f79af
    
    void* rax_8 = sub_140d3c6e0(rsi)
    void* rax_9
    void* rcx_9
    int64_t rdx_5
    
    if (rax_8 != 0)
        rax_9 = sub_142591550()
        rcx_9 = *(rax_8 + 0x10)
        rdx_5 = sx.q(*(rax_9 + 0x38))
    
    if (rax_8 == 0 || rdx_5.d s> *(rcx_9 + 0x38)
            || *(*(rcx_9 + 0x30) + (rdx_5 << 3)) != rax_9 + 0x30 || *(rax_8 + 0x430) == 0)
        result = r14_1 + 0x138
    else
        result = sub_141f66050(rax_8, rsi[0x1a])
    
    if (result == 0)
        goto label_1406f79af
    
    int64_t rbp_2 = sx.q(rsi[0x22])
    int32_t r9_1 = 0
    int32_t i_5 = 0
    
    if (rbp_2.d s> 0 && rbp_2.d u>= 8)
        int64_t r15_1 = *(rsi + 0x80)
        int32_t zmm4[0x4] = zx.o(0)
        int32_t zmm5[0x4] = zx.o(0)
        int64_t i_2 = 0
        int64_t r11_1 = *(*(rsi + 0x58) + 0x328)
        int32_t rcx_13 = rbp_2.d & 0x80000007
        
        if (rcx_13 s< 0)
            rcx_13 = ((rcx_13 - 1) | 0xfffffff8) + 1
        
        int64_t r10_1 = 8
        int32_t temp0_8[0x4]
        
        do
            int64_t rax_14 = sx.q(*(r10_1 + r15_1 + 4))
            r10_1 += 0x20
            i_5 += 8
            i_2 += 8
            uint128_t zmm0 = zx.o(*(sx.q(*(r10_1 + r15_1 - 0x20)) * 0x78 + r11_1 + 0x18))
            int64_t rcx_16 = sx.q(*(r10_1 + r15_1 - 0x28)) * 0x78
            int32_t temp0_1[0x4] = _mm_unpacklo_epi32(
                zx.o(*(sx.q(*(r10_1 + r15_1 - 0x24)) * 0x78 + r11_1 + 0x18)), 
                zx.q(*(rax_14 * 0x78 + r11_1 + 0x18)))
            int64_t r9_3 = sx.q(*(r10_1 + r15_1 - 0xc)) * 0x78
            zmm4 = _mm_add_epi32(
                _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(rcx_16 + r11_1 + 0x18)), zmm0.q), 
                    temp0_1[0].q), 
                zmm4)
            zmm0 = zx.o(*(sx.q(*(r10_1 + r15_1 - 0x10)) * 0x78 + r11_1 + 0x18))
            result = sx.q(*(r10_1 + r15_1 - 0x18))
            int32_t temp0_5[0x4] = _mm_unpacklo_epi32(
                zx.o(*(sx.q(*(r10_1 + r15_1 - 0x14)) * 0x78 + r11_1 + 0x18)), 
                zx.q(*(r9_3 + r11_1 + 0x18)))
            temp0_8 = _mm_add_epi32(
                _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(zx.o(*(result * 0x78 + r11_1 + 0x18)), zmm0.q), 
                    temp0_5[0].q), 
                zmm5)
            zmm5 = temp0_8
        while (i_2 s< sx.q(rbp_2.d - rcx_13))
        
        int32_t temp0_9[0x4] = _mm_add_epi32(zmm4, temp0_8)
        int32_t temp0_11[0x4] = _mm_add_epi32(temp0_9, _mm_bsrli_si128(temp0_9, 8))
        r9_1 = _mm_add_epi32(temp0_11, _mm_bsrli_si128(temp0_11, 4))[0]
    
    int64_t i_3 = sx.q(i_5)
    int32_t r10_2 = 0
    int32_t r11_2 = 0
    
    if (i_3 s< rbp_2)
        if (rbp_2 - i_3 s>= 2)
            int64_t r14_2 = *(rsi + 0x80)
            int64_t r8_2 = *(*(rsi + 0x58) + 0x328)
            
            do
                int64_t rcx_18 = sx.q(*(r14_2 + (i_3 << 2))) * 0x78
                int64_t rax_25 = sx.q(*(r14_2 + (i_3 << 2) + 4))
                i_3 += 2
                r10_2 += *(rcx_18 + r8_2 + 0x18)
                r11_2 += *(rax_25 * 0x78 + r8_2 + 0x18)
            while (i_3 s< rbp_2 - 1)
        
        if (i_3 s< rbp_2)
            r9_1 += *(sx.q(*(*(rsi + 0x80) + (i_3 << 2))) * 0x78 + *(*(rsi + 0x58) + 0x328) + 0x18)
        
        result = zx.q(r11_2 + r10_2)
        r9_1 += result.d
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t* rdx_10 = var_38
            i_4 += 1
            result = sx.q(result_1)
            var_38 = &rdx_10[result]
            *rdx_10 = r9_1
        while (i_4 s< *(arg2 + 0x40))

return result
