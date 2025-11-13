// 函数: sub_14073f0c0
// 地址: 0x14073f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t r9 = 0
*(arg2 + 0x10) = &rax[1]
int32_t* rdx = *(arg2 + 0x20)
uint32_t i = zx.d(*rax) & 0x7fff

if (i s>= *rdx)
    int64_t rax_2 = 0
    int32_t* rcx_1 = nullptr
    
    do
        i -= *(rcx_1 + rdx)
        rax_2 += 1
        rcx_1 = rax_2 << 2
        r9 += 1
    while (i s>= *(rcx_1 + rdx))

int64_t rax_3 = *(arg2 + 0x18)
uint32_t var_a0 = 0xffffffff
int64_t rax_4 = *(rax_3 + (sx.q(r9) << 3))
int64_t result_1 = 0
int32_t var_90 = 0
uint32_t var_88 = 0xffffffff
int64_t rdx_2 = sx.q(*(sx.q(i) + rax_4))
int64_t rax_5 = *(arg2 + 0x38)
int32_t* var_80 = nullptr
int32_t var_78 = 0
uint32_t var_70 = 0xffffffff
int32_t* rsi = *(rax_5 + (rdx_2 << 3))
int32_t* var_68 = nullptr
int32_t var_60 = 0
sub_140767bd0(&var_a0, arg2)
sub_140767bd0(&var_88, arg2)
sub_140767bd0(&var_70, arg2)
int16_t* rax_6 = *(arg2 + 0x10)
int32_t rdx_7 = zx.d(*rax_6) & 0x7fff
*(arg2 + 0x10) = &rax_6[1]
int32_t var_e8 = rdx_7
int32_t result_2
result_2.b = rdx_7 != 0x7fff
void* var_d8
void var_e0

if (rdx_7 == 0x7fff)
    var_d8 = &var_e0
else
    var_d8 = zx.q(*(arg2 + 0x80) * rdx_7) + *(arg2 + 0x70)

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

int64_t result = *(rsi + 0x58)

if (result == 0)
label_14073f507:
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_20 = var_d8
            i_1 += 1
            result = sx.q(result_2)
            var_d8 = rdx_20 + (result << 2)
            *rdx_20 = 0xffffffff
        while (i_1 s< *(arg2 + 0x40))
else
    int64_t rcx_10 = **(result + 0x58)
    result = sx.q(rsi[0x1a])
    int64_t r15_1 = *(rcx_10 + (result << 3))
    
    if (rsi[0x86].b == 0)
        goto label_14073f507
    
    void* rax_10 = sub_140d3c6e0(rsi)
    void* rax_11
    void* rcx_12
    int64_t rdx_8
    
    if (rax_10 != 0)
        rax_11 = sub_142591550()
        rcx_12 = *(rax_10 + 0x10)
        rdx_8 = sx.q(*(rax_11 + 0x38))
    
    if (rax_10 == 0 || rdx_8.d s> *(rcx_12 + 0x38)
            || *(*(rcx_12 + 0x30) + (rdx_8 << 3)) != rax_11 + 0x30 || *(rax_10 + 0x430) == 0)
        result = r15_1 + 0x138
    else
        result = sub_141f66050(rax_10, rsi[0x1a])
    
    if (result == 0)
        goto label_14073f507
    
    if (*(arg2 + 0x40) s> 0)
        int64_t r15_2 = 0
        int32_t* rcx_15 = var_80
        result = result_1
        int64_t rdx_11 = sx.q(var_90) << 2
        int64_t r8_1 = sx.q(var_78) << 2
        int64_t r11_2 = sx.q(var_60) << 2
        int32_t* r13_1 = var_68
        int64_t var_b8_1 = r11_2
        int64_t var_c8_1 = rdx_11
        int64_t var_c0_1 = r8_1
        
        do
            int32_t r9_6 = *result
            int32_t r14_2 = *r13_1
            r13_1 += r11_2
            int32_t r11_3 = rsi[0x22]
            int32_t r8_2 = *rcx_15
            uint128_t zmm1
            
            if (r14_2 == 0xffffffff)
                int32_t rax_19 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                *(arg2 + 0x8c) = rax_19
                zmm1.d = (rax_19 u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_17 = *(arg2 + 0x90)
                int32_t rdx_13 = *(rcx_17 + r15_2)
                *(rcx_17 + r15_2) = rdx_13 + 1
                int32_t r9_2 = r9_6 * 0x19660d + (r8_2 * 0x19660d + 0x3c6ef35f)
                    * ((r14_2 << 0x10 | rdx_13) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                int32_t rcx_26 = ((r14_2 << 0x10 | rdx_13) * 0x19660d + 0x3c6ef35f) * r9_2
                    + r8_2 * 0x19660d + 0x3c6ef35f
                zmm1.d = _mm_cvtepi32_ps(zx.o((r9_2
                    + rcx_26 * (r9_2 * rcx_26 + (r14_2 << 0x10 | rdx_13) * 0x19660d + 0x3c6ef35f))
                    s>> 8) & 0xffffff).d f* 5.96046448e-08f
            
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(r11_3)).d f* zmm1.d
            void* r11_5 = sx.q(*(*(rsi + 0x80) + (sx.q(int.d(zmm0.d)) << 2))) * 0x78
                + *(*(rsi + 0x58) + 0x328)
            int32_t r12_1 = *(r11_5 + 0x18)
            
            if (r14_2 == 0xffffffff)
                int32_t rax_30 = *(arg2 + 0x8c) * 0xbb38435 + 0x3619636b
                *(arg2 + 0x8c) = rax_30
                zmm1.d = (rax_30 u>> 9 | 0x3f800000).d f- 1f
            else
                int32_t* rcx_30 = *(arg2 + 0x90)
                int32_t rdx_16 = *(rcx_30 + r15_2)
                *(rcx_30 + r15_2) = rdx_16 + 1
                int32_t r9_8 = r9_6 * 0x19660d + (r8_2 * 0x19660d + 0x3c6ef35f)
                    * ((r14_2 << 0x10 | rdx_16) * 0x19660d + 0x3c6ef35f) + 0x3c6ef35f
                int32_t rcx_36 = ((r14_2 << 0x10 | rdx_16) * 0x19660d + 0x3c6ef35f) * r9_8
                    + r8_2 * 0x19660d + 0x3c6ef35f
                zmm1.d = _mm_cvtepi32_ps(zx.o((r9_8
                    + rcx_36 * (r9_8 * rcx_36 + (r14_2 << 0x10 | rdx_16) * 0x19660d + 0x3c6ef35f))
                    s>> 8) & 0xffffff).d f* 5.96046448e-08f
            
            int32_t* rdx_19 = var_d8
            i_1 += 1
            r15_2 += 4
            zmm0.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f* zmm1.d
            r11_2 = var_b8_1
            result += rdx_11
            var_d8 = &rdx_19[sx.q(result_2)]
            rcx_15 += r8_1
            *rdx_19 = *(*(r11_5 + 0x10) + (sx.q(int.d(zmm0.d)) << 2))
            rdx_11 = var_c8_1
            r8_1 = var_c0_1
        while (i_1 s< *(arg2 + 0x40))

return result
