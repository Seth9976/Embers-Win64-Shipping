// 函数: sub_140739740
// 地址: 0x140739740
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
uint64_t result_8

if ((not.b(rax_7) & 1) == 0)
    result_8 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    result_8 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_218
sub_140742c10(&var_218, arg2)
void* rax_10 = sub_140d3c6e0(rdi)
void* var_298 = rax_10
void* rax_11
int64_t rax_12
void* rdx_4

if (rax_10 != 0)
    rax_11 = sub_142591550()
    rdx_4 = *(rax_10 + 0x10)
    rax_12 = sx.q(*(rax_11 + 0x38))

if (rax_10 == 0 || rax_12.d s> *(rdx_4 + 0x38)
        || *(*(rdx_4 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
    var_298 = nullptr

uint64_t result = *(rdi + 0x58)
int64_t* rdx_5 = nullptr
int64_t* var_2b8 = nullptr
uint64_t result_7 = 0

if (result != 0)
    int64_t rcx_6 = **(result + 0x58)
    result = sx.q(rdi[0x1a])
    rdx_5 = *(rcx_6 + (result << 3))
    var_2b8 = rdx_5
    
    if (rdi[0x86].b != 0)
        result = sub_140d3c6e0(rdi)
        uint64_t result_6 = result
        
        if (result == 0)
            rdx_5 = var_2b8
            result_7 = &rdx_5[0x27]
        else
            int64_t rax_15 = sub_142591550()
            void* rcx_8 = *(result_6 + 0x10)
            result = rax_15 + 0x30
            int64_t rdx_6 = sx.q(*(result + 8))
            
            if (rdx_6.d s> *(rcx_8 + 0x38) || *(*(rcx_8 + 0x30) + (rdx_6 << 3)) != result
                    || *(result_6 + 0x430) == 0)
                rdx_5 = var_2b8
                result_7 = &rdx_5[0x27]
            else
                result = sub_141f66050(result_6, rdi[0x1a])
                rdx_5 = var_2b8
                result_7 = result

void* r12 = *(rdi + 0x70)
int32_t r8_2

if (result_7 == 0)
    r8_2 = 0
else
    r8_2 = *(rdx_5 + 0xec)

int32_t arg_18 = r8_2
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
    uint64_t rcx_12 = zx.q(rax_7) << 2
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint64_t var_228_1 = rcx_12
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    do
        result = result_8
        int32_t rsi_1 = r8_2
        result_8 += rcx_12
        
        if (*result s<= r8_2)
            rsi_1 = *result
        
        char var_b0
        char var_af
        
        if (var_b0 != 0 || var_af != 0)
            int32_t var_280
            sub_1423162c0(&var_280, var_298, rsi_1, rdx_5, result_7, 
                ((sx.q(*(r12 + 0x34)) + 4) << 4) + r12)
            void* var_208
            float* rdx_9 = var_208
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
            var_208 = &rdx_9[sx.q(var_214)]
            float temp0_14[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
            *rdx_9 = temp0_14[0]
            void* var_1f0
            float* rdx_10 = var_1f0
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
            int32_t var_1fc
            var_1f0 = &rdx_10[sx.q(var_1fc)]
            *rdx_10 = temp0_15[0]
            void* var_1d8
            float* rdx_11 = var_1d8
            int32_t result_1
            result = sx.q(result_1)
            var_1d8 = &rdx_11[result]
            *rdx_11 = temp0_16[0]
            
            if (var_af != 0)
                float var_290
                int32_t zmm9_1
                zmm6, zmm7, zmm8, zmm9_1 = sub_1423162c0(&var_290, var_298, rsi_1, var_2b8, 
                    result_7, (((sx.q(*(r12 + 0x34)) ^ 1) + 4) << 4) + r12)
                void* var_1c0
                float* rdx_13 = var_1c0
                int32_t var_24c_1 = 0x3f800000
                float var_258[0x4]
                var_258[0] = var_290[0]
                int64_t var_2a8_2 = 0
                float temp0_17[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
                float var_28c
                temp0_17[0] = var_28c[0]
                int32_t var_2a0_2 = 0
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
                float var_288
                temp0_18[0] = var_288[0]
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
                var_1c0 = &rdx_13[sx.q(var_1cc)]
                float temp0_30[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
                var_290 = temp0_30[0]
                zmm6[0] = zmm6[0] - temp0_30[0]
                float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
                var_28c = temp0_31[0]
                zmm7[0] = zmm7[0] - temp0_31[0]
                float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
                var_288 = temp0_32[0]
                zmm8[0] = zmm8[0] - temp0_32[0]
                zmm6[0] = zmm6[0] f* zmm9_1
                zmm7[0] = zmm7[0] f* zmm9_1
                *rdx_13 = zmm6[0]
                void* var_1a8
                float* rdx_14 = var_1a8
                zmm8[0] = zmm8[0] f* zmm9_1
                int32_t var_1b4
                var_1a8 = &rdx_14[sx.q(var_1b4)]
                *rdx_14 = zmm7[0]
                void* var_190
                float* rdx_15 = var_190
                int32_t result_2
                result = sx.q(result_2)
                var_190 = &rdx_15[result]
                *rdx_15 = zmm8[0]
        
        if (arg_10 != 0)
            float zmm2[0x4] = data_143dbb1f8
            float zmm1[0x4] = data_143dbb1fc
            float zmm0[0x4] = data_143dbb200
            float var_2d8 = zmm2[0]
            float var_2d4_1 = zmm1[0]
            float var_2d0_1 = zmm0[0]
            float var_2c8 = zmm2[0]
            float var_2c4_1 = zmm1[0]
            float var_2c0_1 = zmm0[0]
            float zmm10_1[0x4]
            int32_t zmm11_1
            int32_t zmm12_1
            result, zmm10_1, zmm11_1, zmm12_1 = sub_1423161e0(var_298, rsi_1, var_2b8, result_7, 
                (((sx.q(*(r12 + 0x34)) ^ 1) + 4) << 4) + r12, &var_2d8, &var_2c8)
            float zmm3_3[0x4]
            float zmm5_1[0x4]
            
            if (var_ae != 0)
                zmm5_1 = zx.o(0)
                void* var_e8
                float* rdx_17 = var_e8
                int32_t var_23c_1 = 0
                float var_248[0x4]
                var_248[0] = var_2d8[0]
                int64_t var_2a8_3 = 0
                float temp0_33[0x4] = _mm_shuffle_ps(var_248, var_248, 0xe1)
                temp0_33[0] = var_2d4_1[0]
                int32_t var_2a0_3 = 0
                float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
                temp0_34[0] = var_2d0_1[0]
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
                var_e8 = &rdx_17[sx.q(var_f4)]
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
                var_2d8 = temp0_46[0]
                temp0_48[0] = temp0_48[0] * temp0_49[0]
                var_2d4_1 = temp0_47[0]
                var_2d0_1 = temp0_48[0]
                *rdx_17 = temp0_46[0]
                void* var_d0
                float* rdx_18 = var_d0
                int32_t var_dc
                var_d0 = &rdx_18[sx.q(var_dc)]
                *rdx_18 = temp0_47[0]
                void* var_b8
                float* rdx_19 = var_b8
                int32_t result_5
                result = sx.q(result_5)
                var_b8 = &rdx_19[result]
                *rdx_19 = temp0_48[0]
            
            if (var_ad != 0)
                zmm3_3 = var_2c0_1
                zmm6 = var_2c4_1
                zmm7 = zmm3_3
                zmm3_3[0] = zmm3_3[0] * var_2d8
                zmm6[0] = zmm6[0] * var_2d0_1
                zmm2 = var_2c8
                zmm7[0] = zmm7[0] * var_2d4_1
                zmm8 = zmm2
                zmm8[0] = zmm8[0] * var_2d0_1
                zmm6[0] = zmm6[0] * var_2d8
                zmm7[0] = zmm7[0] - zmm6[0]
                zmm2[0] = zmm2[0] * var_2d4_1
                zmm8[0] = zmm8[0] - zmm3_3[0]
                zmm6[0] = zmm6[0] - zmm2[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm7[0] = zmm7[0] + zmm8[0]
                zmm7[0] = zmm7[0] + zmm6[0]
                
                if (not(zmm7[0] f== zmm11_1))
                    if (zmm7[0] f>= zmm12_1)
                        float zmm4_1[0x4] = zx.o(0)
                        zmm4_1[0] = zmm10_1[0]
                        float temp0_50[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
                        zmm7[0] = zmm7[0] * zmm4_1[0]
                        temp0_50[0] = temp0_50[0] * temp0_50[0]
                        zmm7[0] = zmm7[0] * temp0_50[0]
                        zmm4_1[0] = zmm4_1[0] - zmm7[0]
                        temp0_50[0] = temp0_50[0] * zmm4_1[0]
                        temp0_50[0] = temp0_50[0] + temp0_50[0]
                        temp0_50[0] = temp0_50[0] * temp0_50[0]
                        zmm7[0] = zmm7[0] * temp0_50[0]
                        zmm4_1[0] = zmm4_1[0] - zmm7[0]
                        temp0_50[0] = temp0_50[0] * zmm4_1[0]
                        temp0_50[0] = temp0_50[0] + temp0_50[0]
                        temp0_50[0] = temp0_50[0] * zmm7[0]
                        temp0_50[0] = temp0_50[0] * zmm8[0]
                        temp0_50[0] = temp0_50[0] * zmm6[0]
                        zmm7 = temp0_50
                        zmm8 = temp0_50
                        zmm6 = temp0_50
                    else
                        zmm7 = data_143dbb1f8
                        zmm8 = data_143dbb1fc
                        zmm6 = data_143dbb200
                
                float* var_130
                float* rdx_20 = var_130
                int32_t var_13c
                var_130 = &rdx_20[sx.q(var_13c)]
                *rdx_20 = zmm7[0]
                float* var_118
                float* rdx_21 = var_118
                int32_t var_124
                var_118 = &rdx_21[sx.q(var_124)]
                *rdx_21 = zmm8[0]
                void* var_100
                float* rdx_22 = var_100
                int32_t result_4
                result = sx.q(result_4)
                var_100 = &rdx_22[result]
                *rdx_22 = zmm6[0]
            
            if (var_ac != 0)
                zmm5_1 = zx.o(0)
                void* var_178
                float* rdx_23 = var_178
                int32_t var_22c_1 = 0
                float var_238[0x4]
                var_238[0] = var_2c8[0]
                int64_t var_2a8_4 = 0
                float temp0_51[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                temp0_51[0] = var_2c4_1[0]
                int32_t var_2a0_4 = 0
                float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc6)
                temp0_52[0] = var_2c0_1[0]
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
                var_178 = &rdx_23[sx.q(var_184)]
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
                var_2c8 = temp0_64[0]
                temp0_66[0] = temp0_66[0] * temp0_67[0]
                float var_2c4_2 = temp0_65[0]
                float var_2c0_2 = temp0_66[0]
                *rdx_23 = temp0_64[0]
                void* var_160
                float* rdx_24 = var_160
                int32_t var_16c
                var_160 = &rdx_24[sx.q(var_16c)]
                *rdx_24 = temp0_65[0]
                void* var_148
                float* rdx_25 = var_148
                int32_t result_3
                result = sx.q(result_3)
                var_148 = &rdx_25[result]
                *rdx_25 = temp0_66[0]
        
        rdx_5 = var_2b8
        i_2 += 1
        r8_2 = arg_18
        rcx_12 = var_228_1
    while (i_2 s< *(arg2 + 0x40))

return result
