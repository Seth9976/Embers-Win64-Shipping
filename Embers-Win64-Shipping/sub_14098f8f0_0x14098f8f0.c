// 函数: sub_14098f8f0
// 地址: 0x14098f8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int64_t r12 = 0
int64_t* r14 = arg2
int64_t var_1c0 = 0
sub_1422883b0(arg1, arg2, 0)
void* r15 = &arg1[0x2b]
*arg1 = &data_142e3d5d8
sub_1422b4e50(r15)
sub_142287b50(r15 + 0x88)
sub_1422877b0(r15 + 0xc8)
void* rdi = &arg1[0x51]
arg1[0x4d].d = 0xffffffff
*(arg1 + 0x26c) = 4
arg1[0x4e] = 0
arg1[0x4c] = &data_142e3cc70
arg1[0x4f] = 0
arg1[0x50] = 0
char rcx_3 = (arg1[0x21][1].d).b
*(rdi + 8) = 0xffffffff
*(rdi + 0xc) = rcx_3
*(rdi + 0x90) = 0
*(rdi + 0x98) = 0
*(rdi + 0x9c) = 8
*(rdi + 0xa0) = 0xffff0101
*(rdi + 0xa4) = 0xff
*(rdi + 0xc8) = 0
*(rdi + 0xd4) = 2
*(rdi + 0xd0) = 0
*(rdi + 0x108) = 0
*(rdi + 0x110) = 0
*(rdi + 0x114) = 3
__builtin_memset(rdi + 0x118, 0, 0x18)
int32_t var_1c8 = 2
*rdi = &data_142e3cbf8
__builtin_memset(rdi + 0x130, 0, 0x30)
*(rdi + 0x1a0) = 0
*(rdi + 0x1a4) = 4
__builtin_memset(rdi + 0x1a8, 0, 0x40)
*(rdi + 0x1e8) = -1
*(rdi + 0x1f0) = 0xffffffff
__builtin_memset(rdi + 0x1f4, 0, 0x14)
*(rdi + 0x208) = 0xffffffff
uint128_t zmm6
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9
zmm6, zmm7, zmm8, zmm9 = sub_141f15fd0(r14, &arg1[0x93], arg1[0x21][1].d)
int32_t var_1cc = 0xffffffff
int64_t i_2 = sx.q(r14[0x87].d)
uint128_t* var_1b8 = nullptr
int32_t var_1ac = 0
int32_t rsi = (i_2 * 3).d
int32_t var_1b0 = rsi

if (rsi s> 0)
    sub_1407755b0(&var_1b8)

int32_t rax_5 = arg1[0x50].d + rsi
arg1[0x50].d = rax_5

if (rax_5 s> *(arg1 + 0x284))
    sub_1405a4cf0(&arg1[0x4f])

int64_t i_1 = i_2

