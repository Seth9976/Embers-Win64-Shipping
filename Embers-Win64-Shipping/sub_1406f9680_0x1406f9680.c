// 函数: sub_1406f9680
// 地址: 0x1406f9680
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
uint8_t r13_1 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* rdi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t* rsi_1

if ((not.b(r13_1) & 1) == 0)
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

uint32_t var_258 = 0xffffffff
int128_t* var_250 = nullptr
int32_t var_248 = 0
sub_140767bd0(&var_258, arg2)
void var_218
sub_1407422f0(&var_218, arg2)
float var_228[0x4]
char var_127
float zmm6[0x4]

if (var_127 != 0)
    zmm6 = sub_140ae1ba0(&rdi[0x34], &var_228)
    
    if (var_127 != 0)
        zmm6 = sub_140ae1ba0(&rdi[0x54], &var_228)

void* rax_9 = sub_140d3c6e0(rdi)

if (rax_9 != 0)
    void* rax_10 = sub_142591550()
    void* rcx_8 = *(rax_9 + 0x10)
    int64_t rdx_7 = sx.q(*(rax_10 + 0x38))
    
    if (rdx_7.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_7 << 3)) == rax_10 + 0x30
            && *(rax_9 + 0x430) != 0)
        sub_141f66050(rax_9, rdi[0x1a])

if (sub_140d3c6e0(rdi) != 0)
    sub_142591550()

if (*(rdi + 0x58) != 0 && rdi[0x86].b != 0)
    void* rax_13 = sub_140d3c6e0(rdi)
    
    if (rax_13 != 0)
        void* rax_14 = sub_142591550()
        void* rcx_13 = *(rax_13 + 0x10)
        int64_t rdx_9 = sx.q(*(rax_14 + 0x38))
        
        if (rdx_9.d s<= *(rcx_13 + 0x38) && *(*(rcx_13 + 0x30) + (rdx_9 << 3)) == rax_14 + 0x30
                && *(rax_13 + 0x430) != 0)
            sub_141f66050(rax_13, rdi[0x1a])

void* r12 = *(rdi + 0x70)
int32_t r15_2

if (r12 == 0)
    r15_2 = 0
else
    int64_t rcx_16 = sx.q(*(r12 + 0x34))
    int64_t rax_17 = rcx_16 * 2
    r15_2 = *(r12 + (rcx_16 ^ 1) * 0x10 + 0x68)
    
    if (*(r12 + (rax_17 << 3) + 0x68) s<= r15_2)
        r15_2 = *(r12 + (rax_17 << 3) + 0x68)

uint64_t result = zx.q(rdi[0x71])
int32_t r10_2 = rdi[0x6e] + r15_2
int128_t zmm14
zmm14.d = 1f f/ rdi[0x64]
uint64_t r9_2 = zx.q(result.d) << 4
int32_t arg_10 = r10_2
uint64_t r8_3 = (zx.q((result - 1).d) & 1) << 4
uint64_t var_288 = r9_2
uint64_t arg_20 = r8_3

