// 函数: sub_1414f8bf0
// 地址: 0x1414f8bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_142fbace0
sub_1422b4e50(&arg1[2])
sub_142287b50(&arg1[0x13])
sub_1422877b0(&arg1[0x1b])
int64_t var_170 = 1
uint64_t var_168 = 0
int128_t* var_178 = nullptr
void* var_188 = nullptr
int32_t var_180 = 0
float var_138
int64_t* rax_2 = sub_1414f8930(&var_138, &var_188)
sub_1407755b0(&var_178)
int128_t* r13 = var_178
var_188 = nullptr
int32_t var_180_1 = 0
*r13 = *rax_2
r13[1] = *(rax_2 + 0x10)
r13[2] = *(rax_2 + 0x20)
r13[3] = *(rax_2 + 0x30)
r13[4] = *(rax_2 + 0x40)
r13[5].q = rax_2[0xa]
int64_t* rax_3 = sub_1414f8930(&var_138, &var_188)
int64_t rsi = sx.q(var_170.d)
int32_t r14 = var_170:4.d
int32_t rdi = (rsi + 1).d
var_170.d = rdi

if (rdi s> r14)
    sub_1407755b0(&var_178)
    r14 = var_170:4.d
    rdi = var_170.d
    r13 = var_178

int128_t zmm0_1 = *rax_3
var_188 = nullptr
int128_t* rcx_7 = rsi * 0x58
int32_t var_180_2 = 0
*(rcx_7 + r13) = zmm0_1
*(rcx_7 + r13 + 0x10) = *(rax_3 + 0x10)
*(rcx_7 + r13 + 0x20) = *(rax_3 + 0x20)
*(rcx_7 + r13 + 0x30) = *(rax_3 + 0x30)
*(rcx_7 + r13 + 0x40) = *(rax_3 + 0x40)
*(rcx_7 + r13 + 0x50) = rax_3[0xa]
int64_t* rax_4 = sub_1414f8930(&var_138, &var_188)
int32_t rbx_2 = rdi + 1
var_170.d = rbx_2

if (rbx_2 s> r14)
    sub_1407755b0(&var_178)
    r14 = var_170:4.d
    rbx_2 = var_170.d
    r13 = var_178

int128_t zmm0_2 = *rax_4
int128_t* rcx_10 = sx.q(rdi) * 0x58
var_188 = nullptr
int32_t var_180_3 = 0
*(rcx_10 + r13) = zmm0_2
*(rcx_10 + r13 + 0x10) = *(rax_4 + 0x10)
*(rcx_10 + r13 + 0x20) = *(rax_4 + 0x20)
*(rcx_10 + r13 + 0x30) = *(rax_4 + 0x30)
*(rcx_10 + r13 + 0x40) = *(rax_4 + 0x40)
*(rcx_10 + r13 + 0x50) = rax_4[0xa]
int64_t* rax_6 = sub_1414f8930(&var_138, &var_188)
int32_t rsi_2 = rbx_2 + 1
var_170.d = rsi_2

if (rsi_2 s> r14)
    sub_1407755b0(&var_178)
    r13 = var_178
    rsi_2 = var_170.d

int128_t* rdx_8 = sx.q(rbx_2) * 0x58
*(rdx_8 + r13) = *rax_6
*(rdx_8 + r13 + 0x10) = *(rax_6 + 0x10)
*(rdx_8 + r13 + 0x20) = *(rax_6 + 0x20)
*(rdx_8 + r13 + 0x30) = *(rax_6 + 0x30)
*(rdx_8 + r13 + 0x40) = *(rax_6 + 0x40)
*(rdx_8 + r13 + 0x50) = rax_6[0xa]
sub_1422a3c90(&arg1[0x13], rsi_2, 1)
sub_1422c8fe0(&arg1[2], rsi_2, 1, 1)

