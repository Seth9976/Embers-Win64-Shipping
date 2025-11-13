// 函数: sub_14073c320
// 地址: 0x14073c320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_3)
int32_t rdx = 0

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
int32_t* rbx = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
uint8_t rax_7 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int64_t result_6

if ((not.b(rax_7) & 1) == 0)
    result_6 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    result_6 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_218
sub_140742c10(&var_218, arg2)
int64_t result = sub_140d3c6e0(rbx)

if (result != 0)
    result = sub_142591550()

void* r12 = *(rbx + 0x58)
int64_t* r13 = nullptr
int64_t result_7 = 0
int32_t rdx_6

if (r12 == 0)
    rdx_6 = 0
else
    result = sx.q(rbx[0x1a])
    r13 = *(**(r12 + 0x58) + (result << 3))
    
    if (rbx[0x86].b == 0)
        rdx_6 = 0
    else
        result = sub_140d3c6e0(rbx)
        int64_t result_8 = result
        
        if (result == 0)
            result_7 = &r13[0x27]
        else
            int64_t rax_11 = sub_142591550()
            void* rcx_7 = *(result_8 + 0x10)
            result = rax_11 + 0x30
            int64_t rdx_4 = sx.q(*(result + 8))
            
            if (rdx_4.d s> *(rcx_7 + 0x38) || *(*(rcx_7 + 0x30) + (rdx_4 << 3)) != result
                    || *(result_8 + 0x430) == 0)
                result_7 = &r13[0x27]
            else
                result = sub_141f66050(result_8, rbx[0x1a])
                result_7 = result
        
        if (result_7 == 0)
            rdx_6 = 0
        else
            rdx_6 = *(r13 + 0xec)