if (*(arg2 + 0x40) s> 0)
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    int64_t rcx_20 = sx.q(var_248) << 2
    int128_t* r13_2 = var_250
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint64_t rdx_12 = zx.q(r13_1) << 2
    uint32_t zmm13[0x4]
    uint32_t var_b8_1[0x4] = zmm13
    float var_48_1[0x4] = zmm6
    int64_t var_238_1 = rcx_20
    uint64_t var_230_1 = rdx_12
    
    do
        int128_t* rax_18 = r13_2
        r13_2 += rcx_20
        zmm13 = *rax_18
        int32_t* rax_19 = rsi_1
        rsi_1 += rdx_12
        int64_t rdx_13 = sx.q(*rax_19)
        result = zx.q(rdx_13.d - r15_2)
        int32_t var_1cc
        float* var_1c0
        int32_t var_1b4
        void* var_1a8
        int32_t var_19c
        float* var_190
        int32_t result_2
        float* var_178
        float zmm1[0x4]
        float zmm2[0x4]
        uint32_t zmm3[0x4]
        
        if (rdx_13.d s< 0 || rdx_13.d s>= r10_2)
            zmm7 = data_143dbb1f8
            zmm8 = data_143dbb1fc
            zmm10 = zmm7
            zmm9 = data_143dbb200
            zmm11 = zmm8
            zmm12 = zmm9
            
            if (var_127 != 0)
                float* rdx_28 = var_1c0
                zmm1 = data_14399f720:4.d
                zmm2 = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_1c0 = &rdx_28[sx.q(var_1cc)]
                *rdx_28 = data_14399f720.d[0]
                void* rdx_29 = var_1a8
                var_1a8 = rdx_29 + (sx.q(var_1b4) << 2)
                *rdx_29 = zmm1[0]
                float* rdx_30 = var_190
                var_190 = &rdx_30[sx.q(var_19c)]
                *rdx_30 = zmm2[0]
                float* rdx_31 = var_178
                result = sx.q(result_2)
                var_178 = &rdx_31[result]
                *rdx_31 = zmm3[0]
        else
            float zmm0[0x4]
            
            if (rdx_13.d s< r15_2)
                int64_t rcx_34 = sx.q(*(r12 + 0x34))
                int64_t rdx_26 = rdx_13 * 6
                int64_t r8_5 = *(r12 + (rcx_34 + 6) * 0x10)
                result = *(r12 + ((rcx_34 ^ 1) + 6) * 0x10)
                zmm1 = *(r8_5 + (rdx_26 << 3) + 0x10)
                zmm7 = zmm1
                zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                zmm1 = *(result + (rdx_26 << 3) + 0x10)
                zmm10 = zmm1
                zmm11 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm12 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                
                if (var_127 == 0)
                    r8_3 = arg_20
                else
                    float var_268[0x4] = *(r8_5 + (rdx_26 << 3))
                    var_228 = *(result + (rdx_26 << 3))
                    float (* rax_33)[0x4]
                    rax_33, zmm7, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_258, &var_228, &var_268, zmm13)
                    zmm6 = data_143cdfe30
                    float zmm5_2[0x4] = *rax_33
                    float temp0_33[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    float temp0_35[0x4] =
                        _mm_add_ps(temp0_33, _mm_shuffle_ps(temp0_33, temp0_33, 0x4e))
                    float temp0_37[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x39), temp0_35)
                    float temp0_38[0x4] = _mm_rsqrt_ps(temp0_37)
                    zmm3 = _mm_mul_ps(temp0_37, zmm6)
                    float temp0_44[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_38, temp0_38), zmm3)), 
                            temp0_38), 
                        temp0_38)
                    float temp0_47[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_44, temp0_44), zmm3))
                    float temp0_49[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_37, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_47, temp0_44), temp0_44), zmm5_2)
                            ^ data_143cdfe20, 
                        temp0_49) ^ data_143cdfe20
                    var_268[0] = zmm6[0]
                    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    var_268[1] = zmm0[0]
                    var_268[2] = zmm1[0]
                    var_268[3] = zmm2[0]
                label_1406f9ac7:
                    float* rdx_15 = var_1c0
                    r9_2 = var_288
                    r10_2 = arg_10
                    var_1c0 = &rdx_15[sx.q(var_1cc)]
                    *rdx_15 = zmm6[0]
                    float* rdx_16 = var_1a8
                    var_1a8 = &rdx_16[sx.q(var_1b4)]
                    *rdx_16 = zmm0[0]
                    float* rdx_17 = var_190
                    var_190 = &rdx_17[sx.q(var_19c)]
                    *rdx_17 = zmm1[0]
                    float* rdx_18 = var_178
                    result = sx.q(result_2)
                    var_178 = &rdx_18[result]
                    *rdx_18 = zmm2[0]
                    r8_3 = arg_20
            else
                int64_t rax_22 = *(r9_2 + rdi + 0x1c8)
                int64_t rcx_22 = sx.q(result.d) * 6
                zmm7 = *(rax_22 + (rcx_22 << 3) + 0x10)
                zmm1 = *(rax_22 + (rcx_22 << 3))
                result = *(r8_3 + rdi + 0x1c8)
                zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                zmm10 = *(result + (rcx_22 << 3) + 0x10)
                zmm2 = *(result + (rcx_22 << 3))
                zmm11 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                zmm12 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                
                if (var_127 != 0)
                    float var_278[0x4] = zmm1
                    float var_118[0x4] = zmm2
                    float var_108[0x4][0x4]
                    float (* rax_23)[0x4]
                    rax_23, zmm7, zmm8, zmm9, zmm10 =
                        sub_140ae0e60(&var_108, &var_118, &var_278, zmm13)
                    zmm6 = data_143cdfe30
                    float zmm5_1[0x4] = *rax_23
                    float temp0_5[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                    float temp0_7[0x4] = _mm_add_ps(temp0_5, _mm_shuffle_ps(temp0_5, temp0_5, 0x4e))
                    float temp0_9[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x39), temp0_7)
                    float temp0_10[0x4] = _mm_rsqrt_ps(temp0_9)
                    zmm3 = _mm_mul_ps(temp0_9, zmm6)
                    float temp0_16[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_10, temp0_10), zmm3)), 
                            temp0_10), 
                        temp0_10)
                    float temp0_19[0x4] =
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_16, temp0_16), zmm3))
                    float temp0_21[0x4] =
                        _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_9, 2)
                    zmm6 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_19, temp0_16), temp0_16), zmm5_1)
                            ^ data_143cdfe20, 
                        temp0_21) ^ data_143cdfe20
                    var_278[0] = zmm6[0]
                    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    var_278[1] = zmm0[0]
                    var_278[2] = zmm1[0]
                    var_278[3] = zmm2[0]
                    goto label_1406f9ac7
        zmm7[0] = zmm7[0] - zmm10[0]
        zmm8[0] = zmm8[0] - zmm11[0]
        zmm9[0] = zmm9[0] - zmm12[0]
        zmm7[0] = zmm7[0] f* zmm13[0]
        zmm8[0] = zmm8[0] f* zmm13[0]
        zmm9[0] = zmm9[0] f* zmm13[0]
        zmm7[0] = zmm7[0] + zmm10[0]
        zmm8[0] = zmm8[0] + zmm11[0]
        zmm9[0] = zmm9[0] + zmm12[0]
        char var_128
        
        if (var_128 != 0)
            void* var_208
            float* rdx_19 = var_208
            int32_t var_214
            var_208 = &rdx_19[sx.q(var_214)]
            *rdx_19 = zmm7[0]
            void* var_1f0
            float* rdx_20 = var_1f0
            int32_t var_1fc
            var_1f0 = &rdx_20[sx.q(var_1fc)]
            *rdx_20 = zmm8[0]
            void* var_1d8
            float* rdx_21 = var_1d8
            int32_t result_1
            result = sx.q(result_1)
            var_1d8 = &rdx_21[result]
            *rdx_21 = zmm9[0]
        
        char var_126
        
        if (var_126 != 0)
            void* var_160
            float* rdx_22 = var_160
            zmm7[0] = zmm7[0] - zmm10[0]
            zmm8[0] = zmm8[0] - zmm11[0]
            zmm9[0] = zmm9[0] - zmm12[0]
            zmm7[0] = zmm7[0] f* zmm14.d
            int32_t var_16c
            var_160 = &rdx_22[sx.q(var_16c)]
            zmm8[0] = zmm8[0] f* zmm14.d
            *rdx_22 = zmm7[0]
            void* var_148
            float* rdx_23 = var_148
            zmm9[0] = zmm9[0] f* zmm14.d
            int32_t var_154
            var_148 = &rdx_23[sx.q(var_154)]
            *rdx_23 = zmm8[0]
            void* var_130
            float* rdx_24 = var_130
            int32_t result_3
            result = sx.q(result_3)
            var_130 = &rdx_24[result]
            *rdx_24 = zmm9[0]
        
        rcx_20 = var_238_1
        i_2 += 1
        rdx_12 = var_230_1
    while (i_2 s< *(arg2 + 0x40))

return result