if (i_2.d s> 0)
    int32_t* r14_1 = nullptr
    uint128_t var_48_1 = zmm6
    uint128_t var_58_1 = zmm7
    uint128_t var_68_1 = zmm8
    zmm8 = 0x3f800000
    uint128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15 = 0x3f000000
    char var_1d5_1 = 0x7f
    char var_1d1_1 = 0x7f
    char var_1cd_1 = 0x7f
    void* var_1a8_1 = nullptr
    int64_t i
    
    do
        int64_t r15_1 = arg2[0x86]
        uint128_t zmm4_1 = data_143dbb200
        uint128_t zmm5_1 = data_143dbb1fc
        zmm9.d = (*(r14_1 + r15_1 + 0xc)).d f- *(r14_1 + r15_1)
        zmm10.d = (*(r14_1 + r15_1 + 0x10)).d f- *(r14_1 + r15_1 + 4)
        zmm11.d = (*(r14_1 + r15_1 + 0x14)).d f- *(r14_1 + r15_1 + 8)
        uint128_t zmm3_1
        zmm3_1.d = (*(r14_1 + r15_1 + 0x1c)).d f- *(r14_1 + r15_1 + 4)
        zmm7.d = (*(r14_1 + r15_1 + 0x18)).d f- *(r14_1 + r15_1)
        zmm6.d = (*(r14_1 + r15_1 + 0x20)).d f- *(r14_1 + r15_1 + 8)
        uint128_t zmm2_1
        zmm2_1.d = zmm10.d f* zmm10.d
        uint128_t zmm0_1
        zmm0_1.d = zmm9.d f* zmm9.d
        uint128_t zmm1_1
        zmm1_1.d = zmm11.d f* zmm11.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        int32_t var_1cc_1 = zmm3_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        
        if (not(zmm2_1.d f!= zmm8.d))
            zmm13 = zmm9
            zmm14 = zmm10
            zmm12 = zmm11
        else if (zmm2_1.d f>= 9.99999994e-09f)
            zmm5_1.d = zmm15.d
            zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* zmm5_1.d
            zmm0_1.d = zmm4_1.d f* zmm4_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = zmm5_1.d f- zmm1_1.d
            zmm0_1.d = zmm4_1.d f* zmm2_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm1_1.d = zmm4_1.d f* zmm4_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm5_1.d = zmm5_1.d f- zmm3_1.d
            zmm3_1 = var_1cc_1
            zmm12.d = zmm4_1.d f* zmm5_1.d
            zmm5_1 = data_143dbb1fc
            zmm12.d = zmm12.d f+ zmm4_1.d
            zmm4_1 = data_143dbb200
            zmm13.d = zmm12.d f* zmm9.d
            zmm14.d = zmm12.d f* zmm10.d
            zmm12.d = zmm12.d f* zmm11.d
        else
            zmm13 = data_143dbb1f8
            zmm14 = zmm5_1
            zmm12 = zmm4_1
        
        zmm0_1.d = zmm6.d f* zmm10.d
        zmm8.d = zmm3_1.d f* zmm11.d
        zmm6.d = zmm6.d f* zmm9.d
        zmm8.d = zmm8.d f- zmm0_1.d
        zmm3_1.d = zmm3_1.d f* zmm9.d
        zmm0_1 = zmm7
        zmm7.d = zmm7.d f* zmm10.d
        zmm0_1.d = zmm0_1.d f* zmm11.d
        zmm7.d = zmm7.d f- zmm3_1.d
        zmm6.d = zmm6.d f- zmm0_1.d
        zmm0_1.d = zmm8.d f* zmm8.d
        zmm1_1.d = zmm7.d f* zmm7.d
        zmm2_1.d = zmm6.d f* zmm6.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        
        if (zmm2_1.d f== 1f)
            zmm3_1 = data_143dbb1f8
        else if (zmm2_1.d f>= 9.99999994e-09f)
            zmm4_1.d = zmm15.d
            zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
            zmm3_1.d = zmm2_1.d f* zmm4_1.d
            zmm0_1.d = zmm5_1.d f* zmm5_1.d
            zmm1_1.d = zmm3_1.d f* zmm0_1.d
            zmm2_1.d = zmm4_1.d f- zmm1_1.d
            zmm0_1.d = zmm5_1.d f* zmm2_1.d
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm1_1.d = zmm5_1.d f* zmm5_1.d
            zmm3_1.d = zmm3_1.d f* zmm1_1.d
            zmm4_1.d = zmm4_1.d f- zmm3_1.d
            zmm0_1.d = zmm5_1.d f* zmm4_1.d
            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
            zmm0_1.d = zmm5_1.d f* zmm8.d
            zmm1_1.d = zmm5_1.d f* zmm6.d
            zmm5_1.d = zmm5_1.d f* zmm7.d
            zmm8 = zmm0_1
            zmm6 = zmm1_1
            zmm7 = zmm5_1
            zmm3_1 = data_143dbb1f8
        else
            zmm3_1 = data_143dbb1f8
            zmm6 = zmm5_1
            zmm8 = zmm3_1
            zmm7 = zmm4_1
        
        zmm0_1.d = zmm12.d f* zmm6.d
        zmm9.d = zmm14.d f* zmm7.d
        zmm10.d = zmm12.d f* zmm8.d
        zmm9.d = zmm9.d f- zmm0_1.d
        zmm11.d = zmm13.d f* zmm6.d
        zmm0_1.d = zmm13.d f* zmm7.d
        zmm10.d = zmm10.d f- zmm0_1.d
        zmm0_1.d = zmm14.d f* zmm8.d
        zmm11.d = zmm11.d f- zmm0_1.d
        zmm2_1.d = zmm10.d f* zmm10.d
        zmm0_1.d = zmm9.d f* zmm9.d
        zmm1_1.d = zmm11.d f* zmm11.d
        zmm2_1.d = zmm2_1.d f+ zmm0_1.d
        zmm2_1.d = zmm2_1.d f+ zmm1_1.d
        
        if (not(zmm2_1.d f== 1f))
            if (zmm2_1.d f>= 9.99999994e-09f)
                zmm4_1.d = zmm15.d
                zmm3_1.d = zmm2_1.d
                zmm5_1 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                zmm3_1.d = zmm3_1.d f* zmm4_1.d
                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                zmm1_1.d = zmm3_1.d f* zmm0_1.d
                zmm2_1.d = zmm4_1.d f- zmm1_1.d
                zmm0_1.d = zmm5_1.d f* zmm2_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm1_1.d = zmm5_1.d f* zmm5_1.d
                zmm3_1.d = zmm3_1.d f* zmm1_1.d
                zmm4_1.d = zmm4_1.d f- zmm3_1.d
                zmm0_1.d = zmm5_1.d f* zmm4_1.d
                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                zmm0_1.d = zmm5_1.d f* zmm9.d
                zmm1_1.d = zmm5_1.d f* zmm10.d
                zmm5_1.d = zmm5_1.d f* zmm11.d
                zmm9 = zmm0_1
                zmm10 = zmm1_1
                zmm11 = zmm5_1
            else
                zmm10 = data_143dbb1fc
                zmm9 = zmm3_1
                zmm11 = data_143dbb200
        
        zmm13.d = zmm13.d f* 127f
        int32_t var_f4_1 = var_1cc
        zmm13.d = zmm13.d f+ zmm13.d
        zmm13.d = zmm13.d f+ zmm15.d
        int32_t rsi_2 = int.d(zmm13.d) s>> 1
        char rax_6
        
        if (rsi_2 s>= 0xffffff80)
            rax_6 = 0x7f
            
            if (rsi_2 s< 0x7f)
                rax_6 = rsi_2.b
        else
            rax_6 = -0x80
        
        zmm14.d = zmm14.d f* 127f
        char var_fc_1 = rax_6
        zmm14.d = zmm14.d f+ zmm14.d
        zmm14.d = zmm14.d f+ zmm15.d
        int32_t r11_2 = int.d(zmm14.d) s>> 1
        char rax_7
        
        if (r11_2 s>= 0xffffff80)
            rax_7 = 0x7f
            
            if (r11_2 s< 0x7f)
                rax_7 = r11_2.b
        else
            rax_7 = -0x80
        
        zmm12.d = zmm12.d f* 127f
        char var_fb_1 = rax_7
        zmm12.d = zmm12.d f+ zmm12.d
        zmm12.d = zmm12.d f+ zmm15.d
        int32_t r10_2 = int.d(zmm12.d) s>> 1
        char rax_8
        
        if (r10_2 s>= 0xffffff80)
            rax_8 = 0x7f
            
            if (r10_2 s< 0x7f)
                rax_8 = r10_2.b
        else
            rax_8 = -0x80
        
        zmm8.d = zmm8.d f* 127f
        char var_fa_1 = rax_8
        char var_f9_1 = 0x7f
        zmm8.d = zmm8.d f+ zmm8.d
        zmm8.d = zmm8.d f+ zmm15.d
        int32_t r9_2 = int.d(zmm8.d) s>> 1
        char rax_9
        
        if (r9_2 s>= 0xffffff80)
            rax_9 = 0x7f
            
            if (r9_2 s< 0x7f)
                rax_9 = r9_2.b
        else
            rax_9 = -0x80
        
        zmm6.d = zmm6.d f* 127f
        zmm6.d = zmm6.d f+ zmm6.d
        zmm6.d = zmm6.d f+ zmm15.d
        int32_t r8_2 = int.d(zmm6.d) s>> 1
        char rax_10
        
        if (r8_2 s>= 0xffffff80)
            rax_10 = 0x7f
            
            if (r8_2 s< 0x7f)
                rax_10 = r8_2.b
        else
            rax_10 = -0x80
        
        zmm7.d = zmm7.d f* 127f
        char var_f7_1 = rax_10
        zmm7.d = zmm7.d f+ zmm7.d
        zmm7.d = zmm7.d f+ zmm15.d
        int32_t rdx_4 = int.d(zmm7.d) s>> 1
        char rax_11
        
        if (rdx_4 s>= 0xffffff80)
            rax_11 = 0x7f
            
            if (rdx_4 s< 0x7f)
                rax_11 = rdx_4.b
        else
            rax_11 = -0x80
        
        char var_f6_1 = rax_11
        char var_1d8_1
        
        if (r9_2 s>= 0xffffff80)
            char rcx_7 = 0x7f
            
            if (r9_2 s< 0x7f)
                rcx_7 = r9_2.b
            
            var_1d8_1 = rcx_7
        else
            var_1d8_1 = 0x80
        
        if (r8_2 s>= 0xffffff80)
            char rcx_8 = 0x7f
            
            if (r8_2 s< 0x7f)
                rcx_8 = r8_2.b
            
            char var_1d7_2 = rcx_8
        else
            char var_1d7_1 = 0x80
        
        if (rdx_4 s>= 0xffffff80)
            char rcx_9 = 0x7f
            
            if (rdx_4 s< 0x7f)
                rcx_9 = rdx_4.b
            
            char var_1d6_2 = rcx_9
        else
            char var_1d6_1 = 0x80
        
        zmm9.d = zmm9.d f* 127f
        zmm9.d = zmm9.d f+ zmm9.d
        zmm9.d = zmm9.d f+ zmm15.d
        int32_t rdx_6 = int.d(zmm9.d) s>> 1
        char var_1d4_1
        
        if (rdx_6 s>= 0xffffff80)
            char rcx_10 = 0x7f
            
            if (rdx_6 s< 0x7f)
                rcx_10 = rdx_6.b
            
            var_1d4_1 = rcx_10
        else
            var_1d4_1 = 0x80
        
        zmm10.d = zmm10.d f* 127f
        zmm10.d = zmm10.d f+ zmm10.d
        zmm10.d = zmm10.d f+ zmm15.d
        int32_t rdx_8 = int.d(zmm10.d) s>> 1
        
        if (rdx_8 s>= 0xffffff80)
            char rcx_11 = 0x7f
            
            if (rdx_8 s< 0x7f)
                rcx_11 = rdx_8.b
            
            char var_1d3_2 = rcx_11
        else
            char var_1d3_1 = 0x80
        
        zmm11.d = zmm11.d f* 127f
        zmm11.d = zmm11.d f+ zmm11.d
        zmm11.d = zmm11.d f+ zmm15.d
        int32_t rdx_10 = int.d(zmm11.d) s>> 1
        
        if (rdx_10 s>= 0xffffff80)
            char rcx_12 = 0x7f
            
            if (rdx_10 s< 0x7f)
                rcx_12 = rdx_10.b
            
            char var_1d2_2 = rcx_12
        else
            char var_1d2_1 = 0x80
        
        char var_1d0_1
        
        if (rsi_2 s>= 0xffffff80)
            char rcx_13 = 0x7f
            
            if (rsi_2 s< 0x7f)
                rcx_13 = rsi_2.b
            
            var_1d0_1 = rcx_13
        else
            var_1d0_1 = 0x80
        
        if (r11_2 s>= 0xffffff80)
            char rcx_14 = 0x7f
            
            if (r11_2 s< 0x7f)
                rcx_14 = r11_2.b
            
            char var_1cf_2 = rcx_14
        else
            char var_1cf_1 = 0x80
        
        if (r10_2 s>= 0xffffff80)
            char rcx_15 = 0x7f
            
            if (r10_2 s< 0x7f)
                rcx_15 = r10_2.b
            
            char var_1ce_2 = rcx_15
        else
            char var_1ce_1 = 0x80
        
        zmm2_1 = data_142dd3fd0
        zmm14 = data_142dd3f80
        zmm5_1 = data_142dd3fb0
        zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_1d8_1.d), 0), 0)
        int32_t var_17c_1 = 0
        int32_t var_16c_1 = 0
        int32_t var_15c_1 = 0
        uint128_t temp0_7 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_1, zmm14) & zmm2_1) | zmm1_1)
        zmm1_1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_1d4_1.d), 0), 0)
        zmm4_1 = _mm_mul_ps(temp0_7, zmm5_1)
        zmm3_1 = _mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_1, zmm14) & zmm2_1) | zmm1_1)
        zmm1_1 = _mm_unpacklo_epi8(zx.o(var_1d0_1.d), 0)
        zmm3_1 = _mm_mul_ps(zmm3_1, zmm5_1)
        zmm1_1 = _mm_unpacklo_epi16(zmm1_1, 0)
        int32_t var_168_1 = zmm4_1.d
        int32_t var_178_1 = zmm3_1.d
        zmm2_1 =
            _mm_mul_ps(_mm_cvtepi32_ps((_mm_cmpgt_epi32(zmm1_1, zmm14) & zmm2_1) | zmm1_1), zmm5_1)
        float var_188 = zmm2_1.d
        int32_t var_184_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d
        int32_t var_174_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55).d
        int32_t var_164_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55).d
        uint128_t var_158_1 = data_142d3f660
        int32_t var_180_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d
        int32_t var_170_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa).d
        int32_t var_160_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa).d
        zmm0_1, zmm15 = sub_14062b8d0(&var_188)
        zmm8 = 0x3f800000
        
        zmm0_1 = zmm0_1.d f>= 0f ? 0x3f800000 : 0xbf800000
        
        char rax_21 = 0x7f
        int32_t* r9_3 = var_1a8_1
        
        if (zmm0_1.d f< 0f)
            rax_21 = -0x7f
        
        char var_f5_1 = rax_21
        zmm2_1 = zx.o(rax_9.q)
        int32_t var_140_1 = *(r14_1 + r15_1 + 8)
        uint128_t* rax_23 = var_1b8
        zmm0_1.q = *(r14_1 + r15_1)
        uint128_t var_148_1 = zmm0_1
        *(rax_23 + r12) = zmm0_1
        uint128_t var_138
        *(rax_23 + r12 + 0x10) = var_138
        uint128_t var_128
        *(rax_23 + r12 + 0x20) = var_128
        uint128_t var_118
        *(rax_23 + r12 + 0x30) = var_118
        uint128_t var_108
        *(rax_23 + r12 + 0x40) = var_108
        *(rax_23 + r12 + 0x50) = zmm2_1.q
        *(r9_3 + arg1[0x4f]) = var_1c8 - 2
        int32_t var_140_2 = *(r14_1 + r15_1 + 0x14)
        uint128_t* rax_26 = var_1b8
        zmm0_1.q = *(r14_1 + r15_1 + 0xc)
        uint128_t var_148 = zmm0_1
        *(rax_26 + r12 + 0x58) = zmm0_1
        *(rax_26 + r12 + 0x68) = var_138
        *(rax_26 + r12 + 0x78) = var_128
        *(rax_26 + r12 + 0x88) = var_118
        *(rax_26 + r12 + 0x98) = var_108
        *(rax_26 + r12 + 0xa8) = zmm2_1.q
        *(r9_3 + arg1[0x4f] + 4) = var_1c8 - 1
        int32_t rax_28 = *(r14_1 + r15_1 + 0x20)
        zmm1_1 = zx.o(*(r14_1 + r15_1 + 0x18))
        r14_1 = &r14_1[9]
        int32_t var_140_3 = rax_28
        uint128_t* rax_29 = var_1b8
        zmm0_1.q = zmm1_1.q
        *(rax_29 + r12 + 0xb0) = zmm0_1
        *(rax_29 + r12 + 0xc0) = var_138
        *(rax_29 + r12 + 0xd0) = var_128
        *(rax_29 + r12 + 0xe0) = var_118
        *(rax_29 + r12 + 0xf0) = var_108
        *(rax_29 + r12 + 0x100) = zmm2_1.q
        r12 += 0x108
        *(r9_3 + arg1[0x4f] + 8) = var_1c8
        var_1c8 += 3
        i = i_1
        i_1 -= 1
        var_1a8_1 = &r9_3[3]
    while (i != 1)
    r14 = arg2
    rdi = &arg1[0x51]
    r15 = &arg1[0x2b]

sub_1423691c0(r15, rdi, &var_1b8, 1, 0)
sub_141997e80(&arg1[0x3c])
sub_141997e80(r15)
sub_141997e80(&arg1[0x44])
sub_141997e80(&arg1[0x4c])
sub_141997e80(rdi)
int64_t rax_32 = (*(*r14 + 0x548))(r14, 0)
arg1[0x2a] = rax_32

if (rax_32 == 0)
    arg1[0x2a] = sub_14210f630(0)

uint128_t* rcx_26 = var_1b8

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

__security_check_cookie(rax_1 ^ &var_208)
return arg1
