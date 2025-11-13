// 函数: sub_14073a890
// 地址: 0x14073a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_3)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
uint32_t rcx_2 = zx.d(rax[1])
uint8_t r12_1 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    rsi_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_248
sub_140742c10(&var_248, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

void* rax_10 = *(rdi + 0x58)
void* r13 = nullptr
void* rdx_4 = nullptr

if (rax_10 != 0)
    r13 = *(**(rax_10 + 0x58) + (sx.q(rdi[0x1a]) << 3))
    
    if (rdi[0x86].b != 0)
        void* rax_13 = sub_140d3c6e0(rdi)
        void* rax_14
        void* rcx_7
        int64_t rdx_5
        
        if (rax_13 != 0)
            rax_14 = sub_142591550()
            rcx_7 = *(rax_13 + 0x10)
            rdx_5 = sx.q(*(rax_14 + 0x38))
        
        if (rax_13 == 0 || rdx_5.d s> *(rcx_7 + 0x38)
                || *(*(rcx_7 + 0x30) + (rdx_5 << 3)) != rax_14 + 0x30 || *(rax_13 + 0x430) == 0)
            rdx_4 = r13 + 0x138
        else
            rdx_4 = sub_141f66050(rax_13, rdi[0x1a])

void* r11_1 = *(rdi + 0x70)
int32_t result = (*(rdi + 0x68)).d
int32_t r10_1

if (rdx_4 == 0)
    r10_1 = 0
else
    r10_1 = *(r13 + 0xec)

int128_t zmm14
zmm14.d = 1f f/ rdi[0x64]
char var_de
char var_dd
char arg_10

if (var_de == 0 && var_dd == 0)
    arg_10 = 0

char var_dc

if (var_de != 0 || var_dd != 0 || var_dc != 0)
    arg_10 = 1

if (*(arg2 + 0x40) s> 0)
    float zmm7[0x4] = 0x3f000000
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    
    do
        int32_t* rcx_10 = rsi_1
        int32_t r9_1 = r10_1
        rsi_1 = &rsi_1[zx.q(r12_1)]
        
        if (*rcx_10 s<= r10_1)
            r9_1 = *rcx_10
        
        char var_e0
        char var_df
        
        if (var_e0 != 0 || var_df != 0)
            void* var_238
            float* r8_1 = var_238
            int64_t r12_2 = sx.q(result) * 0x38
            int32_t var_29c_1 = 0x3f800000
            int64_t var_2d8_1 = 0
            int64_t r15_2 = sx.q(r9_1) * 3
            int32_t var_2d0_1 = 0
            int64_t rcx_16 = *((sx.q(*(r11_1 + 0x34)) << 4) + *(r11_1 + 0x80) + r12_2 + 8)
            float zmm0[0x4] = zx.o(*(rcx_16 + (r15_2 << 2)))
            int32_t rcx_17 = *(rcx_16 + (r15_2 << 2) + 8)
            float var_2a8[0x4]
            var_2a8[0] = zmm0[0]
            float temp0_1[0x4] = _mm_shuffle_ps(var_2a8, var_2a8, 0xe1)
            temp0_1[0] = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            temp0_3[0] = rcx_17[0]
            float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
            var_2a8 = temp0_4
            float temp0_6[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), *(rdi + 0x100))
            float temp0_8[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), *(rdi + 0xe0))
            float temp0_10[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), *(rdi + 0xf0))
            float temp0_12[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), *(rdi + 0xd0))
            int32_t var_244
            var_238 = &r8_1[sx.q(var_244)]
            float temp0_15[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_6, temp0_10), _mm_add_ps(temp0_8, temp0_12))
            *r8_1 = temp0_15[0]
            void* var_220
            float* r8_2 = var_220
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x55)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xaa)
            int32_t var_22c
            var_220 = &r8_2[sx.q(var_22c)]
            *r8_2 = temp0_16[0]
            void* var_208
            float* r8_3 = var_208
            int32_t var_214
            var_208 = &r8_3[sx.q(var_214)]
            *r8_3 = temp0_17[0]
            
            if (var_df != 0)
                void* var_1f0
                float* r8_4 = var_1f0
                int32_t var_28c_1 = 0x3f800000
                int64_t var_2d8_2 = 0
                int64_t rcx_25 = *(((sx.q(*(r11_1 + 0x34)) ^ 1) << 4) + *(r11_1 + 0x80) + r12_2 + 8)
                int32_t var_2d0_2 = 0
                zmm0 = zx.o(*(rcx_25 + (r15_2 << 2)))
                int32_t rcx_26 = *(rcx_25 + (r15_2 << 2) + 8)
                float var_298[0x4]
                var_298[0] = zmm0[0]
                float temp0_18[0x4] = _mm_shuffle_ps(var_298, var_298, 0xe1)
                temp0_18[0] = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
                float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
                temp0_20[0] = rcx_26[0]
                float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
                var_298 = temp0_21
                float temp0_23[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xff), *(rdi + 0x180))
                float temp0_25[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0xaa), *(rdi + 0x170))
                float temp0_27[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0x55), *(rdi + 0x160))
                int32_t var_1fc
                var_1f0 = &r8_4[sx.q(var_1fc)]
                float temp0_32[0x4] = _mm_add_ps(_mm_add_ps(temp0_23, temp0_25), 
                    _mm_add_ps(temp0_27, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0), *(rdi + 0x150))))
                temp0_15[0] = temp0_15[0] - temp0_32[0]
                float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
                temp0_16[0] = temp0_16[0] - temp0_33[0]
                float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xaa)
                temp0_17[0] = temp0_17[0] - temp0_34[0]
                temp0_15[0] = temp0_15[0] f* zmm14.d
                temp0_16[0] = temp0_16[0] f* zmm14.d
                *r8_4 = temp0_15[0]
                void* var_1d8
                float* r8_5 = var_1d8
                temp0_17[0] = temp0_17[0] f* zmm14.d
                int32_t var_1e4
                var_1d8 = &r8_5[sx.q(var_1e4)]
                *r8_5 = temp0_16[0]
                void* var_1c0
                float* r8_6 = var_1c0
                int32_t var_1cc
                var_1c0 = &r8_6[sx.q(var_1cc)]
                *r8_6 = temp0_17[0]
        
        if (arg_10 != 0)
            int32_t r8_7 = r9_1 * 2
            int64_t r9_2 = *(sx.q(result) * 0x38 + *(r11_1 + 0x80) + 0x28)
            int64_t rdx_14 = sx.q(r8_7) * 3
            int32_t rcx_33 = *(r9_2 + (rdx_14 << 2) + 8)
            int64_t var_2c8_1 = *(r9_2 + (rdx_14 << 2))
            int64_t rdx_15 = (sx.q(r8_7) + 1) * 3
            int32_t rcx_36 = *(r9_2 + (rdx_15 << 2) + 8)
            int64_t var_2b8_1 = *(r9_2 + (rdx_15 << 2))
            float zmm3[0x4]
            
            if (var_de == 0)
                zmm8 = rcx_33
                zmm10 = var_2c8_1:4.d
                zmm9 = var_2c8_1.d
            else
                void* var_118
                float* r8_8 = var_118
                int32_t var_27c_1 = 0
                float var_288[0x4]
                var_288[0] = var_2c8_1.d[0]
                int64_t var_2d8_3 = 0
                float temp0_35[0x4] = _mm_shuffle_ps(var_288, var_288, 0xe1)
                temp0_35[0] = var_2c8_1:4.d[0]
                int32_t var_2d0_3 = 0
                float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
                temp0_36[0] = rcx_33[0]
                float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc9)
                var_288 = temp0_37
                float temp0_39[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0xff), *(rdi + 0x100))
                float temp0_41[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0xaa), *(rdi + 0xf0))
                float temp0_43[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0x55), *(rdi + 0xe0))
                int32_t var_124
                var_118 = &r8_8[sx.q(var_124)]
                zmm3 = zx.o(0)
                zmm9 = _mm_add_ps(_mm_add_ps(temp0_39, temp0_41), 
                    _mm_add_ps(temp0_43, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_37, temp0_37, 0), *(rdi + 0xd0))))
                zmm9[0] = zmm9[0] * zmm9[0]
                zmm10 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                zmm8 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                zmm10[0] = zmm10[0] * zmm10[0]
                zmm10[0] = zmm10[0] + zmm9[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm10[0] = zmm10[0] + zmm8[0]
                zmm3[0] = zmm10[0]
                float temp0_51[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm7[0]
                temp0_51[0] = temp0_51[0] * temp0_51[0]
                zmm3[0] = zmm3[0] * temp0_51[0]
                zmm7[0] = zmm7[0] - zmm3[0]
                temp0_51[0] = temp0_51[0] * zmm7[0]
                temp0_51[0] = temp0_51[0] + temp0_51[0]
                temp0_51[0] = temp0_51[0] * temp0_51[0]
                zmm3[0] = zmm3[0] * temp0_51[0]
                zmm7[0] = zmm7[0] - zmm3[0]
                temp0_51[0] = temp0_51[0] * zmm7[0]
                temp0_51[0] = temp0_51[0] + temp0_51[0]
                zmm9[0] = zmm9[0] * temp0_51[0]
                zmm10[0] = zmm10[0] * temp0_51[0]
                *r8_8 = zmm9[0]
                void* var_100
                float* r8_9 = var_100
                zmm8[0] = zmm8[0] * temp0_51[0]
                int32_t var_10c
                var_100 = &r8_9[sx.q(var_10c)]
                *r8_9 = zmm10[0]
                void* var_e8
                float* r8_10 = var_e8
                int32_t var_f4
                var_e8 = &r8_10[sx.q(var_f4)]
                *r8_10 = zmm8[0]
            
            zmm11 = rcx_36
            zmm12 = var_2b8_1:4.d
            zmm13 = var_2b8_1.d
            
            if (var_dd != 0)
                zmm6 = zmm11
                zmm12[0] = zmm12[0] * zmm8[0]
                zmm7 = zmm13
                zmm7[0] = zmm7[0] * zmm8[0]
                zmm8 = zmm12
                zmm6[0] = zmm6[0] * zmm10[0]
                zmm8[0] = zmm8[0] * zmm9[0]
                zmm6[0] = zmm6[0] - zmm12[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm7[0] = zmm7[0] - zmm11[0]
                zmm13[0] = zmm13[0] * zmm10[0]
                zmm8[0] = zmm8[0] - zmm13[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                
                if (not(zmm7[0] == 1f))
                    if (zmm7[0] >= 9.99999994e-09f)
                        float zmm4[0x4] = 0x3f000000
                        float temp0_52[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                        float zmm2[0x4] = 0x3f000000
                        zmm7[0] = zmm7[0] * 0.5f
                        temp0_52[0] = temp0_52[0] * temp0_52[0]
                        zmm7[0] = zmm7[0] * temp0_52[0]
                        zmm2[0] = 0.5f - zmm7[0]
                        temp0_52[0] = temp0_52[0] * zmm2[0]
                        temp0_52[0] = temp0_52[0] + temp0_52[0]
                        temp0_52[0] = temp0_52[0] * temp0_52[0]
                        zmm7[0] = zmm7[0] * temp0_52[0]
                        zmm4[0] = 0.5f - zmm7[0]
                        temp0_52[0] = temp0_52[0] * zmm4[0]
                        temp0_52[0] = temp0_52[0] + temp0_52[0]
                        temp0_52[0] = temp0_52[0] * zmm6[0]
                        temp0_52[0] = temp0_52[0] * zmm7[0]
                        temp0_52[0] = temp0_52[0] * zmm8[0]
                        zmm6 = temp0_52
                        zmm7 = temp0_52
                        zmm8 = temp0_52
                    else
                        zmm6 = data_143dbb1f8
                        zmm7 = data_143dbb1fc
                        zmm8 = data_143dbb200
                
                void* var_160
                float* r8_11 = var_160
                int32_t var_16c
                var_160 = &r8_11[sx.q(var_16c)]
                *r8_11 = zmm6[0]
                float* var_148
                float* r8_12 = var_148
                int32_t var_154
                var_148 = &r8_12[sx.q(var_154)]
                *r8_12 = zmm7[0]
                void* var_130
                float* r8_13 = var_130
                zmm7 = 0x3f000000
                int32_t var_13c
                var_130 = &r8_13[sx.q(var_13c)]
                *r8_13 = zmm8[0]
            
            if (var_dc != 0)
                void* var_1a8
                float* r8_14 = var_1a8
                zmm3 = zx.o(0)
                int32_t var_26c_1 = 0
                float var_278[0x4]
                var_278[0] = zmm13[0]
                int64_t var_2d8_4 = 0
                float temp0_53[0x4] = _mm_shuffle_ps(var_278, var_278, 0xe1)
                temp0_53[0] = zmm12[0]
                int32_t var_2d0_4 = 0
                float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc6)
                temp0_54[0] = zmm11[0]
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xc9)
                var_278 = temp0_55
                float temp0_57[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), *(rdi + 0x100))
                float temp0_59[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_55, temp0_55, 0xaa), *(rdi + 0xf0))
                float temp0_61[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_55, temp0_55, 0x55), *(rdi + 0xe0))
                int32_t var_1b4
                var_1a8 = &r8_14[sx.q(var_1b4)]
                float temp0_66[0x4] = _mm_add_ps(_mm_add_ps(temp0_57, temp0_59), 
                    _mm_add_ps(temp0_61, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_55, temp0_55, 0), *(rdi + 0xd0))))
                temp0_66[0] = temp0_66[0] * temp0_66[0]
                float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
                float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)
                temp0_67[0] = temp0_67[0] * temp0_67[0]
                temp0_67[0] = temp0_67[0] + temp0_66[0]
                temp0_68[0] = temp0_68[0] * temp0_68[0]
                temp0_67[0] = temp0_67[0] + temp0_68[0]
                zmm3[0] = temp0_67[0]
                float temp0_69[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] * zmm7[0]
                temp0_69[0] = temp0_69[0] * temp0_69[0]
                zmm3[0] = zmm3[0] * temp0_69[0]
                zmm7[0] = zmm7[0] - zmm3[0]
                temp0_69[0] = temp0_69[0] * zmm7[0]
                temp0_69[0] = temp0_69[0] + temp0_69[0]
                temp0_69[0] = temp0_69[0] * temp0_69[0]
                zmm3[0] = zmm3[0] * temp0_69[0]
                zmm7[0] = zmm7[0] - zmm3[0]
                temp0_69[0] = temp0_69[0] * zmm7[0]
                temp0_69[0] = temp0_69[0] + temp0_69[0]
                temp0_66[0] = temp0_66[0] * temp0_69[0]
                temp0_67[0] = temp0_67[0] * temp0_69[0]
                *r8_14 = temp0_66[0]
                void* var_190
                float* r8_15 = var_190
                temp0_68[0] = temp0_68[0] * temp0_69[0]
                int32_t var_19c
                var_190 = &r8_15[sx.q(var_19c)]
                *r8_15 = temp0_67[0]
                void* var_178
                float* r8_16 = var_178
                int32_t var_184
                var_178 = &r8_16[sx.q(var_184)]
                *r8_16 = temp0_68[0]
        
        zmm7 = 0x3f000000
        i_2 += 1
    while (i_2 s< *(arg2 + 0x40))

return result