int32_t arg_18 = rdx_6
int128_t zmm9
zmm9.d = 1f f/ rbx[0x64]
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
        result = result_6
        int32_t rbx_1 = rdx_6
        result_6 += rcx_11
        
        if (*result s<= rdx_6)
            rbx_1 = *result
        
        char var_b0
        char var_af
        
        if (var_b0 != 0 || var_af != 0)
            int32_t var_248
            sub_142316040(&var_248, r12, r13, result_7, rbx_1)
            void* var_208
            int32_t* rdx_8 = var_208
            int32_t var_244
            zmm7 = var_244
            int32_t var_240
            zmm8 = var_240
            int32_t var_214
            var_208 = &rdx_8[sx.q(var_214)]
            *rdx_8 = var_248[0]
            void* var_1f0
            int32_t* rdx_9 = var_1f0
            int32_t var_1fc
            var_1f0 = &rdx_9[sx.q(var_1fc)]
            *rdx_9 = zmm7[0]
            void* var_1d8
            int32_t* rdx_10 = var_1d8
            int32_t result_1
            result = sx.q(result_1)
            var_1d8 = &rdx_10[result]
            *rdx_10 = zmm8[0]
            
            if (var_af != 0)
                int32_t var_238
                zmm6 = sub_142316040(&var_238, r12, r13, result_7, rbx_1)
                void* var_1c0
                int32_t* rdx_12 = var_1c0
                zmm6[0] = zmm6[0] f- var_238
                int32_t var_234
                zmm7[0] = zmm7[0] f- var_234
                int32_t var_230
                zmm8[0] = zmm8[0] f- var_230
                int32_t var_1cc
                var_1c0 = &rdx_12[sx.q(var_1cc)]
                zmm6[0] = zmm6[0] f* zmm9.d
                zmm7[0] = zmm7[0] f* zmm9.d
                *rdx_12 = zmm6[0]
                void* var_1a8
                int32_t* rdx_13 = var_1a8
                zmm8[0] = zmm8[0] f* zmm9.d
                int32_t var_1b4
                var_1a8 = &rdx_13[sx.q(var_1b4)]
                *rdx_13 = zmm7[0]
                void* var_190
                int32_t* rdx_14 = var_190
                int32_t result_2
                result = sx.q(result_2)
                var_190 = &rdx_14[result]
                *rdx_14 = zmm8[0]
        
        if (arg_10 != 0)
            float zmm2[0x4] = data_143dbb1f8
            float zmm1[0x4] = data_143dbb1fc
            float zmm0[0x4] = data_143dbb200
            float var_268 = zmm2[0]
            int32_t var_278
            var_278.q = &var_268
            float var_264_1 = zmm1[0]
            float var_260_1 = zmm0[0]
            float var_258 = zmm2[0]
            float var_254_1 = zmm1[0]
            float var_250_1 = zmm0[0]
            int32_t zmm10_1
            int32_t zmm11_1
            float zmm12_1[0x4]
            result, zmm9, zmm10_1, zmm11_1, zmm12_1 =
                sub_142315fc0(r12, r13, result_7, rbx_1, var_278, &var_258)
            
            if (var_ae != 0)
                void* var_e8
                int32_t* rdx_16 = var_e8
                int32_t var_f4
                var_e8 = &rdx_16[sx.q(var_f4)]
                *rdx_16 = var_268[0]
                void* var_d0
                int32_t* rdx_17 = var_d0
                int32_t var_dc
                var_d0 = &rdx_17[sx.q(var_dc)]
                *rdx_17 = var_264_1[0]
                void* var_b8
                int32_t* rdx_18 = var_b8
                int32_t result_5
                result = sx.q(result_5)
                var_b8 = &rdx_18[result]
                *rdx_18 = var_260_1[0]
            
            if (var_ad != 0)
                zmm2 = var_250_1
                zmm6 = var_260_1
                zmm8 = zmm2
                zmm7 = var_268
                zmm6[0] = zmm6[0] * var_254_1
                float zmm3_1[0x4] = var_264_1
                zmm6[0] = zmm6[0] * var_258
                zmm2[0] = zmm2[0] * zmm7[0]
                zmm7[0] = zmm7[0] * var_254_1
                zmm6[0] = zmm6[0] - zmm2[0]
                zmm8[0] = zmm8[0] * zmm3_1[0]
                zmm3_1[0] = zmm3_1[0] * var_258
                zmm8[0] = zmm8[0] - zmm6[0]
                zmm7[0] = zmm7[0] - zmm3_1[0]
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm6[0] = zmm6[0] + zmm8[0]
                zmm6[0] = zmm6[0] + zmm7[0]
                
                if (not(zmm6[0] f== zmm11_1))
                    if (zmm6[0] f>= zmm10_1)
                        float zmm4_1[0x4] = zx.o(0)
                        zmm4_1[0] = zmm12_1[0]
                        float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
                        zmm6[0] = zmm6[0] * zmm4_1[0]
                        temp0_1[0] = temp0_1[0] * temp0_1[0]
                        zmm6[0] = zmm6[0] * temp0_1[0]
                        zmm4_1[0] = zmm4_1[0] - zmm6[0]
                        temp0_1[0] = temp0_1[0] * zmm4_1[0]
                        temp0_1[0] = temp0_1[0] + temp0_1[0]
                        temp0_1[0] = temp0_1[0] * temp0_1[0]
                        zmm6[0] = zmm6[0] * temp0_1[0]
                        zmm4_1[0] = zmm4_1[0] - zmm6[0]
                        temp0_1[0] = temp0_1[0] * zmm4_1[0]
                        temp0_1[0] = temp0_1[0] + temp0_1[0]
                        temp0_1[0] = temp0_1[0] * zmm8[0]
                        temp0_1[0] = temp0_1[0] * zmm6[0]
                        temp0_1[0] = temp0_1[0] * zmm7[0]
                        zmm8 = temp0_1
                        zmm6 = temp0_1
                        zmm7 = temp0_1
                    else
                        zmm8 = data_143dbb1f8
                        zmm6 = data_143dbb1fc
                        zmm7 = data_143dbb200
                
                void* var_130
                int32_t* rdx_19 = var_130
                int32_t var_13c
                var_130 = &rdx_19[sx.q(var_13c)]
                *rdx_19 = zmm8[0]
                void* var_118
                int32_t* rdx_20 = var_118
                int32_t var_124
                var_118 = &rdx_20[sx.q(var_124)]
                *rdx_20 = zmm6[0]
                void* var_100
                int32_t* rdx_21 = var_100
                int32_t result_4
                result = sx.q(result_4)
                var_100 = &rdx_21[result]
                *rdx_21 = zmm7[0]
            
            if (var_ac != 0)
                void* var_178
                int32_t* rdx_22 = var_178
                int32_t var_184
                var_178 = &rdx_22[sx.q(var_184)]
                *rdx_22 = var_258[0]
                void* var_160
                int32_t* rdx_23 = var_160
                int32_t var_16c
                var_160 = &rdx_23[sx.q(var_16c)]
                *rdx_23 = var_254_1[0]
                void* var_148
                int32_t* rdx_24 = var_148
                int32_t result_3
                result = sx.q(result_3)
                var_148 = &rdx_24[result]
                *rdx_24 = var_250_1[0]
        
        rdx_6 = arg_18
        i_2 += 1
        rcx_11 = var_228_1
    while (i_2 s< *(arg2 + 0x40))

return result
