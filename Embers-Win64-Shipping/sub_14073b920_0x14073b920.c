// 函数: sub_14073b920
// 地址: 0x14073b920
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
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
uint8_t rax_7 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int64_t result_9

if ((not.b(rax_7) & 1) == 0)
    result_9 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_8 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_8 += 1
            rdx_2 = rax_8 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    result_9 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_218
sub_140742c10(&var_218, arg2)

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

int64_t result = *(rdi + 0x58)
int64_t* r13 = nullptr
int64_t result_1 = result
int64_t result_8 = 0
int32_t rdx_6

if (result == 0)
    rdx_6 = 0
else
    int64_t rcx_5 = **(result + 0x58)
    result = sx.q(rdi[0x1a])
    r13 = *(rcx_5 + (result << 3))
    
    if (rdi[0x86].b == 0)
        rdx_6 = 0
    else
        result = sub_140d3c6e0(rdi)
        int64_t result_7 = result
        
        if (result == 0)
            result_8 = &r13[0x27]
        else
            int64_t rax_12 = sub_142591550()
            void* rcx_7 = *(result_7 + 0x10)
            result = rax_12 + 0x30
            int64_t rdx_4 = sx.q(*(result + 8))
            
            if (rdx_4.d s> *(rcx_7 + 0x38) || *(*(rcx_7 + 0x30) + (rdx_4 << 3)) != result
                    || *(result_7 + 0x430) == 0)
                result_8 = &r13[0x27]
            else
                result = sub_141f66050(result_7, rdi[0x1a])
                result_8 = result
        
        if (result_8 == 0)
            rdx_6 = 0
        else
            rdx_6 = *(r13 + 0xec)

int32_t arg_18 = rdx_6
int128_t zmm9
zmm9.d = 1f f/ rdi[0x64]
char var_ae
char var_ad
char arg_10

if (var_ae == 0 && var_ad == 0)
    arg_10 = 0

char var_ac