if (rsi_2 s> 0)
    int32_t zmm3_1[0x4] = data_142dd3f80
    void* r11_1 = &r13[1]
    float zmm4_1[0x4] = data_142dd3fd0
    float zmm2_1[0x4] = zx.o(0)
    uint16_t rdi_2 = var_168.w
    uint64_t rsi_3 = 0
    uint16_t rbx_3 = var_168.w
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4] = data_142dd3fb0
    int32_t zmm8[0x4]
    int32_t var_58_1[0x4] = zmm8
    int128_t zmm9 = 0x3f000000
    float zmm10[0x4]
    float var_78_1[0x4] = zmm10
    int128_t zmm11 = 0x42fe0000
    int128_t zmm12 = 0x46fffe00
    var_188 = r11_1
    
    do
        int64_t rcx_15 = arg1[0x18]
        uint64_t rax_9 = zx.q(arg1[0x19].d * rsi_3.d)
        uint64_t r15_1 = zx.q(rsi_3.d)
        *(rax_9 + rcx_15) = *(r11_1 - 0x10)
        *(zx.q(rax_9.d) + rcx_15 + 8) = *(r11_1 - 8)
        bool cond:7_1 = *(arg1 + 0x91) == 0
        int64_t r14_1 = arg1[0xe]
        uint128_t zmm1_3 =
            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r11_1 + 0x40)), zmm2_1[0].q), zmm2_1[0].q)
        uint128_t zmm0_4 = (_mm_cmpgt_epi32(zmm1_3, zmm3_1) & zmm4_1) | zmm1_3
        zmm1_3 = zx.o(*(r11_1 + 0x3c))
        float temp0_4[0x4] = _mm_cvtepi32_ps(zmm0_4)
        zmm1_3 = _mm_unpacklo_epi8(zmm1_3, zmm2_1[0].q)
        float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm7)
        zmm1_3 = _mm_unpacklo_epi16(zmm1_3, zmm2_1[0].q)
        zmm0_4 = _mm_cmpgt_epi32(zmm1_3, zmm3_1) & zmm4_1
        int96_t var_148_1 = temp0_6[0].12
        float temp0_9[0x4] = _mm_cvtepi32_ps(zmm0_4 | zmm1_3)
        zmm0_4 = data_142d3f660
        float temp0_10[0x4] = _mm_mul_ps(temp0_9, zmm7)
        uint128_t var_158_1 = zmm0_4
        float temp0_11[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
        zmm1_3 = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xff)
        zmm3_1 = _mm_shuffle_ps(temp0_10, temp0_10, 0xaa)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x55)
        zmm8 = zmm3_1
        zmm8[0] = zmm8[0] f* temp0_11[0]
        zmm0_4.d = temp0_15.d f* zmm1_3.d
        temp0_10[0] = temp0_10[0] f* zmm1_3.d
        zmm8[0] = zmm8[0] f- zmm0_4.d
        temp0_15[0] = temp0_15[0] * temp0_6[0]
        zmm3_1[0] = zmm3_1[0] f* temp0_6[0]
        zmm0_4.d = temp0_10.d f* temp0_11[0]
        temp0_10[0] = temp0_10[0] f- zmm3_1[0]
        int96_t var_158_2 = temp0_10[0].12
        zmm4_1 = var_158_2.d
        temp0_15[0] = temp0_15[0] f- zmm0_4.d
        zmm8[0] = zmm8[0] f* temp0_13[0]
        zmm1_3 = zmm4_1
        temp0_10[0] = temp0_10[0] * temp0_13[0]
        temp0_15[0] = temp0_15[0] * temp0_13[0]
        
        if (cond:7_1)
            zmm1_3.d = zmm1_3.d f* zmm11.d
            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
            zmm1_3.d = zmm1_3.d f+ zmm9.d
            int32_t rax_26 = int.d(zmm1_3.d) s>> 1
            char rcx_24
            
            if (rax_26 s>= 0xffffff80)
                rcx_24 = 0x7f
                
                if (rax_26 s< 0x7f)
                    rcx_24 = rax_26.b
            else
                rcx_24 = -0x80
            
            zmm3_1 = var_158_2:4.d
            *(r14_1 + (r15_1 << 3)) = rcx_24
            zmm1_3.d = zmm3_1.d f* zmm11.d
            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
            zmm1_3.d = zmm1_3.d f+ zmm9.d
            int32_t rax_28 = int.d(zmm1_3.d) s>> 1
            char rcx_25
            
            if (rax_28 s>= 0xffffff80)
                rcx_25 = 0x7f
                
                if (rax_28 s< 0x7f)
                    rcx_25 = rax_28.b
            else
                rcx_25 = -0x80
            
            zmm2_1 = var_158_2:8.d
            *(r14_1 + (r15_1 << 3) + 1) = rcx_25
            zmm1_3.d = zmm2_1.d f* zmm11.d
            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
            zmm1_3.d = zmm1_3.d f+ zmm9.d
            int32_t rax_30 = int.d(zmm1_3.d) s>> 1
            char rcx_26
            
            if (rax_30 s>= 0xffffff80)
                rcx_26 = 0x7f
                
                if (rax_30 s< 0x7f)
                    rcx_26 = rax_30.b
            else
                rcx_26 = -0x80
            
            zmm0_4 = data_142d3f660
            int32_t var_128_2 = zmm8[0]
            float var_120_2 = temp0_15[0]
            *(r14_1 + (r15_1 << 3) + 2) = rcx_26
            float var_114_2 = var_148_1:4.d[0]
            int32_t var_110_2 = var_148_1:8.d[0]
            var_138 = zmm4_1[0]
            int32_t var_134_2 = zmm3_1[0]
            float var_130_2 = zmm2_1[0]
            float var_124_2 = temp0_10[0]
            float var_118_2 = var_148_1.d[0]
            *(r14_1 + (r15_1 << 3) + 3) = 0x7f
            int32_t var_12c_2 = 0
            int32_t var_11c_2 = 0
            int32_t var_10c_2 = 0
            uint128_t var_108_2 = zmm0_4
            int32_t zmm13_2
            zmm0_4, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13_2 = sub_14062b8d0(&var_138)
            
            zmm1_3 = zmm0_4.d f>= zmm13_2 ? 0x437e8000 : 0xc37d8000
            
            zmm6[0] = zmm6[0] f* zmm11.d
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm6[0] = zmm6[0] f+ zmm9.d
            int32_t rax_32 = int.d(zmm6[0]) s>> 1
            char rcx_28
            
            if (rax_32 s>= 0xffffff80)
                rcx_28 = 0x7f
                
                if (rax_32 s< 0x7f)
                    rcx_28 = rax_32.b
            else
                rcx_28 = -0x80
            
            zmm7[0] = zmm7[0] f* zmm11.d
            *(r14_1 + (r15_1 << 3) + 4) = rcx_28
            zmm7[0] = zmm7[0] + zmm7[0]
            zmm7[0] = zmm7[0] f+ zmm9.d
            int32_t rax_34 = int.d(zmm7[0]) s>> 1
            char rcx_29
            
            if (rax_34 s>= 0xffffff80)
                rcx_29 = 0x7f
                
                if (rax_34 s< 0x7f)
                    rcx_29 = rax_34.b
            else
                rcx_29 = -0x80
            
            zmm8[0] = zmm8[0] f* zmm11.d
            *(r14_1 + (r15_1 << 3) + 5) = rcx_29
            zmm8[0] = zmm8[0] f+ zmm8[0]
            zmm8[0] = zmm8[0] f+ zmm9.d
            int32_t rax_36 = int.d(zmm8[0]) s>> 1
            char rcx_30
            
            if (rax_36 s>= 0xffffff80)
                rcx_30 = 0x7f
                
                if (rax_36 s< 0x7f)
                    rcx_30 = rax_36.b
            else
                rcx_30 = -0x80
            
            *(r14_1 + (r15_1 << 3) + 6) = rcx_30
            int32_t rax_38 = int.d(zmm1_3.d) s>> 1
            char rcx_31
            
            if (rax_38 s>= 0xffffff80)
                rcx_31 = 0x7f
                
                if (rax_38 s< 0x7f)
                    rcx_31 = rax_38.b
            else
                rcx_31 = -0x80
            
            *(r14_1 + (r15_1 << 3) + 7) = rcx_31
        else
            zmm1_3.d = zmm1_3.d f* zmm12.d
            int16_t* rsi_6 = (zx.q(r15_1.d) << 4) + r14_1
            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
            zmm1_3.d = zmm1_3.d f+ zmm9.d
            int32_t rax_12 = int.d(zmm1_3.d) s>> 1
            int16_t rcx_16
            
            if (rax_12 s>= 0xffff8000)
                rcx_16 = 0x7fff
                
                if (rax_12 s< 0x7fff)
                    rcx_16 = rax_12.w
            else
                rcx_16 = -0x8000
            
            zmm3_1 = var_158_2:4.d
            *rsi_6 = rcx_16
            zmm1_3.d = zmm3_1.d f* zmm12.d
            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
            zmm1_3.d = zmm1_3.d f+ zmm9.d
            int32_t rax_14 = int.d(zmm1_3.d) s>> 1
            int16_t rcx_17
            
            if (rax_14 s>= 0xffff8000)
                rcx_17 = 0x7fff
                
                if (rax_14 s< 0x7fff)
                    rcx_17 = rax_14.w
            else
                rcx_17 = -0x8000
            
            zmm2_1 = var_158_2:8.d
            rsi_6[1] = rcx_17
            zmm1_3.d = zmm2_1.d f* zmm12.d
            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
            zmm1_3.d = zmm1_3.d f+ zmm9.d
            int32_t rax_16 = int.d(zmm1_3.d) s>> 1
            int16_t rcx_18
            
            if (rax_16 s>= 0xffff8000)
                rcx_18 = 0x7fff
                
                if (rax_16 s< 0x7fff)
                    rcx_18 = rax_16.w
            else
                rcx_18 = -0x8000
            
            zmm0_4 = data_142d3f660
            int32_t var_128_1 = zmm8[0]
            float var_120_1 = temp0_15[0]
            rsi_6[2] = rcx_18
            float var_114_1 = var_148_1:4.d[0]
            int32_t var_110_1 = var_148_1:8.d[0]
            var_138 = zmm4_1[0]
            int32_t var_134_1 = zmm3_1[0]
            float var_130_1 = zmm2_1[0]
            float var_124_1 = temp0_10[0]
            float var_118_1 = var_148_1.d[0]
            rsi_6[3] = 0x7fff
            int32_t var_12c_1 = 0
            int32_t var_11c_1 = 0
            int32_t var_10c_1 = 0
            uint128_t var_108_1 = zmm0_4
            int32_t zmm13_1
            uint128_t zmm14_1
            uint128_t zmm15_1
            zmm0_4, zmm6, zmm7, zmm8, zmm9, zmm11, zmm12, zmm13_1, zmm14_1, zmm15_1 =
                sub_14062b8d0(&var_138)
            
            zmm1_3 = zmm0_4.d f>= zmm13_1 ? zmm15_1 : zmm14_1
            
            zmm6[0] = zmm6[0] f* zmm12.d
            zmm6[0] = zmm6[0] + zmm6[0]
            zmm6[0] = zmm6[0] f+ zmm9.d
            int32_t rax_18 = int.d(zmm6[0]) s>> 1
            int16_t rcx_20
            
            if (rax_18 s>= 0xffff8000)
                rcx_20 = 0x7fff
                
                if (rax_18 s< 0x7fff)
                    rcx_20 = rax_18.w
            else
                rcx_20 = -0x8000
            
            zmm7[0] = zmm7[0] f* zmm12.d
            rsi_6[4] = rcx_20
            zmm7[0] = zmm7[0] + zmm7[0]
            zmm7[0] = zmm7[0] f+ zmm9.d
            int32_t rax_20 = int.d(zmm7[0]) s>> 1
            int16_t rcx_21
            
            if (rax_20 s>= 0xffff8000)
                rcx_21 = 0x7fff
                
                if (rax_20 s< 0x7fff)
                    rcx_21 = rax_20.w
            else
                rcx_21 = -0x8000
            
            zmm8[0] = zmm8[0] f* zmm12.d
            rsi_6[5] = rcx_21
            zmm8[0] = zmm8[0] f+ zmm8[0]
            zmm8[0] = zmm8[0] f+ zmm9.d
            int32_t rax_22 = int.d(zmm8[0]) s>> 1
            int16_t rcx_22
            
            if (rax_22 s>= 0xffff8000)
                rcx_22 = 0x7fff
                
                if (rax_22 s< 0x7fff)
                    rcx_22 = rax_22.w
            else
                rcx_22 = -0x8000
            
            rsi_6[6] = rcx_22
            int32_t rax_24 = int.d(zmm1_3.d) s>> 1
            
            if (rax_24 s>= 0xffff8000)
                int16_t rcx_23 = 0x7fff
                
                if (rax_24 s< 0x7fff)
                    rcx_23 = rax_24.w
                
                rsi_6[7] = rcx_23
                rsi_3 = var_168
            else
                rsi_6[7] = 0x8000
                rsi_3 = var_168
        
        void* r11_2 = var_188
        int64_t r9_1 = arg1[0xf]
        int64_t r8_2 = zx.q(arg1[0x11].d) * r15_1
        zmm0_4 = *(r11_2 - 4)
        zmm1_3 = *r11_2
        
        if (arg1[0x12].b == 0)
            var_168.d = zmm0_4.d
            int32_t rdx_12 = var_168.d
            rdi_2 = (rdx_12 u>> 0x1f).w << 0xf | (rdi_2 & 0x7fff)
            uint16_t rax_41 = (rdx_12 u>> 0x17).w
            uint32_t rcx_34 = zx.d(rax_41.b)
            
            if (rcx_34 u<= 0x70)
                rdi_2 &= 0x8000
                
                if (0x70 - rcx_34 + 0xe s<= 0x18)
                    int32_t rdx_14 = (rdx_12 & 0x7fffff) | 0x800000
                    rdi_2 |= (rdx_14 u>> (0x70 - rcx_34 + 0xe).b).w & 0x3ff
                    
                    if (((rdx_14 u>> ((0x70 - rcx_34).b + 0xd)).b & 1) != 0)
                        rdi_2 += 1
            else if (rcx_34 u< 0x8f)
                rdi_2 = (rdi_2 & 0x8000) | ((rdx_12 u>> 0xd).w & 0x3ff)
                    | ((rax_41 - 0x10) & 0x1f) << 0xa
            else
                rdi_2 = (rdi_2 & 0xfbff) | 0x7bff
            
            var_168.d = zmm1_3.d
            int32_t rdx_17 = var_168.d
            *(r9_1 + (r8_2 << 2)) = rdi_2
            rbx_3 = (rdx_17 u>> 0x1f).w << 0xf | (rbx_3 & 0x7fff)
            uint16_t rax_45 = (rdx_17 u>> 0x17).w
            uint32_t rcx_39 = zx.d(rax_45.b)
            
            if (rcx_39 u> 0x70)
                if (rcx_39 u< 0x8f)
                    rax_45 = ((rax_45 - 0x10) & 0x1f) << 0xa | ((rdx_17 u>> 0xd).w & 0x3ff)
                    rbx_3 &= 0x8000
                else
                    rbx_3 &= 0xfbff
                    rax_45 = 0x7bff
                
                rbx_3 |= rax_45
            else
                rbx_3 &= 0x8000
                
                if (0x70 - rcx_39 + 0xe s<= 0x18)
                    int32_t rdx_19 = (rdx_17 & 0x7fffff) | 0x800000
                    rbx_3 |= (rdx_19 u>> (0x70 - rcx_39 + 0xe).b).w & 0x3ff
                    
                    if (((rdx_19 u>> ((0x70 - rcx_39).b + 0xd)).b & 1) != 0)
                        rbx_3 += 1
            
            *(r9_1 + (r8_2 << 2) + 2) = rbx_3
        else
            *(r9_1 + (r8_2 << 3)) = zmm0_4.d
            *(r9_1 + (r8_2 << 3) + 4) = zmm1_3.d
        
        zmm3_1 = data_142dd3f80
        rsi_3 = zx.q(rsi_3.d + 1)
        zmm4_1 = data_142dd3fd0
        r11_1 = r11_2 + 0x58
        zmm7 = data_142dd3fb0
        zmm2_1 = zx.o(0)
        var_168 = rsi_3
        var_188 = r11_1
    while (rsi_3.d s< var_170.d)
    
    r13 = var_178

if (r13 != 0)
    sub_140a74f90(r13)

__security_check_cookie(rax_1 ^ &var_1a8)
return arg1
