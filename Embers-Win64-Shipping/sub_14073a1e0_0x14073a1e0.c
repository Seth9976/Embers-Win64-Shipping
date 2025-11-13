// 函数: sub_14073a1e0
// 地址: 0x14073a1e0
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
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
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
void* rax_10 = sub_140d3c6e0(rdi)
void* var_248 = rax_10
void* rax_11
int64_t rax_12
void* rdx_4

if (rax_10 != 0)
    rax_11 = sub_142591550()
    rdx_4 = *(rax_10 + 0x10)
    rax_12 = sx.q(*(rax_11 + 0x38))

if (rax_10 == 0 || rax_12.d s> *(rdx_4 + 0x38)
        || *(*(rdx_4 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
    var_248 = nullptr

int64_t result = *(rdi + 0x58)
int64_t* r13 = nullptr
int64_t result_7 = 0

if (result != 0)
    int64_t rcx_6 = **(result + 0x58)
    result = sx.q(rdi[0x1a])
    r13 = *(rcx_6 + (result << 3))
    
    if (rdi[0x86].b != 0)
        result = sub_140d3c6e0(rdi)
        int64_t result_8 = result
        
        if (result == 0)
            result_7 = &r13[0x27]
        else
            int64_t rax_15 = sub_142591550()
            void* rcx_8 = *(result_8 + 0x10)
            result = rax_15 + 0x30
            int64_t rdx_5 = sx.q(*(result + 8))
            
            if (rdx_5.d s> *(rcx_8 + 0x38) || *(*(rcx_8 + 0x30) + (rdx_5 << 3)) != result
                    || *(result_8 + 0x430) == 0)
                result_7 = &r13[0x27]
            else
                result = sub_141f66050(result_8, rdi[0x1a])
                result_7 = result

void* r15_1 = *(rdi + 0x70)
int32_t rdx_7

if (result_7 == 0)
    rdx_7 = 0
else
    rdx_7 = *(r13 + 0xec)

int32_t arg_18 = rdx_7
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
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint64_t var_220_1 = rcx_12
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    
    do
        result = result_6
        int32_t rdi_1 = rdx_7
        result_6 += rcx_12
        
        if (*result s<= rdx_7)
            rdi_1 = *result
        
        char var_b0
        char var_af
        
        if (var_b0 != 0 || var_af != 0)
            int32_t var_240
            sub_1423162c0(&var_240, var_248, rdi_1, r13, result_7, 
                ((sx.q(*(r15_1 + 0x34)) + 4) << 4) + r15_1)
            void* var_208
            int32_t* rdx_9 = var_208
            int32_t var_214
            var_208 = &rdx_9[sx.q(var_214)]
            *rdx_9 = var_240[0]
            void* var_1f0
            int32_t* rdx_10 = var_1f0
            int32_t var_1fc
            var_1f0 = &rdx_10[sx.q(var_1fc)]
            int32_t var_23c
            *rdx_10 = var_23c.d
            void* var_1d8
            int32_t* rdx_11 = var_1d8
            int32_t result_1
            result = sx.q(result_1)
            var_1d8 = &rdx_11[result]
            int32_t var_238
            *rdx_11 = var_238[0]
            
            if (var_af != 0)
                int32_t var_230
                int32_t zmm9_1
                zmm6, zmm7, zmm8, zmm9_1 = sub_1423162c0(&var_230, var_248, rdi_1, r13, result_7, 
                    (((sx.q(*(r15_1 + 0x34)) ^ 1) + 4) << 4) + r15_1)
                void* var_1c0
                int32_t* rdx_13 = var_1c0
                zmm6[0] = zmm6[0] f- var_230
                int32_t var_22c
                zmm7.d = zmm7.d f- var_22c
                int32_t var_228
                zmm8[0] = zmm8[0] f- var_228
                int32_t var_1cc
                var_1c0 = &rdx_13[sx.q(var_1cc)]
                zmm6[0] = zmm6[0] f* zmm9_1
                zmm7.d = zmm7.d f* zmm9_1
                *rdx_13 = zmm6[0]
                void* var_1a8
                int32_t* rdx_14 = var_1a8
                zmm8[0] = zmm8[0] f* zmm9_1
                int32_t var_1b4
                var_1a8 = &rdx_14[sx.q(var_1b4)]
                *rdx_14 = zmm7.d
                void* var_190
                int32_t* rdx_15 = var_190
                int32_t result_2
                result = sx.q(result_2)
                var_190 = &rdx_15[result]
                *rdx_15 = zmm8[0]
        
        if (arg_10 != 0)
            float zmm2[0x4] = data_143dbb1f8
            float zmm1 = data_143dbb1fc
            float zmm0[0x4] = data_143dbb200
            float var_268 = zmm2[0]
            float var_260_1 = zmm0[0]
            float var_258 = zmm2[0]
            float var_250_1 = zmm0[0]
            int32_t zmm10_1
            int32_t zmm11_1
            float zmm12_1[0x4]
            result, zmm10_1, zmm11_1, zmm12_1 = sub_1423161e0(var_248, rdi_1, r13, result_7, 
                (((sx.q(*(r15_1 + 0x34)) ^ 1) + 4) << 4) + r15_1, &var_268, &var_258)
            
            if (var_ae != 0)
                void* var_e8
                int32_t* rdx_17 = var_e8
                int32_t var_f4
                var_e8 = &rdx_17[sx.q(var_f4)]
                *rdx_17 = var_268[0]
                void* var_d0
                int32_t* rdx_18 = var_d0
                int32_t var_dc
                var_d0 = &rdx_18[sx.q(var_dc)]
                *rdx_18 = zmm1
                void* var_b8
                int32_t* rdx_19 = var_b8
                int32_t result_5
                result = sx.q(result_5)
                var_b8 = &rdx_19[result]
                *rdx_19 = var_260_1[0]
            
            if (var_ad != 0)
                zmm2 = var_250_1
                zmm6 = var_260_1
                zmm8 = zmm2
                zmm7 = var_268
                zmm6[0] = zmm6[0] * zmm1
                zmm6[0] = zmm6[0] * var_258
                zmm2[0] = zmm2[0] f* zmm7.d
                zmm7.d = zmm7.d f* zmm1
                zmm6[0] = zmm6[0] - zmm2[0]
                zmm8[0] = zmm8[0] * zmm1
                float zmm3_1 = zmm1 * var_258
                zmm8[0] = zmm8[0] - zmm6[0]
                zmm7.d = zmm7.d f- zmm3_1
                zmm6[0] = zmm6[0] * zmm6[0]
                zmm8[0] = zmm8[0] * zmm8[0]
                zmm6[0] = zmm6[0] + zmm8[0]
                zmm6[0] = zmm6[0] + zmm7.d f* zmm7.d
                
                if (not(zmm6[0] f== zmm11_1))
                    if (zmm6[0] f>= zmm10_1)
                        float zmm4_1[0x4] = zx.o(0)
                        zmm4_1[0] = zmm12_1[0]
                        zmm3_1 = zmm6[0]
                        float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm3_1)
                        zmm3_1 = zmm3_1 * zmm4_1[0]
                        temp0_1[0] = temp0_1[0] * temp0_1[0]
                        zmm4_1[0] = zmm4_1[0] - zmm3_1 * temp0_1[0]
                        temp0_1[0] = temp0_1[0] * zmm4_1[0]
                        temp0_1[0] = temp0_1[0] + temp0_1[0]
                        zmm4_1[0] = zmm4_1[0] - zmm3_1 * temp0_1[0] * temp0_1[0]
                        temp0_1[0] = temp0_1[0] * zmm4_1[0]
                        temp0_1[0] = temp0_1[0] + temp0_1[0]
                        zmm8[0] = zmm8[0] * temp0_1[0]
                        zmm6[0] = zmm6[0] * temp0_1[0]
                        zmm7.d = zmm7.d f* temp0_1[0]
                    else
                        zmm8 = data_143dbb1f8
                        zmm6 = data_143dbb1fc
                        zmm7 = data_143dbb200
                
                void* var_130
                int32_t* rdx_20 = var_130
                int32_t var_13c
                var_130 = &rdx_20[sx.q(var_13c)]
                *rdx_20 = zmm8[0]
                void* var_118
                int32_t* rdx_21 = var_118
                int32_t var_124
                var_118 = &rdx_21[sx.q(var_124)]
                *rdx_21 = zmm6[0]
                void* var_100
                int32_t* rdx_22 = var_100
                int32_t result_4
                result = sx.q(result_4)
                var_100 = &rdx_22[result]
                *rdx_22 = zmm7.d
            
            if (var_ac != 0)
                void* var_178
                int32_t* rdx_23 = var_178
                int32_t var_184
                var_178 = &rdx_23[sx.q(var_184)]
                *rdx_23 = var_258[0]
                void* var_160
                float* rdx_24 = var_160
                int32_t var_16c
                var_160 = &rdx_24[sx.q(var_16c)]
                *rdx_24 = zmm1
                void* var_148
                int32_t* rdx_25 = var_148
                int32_t result_3
                result = sx.q(result_3)
                var_148 = &rdx_25[result]
                *rdx_25 = var_250_1[0]
        
        rdx_7 = arg_18
        i_2 += 1
        rcx_12 = var_220_1
    while (i_2 s< *(arg2 + 0x40))

return result