if (var_ae != 0 || var_ad != 0 || var_ac != 0)
    arg_10 = 1

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint64_t rcx_11 = zx.q(rax_7) << 2
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint64_t var_228_1 = rcx_11
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    do
        result = result_9
        int32_t rsi_1 = rdx_6
        result_9 += rcx_11
        
        if (*result s<= rdx_6)
            rsi_1 = *result
        
        char var_b0
        char var_af
        
        if (var_b0 != 0 || var_af != 0)
            int32_t var_280
            sub_142316040(&var_280, result_1, r13, result_8, rsi_1)
            void* var_208
            float* rdx_8 = var_208
            int32_t var_25c_1 = 0x3f800000
            float var_268[0x4]
            var_268[0] = var_280[0]
            int64_t var_2a8_1 = 0
            float temp0_1[0x4] = _mm_shuffle_ps(var_268, var_268, 0xe1)
            int32_t var_27c
            temp0_1[0] = var_27c[0]
            int32_t var_2a0_1 = 0
            float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
            int32_t var_278
            temp0_2[0] = var_278[0]
            float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
            var_268 = temp0_3
            float temp0_5[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rdi + 0x100))
            float temp0_7[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rdi + 0xe0))
            float temp0_9[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rdi + 0xf0))
            float temp0_11[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rdi + 0xd0))
            int32_t var_214
            var_208 = &rdx_8[sx.q(var_214)]
            float temp0_14[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
            *rdx_8 = temp0_14[0]
            void* var_1f0
            float* rdx_9 = var_1f0
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
            int32_t var_1fc
            var_1f0 = &rdx_9[sx.q(var_1fc)]
            *rdx_9 = temp0_15[0]
            void* var_1d8
            float* rdx_10 = var_1d8
            int32_t result_2
            result = sx.q(result_2)
            var_1d8 = &rdx_10[result]
            *rdx_10 = temp0_16[0]
            
            if (var_af != 0)
                float var_298
                zmm6 = sub_142316040(&var_298, result_1, r13, result_8, rsi_1)
                void* var_1c0
                float* rdx_12 = var_1c0
                int32_t var_24c_1 = 0x3f800000
                float var_258[0x4]
                var_258[0] = var_298[0]
                int64_t var_2a8_2 = 0
                float temp0_17[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
                float var_294
                temp0_17[0] = var_294[0]
                int32_t var_2a0_2 = 0
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                float var_290
                temp0_18[0] = var_290[0]
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
                var_258 = temp0_19
                float temp0_21[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(rdi + 0x180))
                float temp0_23[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(rdi + 0x160))
                float temp0_25[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(rdi + 0x170))
                float temp0_27[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *(rdi + 0x150))
                int32_t var_1cc
                var_1c0 = &rdx_12[sx.q(var_1cc)]
                float temp0_30[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
                var_298 = temp0_30[0]
                zmm6[0] = zmm6[0] - temp0_30[0]
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
                var_294 = temp0_31[0]
                temp0_15[0] = temp0_15[0] - temp0_31[0]
                float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
                var_290 = temp0_32[0]
                temp0_16[0] = temp0_16[0] - temp0_32[0]
                zmm6[0] = zmm6[0] f* zmm9.d
                temp0_15[0] = temp0_15[0] f* zmm9.d
                *rdx_12 = zmm6[0]
                void* var_1a8
                float* rdx_13 = var_1a8
                temp0_16[0] = temp0_16[0] f* zmm9.d
                int32_t var_1b4
                var_1a8 = &rdx_13[sx.q(var_1b4)]
                *rdx_13 = temp0_15[0]
                void* var_190
                float* rdx_14 = var_190
                int32_t result_3
                result = sx.q(result_3)
                var_190 = &rdx_14[result]
                *rdx_14 = temp0_16[0]
        
        if (arg_10 != 0)
            float zmm2[0x4] = data_143dbb1f8
            float zmm1[0x4] = data_143dbb1fc
            float zmm0[0x4] = data_143dbb200
            int32_t var_2d8
            float var_2c8
            var_2d8.q = &var_2c8
            var_2c8 = zmm2[0]
            float var_2c4_1 = zmm1[0]
            float var_2c0_1 = zmm0[0]
            float var_2b8 = zmm2[0]
            float var_2b4_1 = zmm1[0]
            float var_2b0_1 = zmm0[0]
            float zmm10_1[0x4]
            int32_t zmm11_1
            int32_t zmm12_1
            result, zmm9, zmm10_1, zmm11_1, zmm12_1 =
                sub_142315fc0(result_1, r13, result_8, rsi_1, var_2d8, &var_2b8)
            float zmm3_3[0x4]
            float zmm5_1[0x4]
            
            if (var_ae != 0)
                zmm5_1 = zx.o(0)
                void* var_e8
                float* rdx_16 = var_e8
                int32_t var_23c_1 = 0
                float var_248[0x4]
                var_248[0] = var_2c8[0]
                int64_t var_2a8_3 = 0
                float temp0_33[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                temp0_33[0] = var_2c4_1[0]
                int32_t var_2a0_3 = 0
                float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
                temp0_34[0] = var_2c0_1[0]
                float temp0_35[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
                var_248 = temp0_35
                float temp0_37[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_35, temp0_35, 0xff), *(rdi + 0x100))
                float temp0_39[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_35, temp0_35, 0xaa), *(rdi + 0xf0))
                float temp0_41[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_35, temp0_35, 0x55), *(rdi + 0xe0))
                float temp0_42[0x4] = _mm_add_ps(temp0_37, temp0_39)
                float temp0_44[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_35, temp0_35, 0), *(rdi + 0xd0))
                int32_t var_f4
                var_e8 = &rdx_16[sx.q(var_f4)]
                zmm5_1[0] = zmm10_1[0]
                zmm3_3 = zx.o(0)
                float temp0_46[0x4] = _mm_add_ps(temp0_42, _mm_add_ps(temp0_41, temp0_44))
                temp0_46[0] = temp0_46[0] * temp0_46[0]
                float temp0_47[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0x55)
                float temp0_48[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xaa)
                temp0_47[0] = temp0_47[0] * temp0_47[0]
                temp0_47[0] = temp0_47[0] + temp0_46[0]
                temp0_48[0] = temp0_48[0] * temp0_48[0]
                temp0_47[0] = temp0_47[0] + temp0_48[0]
                zmm3_3[0] = temp0_47[0]
                float temp0_49[0x4] = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * zmm5_1[0]
                temp0_49[0] = temp0_49[0] * temp0_49[0]
                zmm3_3[0] = zmm3_3[0] * temp0_49[0]
                zmm5_1[0] = zmm5_1[0] - zmm3_3[0]
                temp0_49[0] = temp0_49[0] * zmm5_1[0]
                temp0_49[0] = temp0_49[0] + temp0_49[0]
                temp0_49[0] = temp0_49[0] * temp0_49[0]
                zmm3_3[0] = zmm3_3[0] * temp0_49[0]
                zmm5_1[0] = zmm5_1[0] - zmm3_3[0]
                temp0_49[0] = temp0_49[0] * zmm5_1[0]
                temp0_49[0] = temp0_49[0] + temp0_49[0]
                temp0_46[0] = temp0_46[0] * temp0_49[0]
                temp0_47[0] = temp0_47[0] * temp0_49[0]
                var_2c8 = temp0_46[0]
                temp0_48[0] = temp0_48[0] * temp0_49[0]
                var_2c4_1 = temp0_47[0]
                var_2c0_1 = temp0_48[0]
                *rdx_16 = temp0_46[0]
                void* var_d0
                float* rdx_17 = var_d0
                int32_t var_dc
                var_d0 = &rdx_17[sx.q(var_dc)]
                *rdx_17 = temp0_47[0]
                void* var_b8
                float* rdx_18 = var_b8
                int32_t result_6
                result = sx.q(result_6)
                var_b8 = &rdx_18[result]
                *rdx_18 = temp0_48[0]
            
            if (var_ad != 0)
                zmm3_3 = var_2b0_1
                zmm7 = var_2b4_1
                zmm8 = zmm3_3
                zmm3_3[0] = zmm3_3[0] * var_2c8
                zmm7[0] = zmm7[0] * var_2c0_1
                zmm2 = var_2b8
                zmm8[0] = zmm8[0] * var_2c4_1
                zmm6 = zmm2
                zmm6[0] = zmm6[0] * var_2c0_1
                zmm7[0] = zmm7[0] * var_2c8
                zmm8[0] = zmm8[0] - zmm7[0]
                zmm2[0] = zmm2[0] * var_2c4_1
                zmm6[0] = zmm6[0] - zmm3_3[0]
                zmm7[0] = zmm7[0] - zmm2[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8[0] = zmm8[0] + zmm6[0]
                zmm8[0] = zmm8[0] + zmm7[0]
                
                if (not(zmm8[0] f== zmm11_1))
                    if (zmm8[0] f>= zmm12_1)
                        float zmm4_1[0x4] = zx.o(0)
                        zmm4_1[0] = zmm10_1[0]
                        float temp0_50[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
                        zmm8[0] = zmm8[0] * zmm4_1[0]
                        temp0_50[0] = temp0_50[0] * temp0_50[0]
                        zmm8[0] = zmm8[0] * temp0_50[0]
                        zmm4_1[0] = zmm4_1[0] - zmm8[0]
                        temp0_50[0] = temp0_50[0] * zmm4_1[0]
                        temp0_50[0] = temp0_50[0] + temp0_50[0]
                        temp0_50[0] = temp0_50[0] * temp0_50[0]
                        zmm8[0] = zmm8[0] * temp0_50[0]
                        zmm4_1[0] = zmm4_1[0] - zmm8[0]
                        temp0_50[0] = temp0_50[0] * zmm4_1[0]
                        temp0_50[0] = temp0_50[0] + temp0_50[0]
                        zmm6[0] = zmm6[0] * temp0_50[0]
                        temp0_50[0] = temp0_50[0] * zmm8[0]
                        temp0_50[0] = temp0_50[0] * zmm7[0]
                        zmm8 = temp0_50
                        zmm7 = temp0_50
                    else
                        zmm8 = data_143dbb1f8
                        zmm6 = data_143dbb1fc
                        zmm7 = data_143dbb200
                
                void* var_130
                float* rdx_19 = var_130
                int32_t var_13c
                var_130 = &rdx_19[sx.q(var_13c)]
                *rdx_19 = zmm8[0]
                void* var_118
                float* rdx_20 = var_118
                int32_t var_124
                var_118 = &rdx_20[sx.q(var_124)]
                *rdx_20 = zmm6[0]
                float* var_100
                float* rdx_21 = var_100
                int32_t result_5
                result = sx.q(result_5)
                var_100 = &rdx_21[result]
                *rdx_21 = zmm7[0]
            
            if (var_ac != 0)
                zmm5_1 = zx.o(0)
                void* var_178
                float* rdx_22 = var_178
                int32_t var_22c_1 = 0
                float var_238[0x4]
                var_238[0] = var_2b8[0]
                int64_t var_2a8_4 = 0
                float temp0_51[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                temp0_51[0] = var_2b4_1[0]
                int32_t var_2a0_4 = 0
                float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc6)
                temp0_52[0] = var_2b0_1[0]
                float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc9)
                var_238 = temp0_53
                float temp0_55[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), *(rdi + 0x100))
                float temp0_57[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), *(rdi + 0xf0))
                float temp0_59[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_53, temp0_53, 0x55), *(rdi + 0xe0))
                float temp0_60[0x4] = _mm_add_ps(temp0_55, temp0_57)
                float temp0_62[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_53, temp0_53, 0), *(rdi + 0xd0))
                int32_t var_184
                var_178 = &rdx_22[sx.q(var_184)]
                zmm5_1[0] = zmm10_1[0]
                zmm3_3 = zx.o(0)
                float temp0_64[0x4] = _mm_add_ps(temp0_60, _mm_add_ps(temp0_59, temp0_62))
                temp0_64[0] = temp0_64[0] * temp0_64[0]
                float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                float temp0_66[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xaa)
                temp0_65[0] = temp0_65[0] * temp0_65[0]
                temp0_65[0] = temp0_65[0] + temp0_64[0]
                temp0_66[0] = temp0_66[0] * temp0_66[0]
                temp0_65[0] = temp0_65[0] + temp0_66[0]
                zmm3_3[0] = temp0_65[0]
                float temp0_67[0x4] = _mm_rsqrt_ss(zmm3_3[0], zmm3_3[0])
                zmm3_3[0] = zmm3_3[0] * zmm5_1[0]
                temp0_67[0] = temp0_67[0] * temp0_67[0]
                zmm3_3[0] = zmm3_3[0] * temp0_67[0]
                zmm5_1[0] = zmm5_1[0] - zmm3_3[0]
                temp0_67[0] = temp0_67[0] * zmm5_1[0]
                temp0_67[0] = temp0_67[0] + temp0_67[0]
                temp0_67[0] = temp0_67[0] * temp0_67[0]
                zmm3_3[0] = zmm3_3[0] * temp0_67[0]
                zmm5_1[0] = zmm5_1[0] - zmm3_3[0]
                temp0_67[0] = temp0_67[0] * zmm5_1[0]
                temp0_67[0] = temp0_67[0] + temp0_67[0]
                temp0_64[0] = temp0_64[0] * temp0_67[0]
                temp0_65[0] = temp0_65[0] * temp0_67[0]
                var_2b8 = temp0_64[0]
                temp0_66[0] = temp0_66[0] * temp0_67[0]
                float var_2b4_2 = temp0_65[0]
                float var_2b0_2 = temp0_66[0]
                *rdx_22 = temp0_64[0]
                void* var_160
                float* rdx_23 = var_160
                int32_t var_16c
                var_160 = &rdx_23[sx.q(var_16c)]
                *rdx_23 = temp0_65[0]
                void* var_148
                float* rdx_24 = var_148
                int32_t result_4
                result = sx.q(result_4)
                var_148 = &rdx_24[result]
                *rdx_24 = temp0_66[0]
        
        rdx_6 = arg_18
        i_2 += 1
        rcx_11 = var_228_1
    while (i_2 s< *(arg2 + 0x40))

return result
