// 函数: sub_1406f9e70
// 地址: 0x1406f9e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
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
uint8_t r12_1 = (rcx_2 u>> 0xf).b
int32_t i_1 = rcx_2 & 0x7fff
int32_t* rsi = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
*(arg2 + 0x10) = &rax[2]
int32_t* rdi_1

if ((not.b(r12_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
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
    
    rdi_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

void var_1b8
sub_1407422f0(&var_1b8, arg2)
char var_c7
uint32_t var_b8[0x4][0x4]
float zmm6[0x4]

if (var_c7 != 0)
    zmm6 = sub_140ae1ba0(&rsi[0x34], &var_b8)
    
    if (var_c7 != 0)
        zmm6 = sub_140ae1ba0(&rsi[0x54], &var_b8)

void* rax_9 = sub_140d3c6e0(rsi)

if (rax_9 != 0)
    void* rax_10 = sub_142591550()
    void* rcx_7 = *(rax_9 + 0x10)
    int64_t rdx_6 = sx.q(*(rax_10 + 0x38))
    
    if (rdx_6.d s<= *(rcx_7 + 0x38) && *(*(rcx_7 + 0x30) + (rdx_6 << 3)) == rax_10 + 0x30
            && *(rax_9 + 0x430) != 0)
        sub_141f66050(rax_9, rsi[0x1a])

if (sub_140d3c6e0(rsi) != 0)
    sub_142591550()

if (*(rsi + 0x58) != 0 && rsi[0x86].b != 0)
    void* rax_13 = sub_140d3c6e0(rsi)
    
    if (rax_13 != 0)
        void* rax_14 = sub_142591550()
        void* rcx_12 = *(rax_13 + 0x10)
        int64_t rdx_8 = sx.q(*(rax_14 + 0x38))
        
        if (rdx_8.d s<= *(rcx_12 + 0x38) && *(*(rcx_12 + 0x30) + (rdx_8 << 3)) == rax_14 + 0x30
                && *(rax_13 + 0x430) != 0)
            sub_141f66050(rax_13, rsi[0x1a])

void* r8_1 = *(rsi + 0x70)
int32_t r9_1

if (r8_1 == 0)
    r9_1 = 0
else
    r9_1 = *(r8_1 + sx.q(*(r8_1 + 0x34)) * 0x10 + 0x68)

uint64_t result = zx.q(rsi[0x71])
int32_t r13_1 = rsi[0x6e] + r9_1
int128_t zmm10
zmm10.d = 1f f/ rsi[0x64]
uint64_t rdx_11 = zx.q(result.d) << 4
uint64_t r14_3 = zx.q((result - 1).d) & 1
uint64_t arg_10 = rdx_11

if (*(arg2 + 0x40) s> 0)
    float zmm7[0x4] = arg_10.d
    float zmm8[0x4] = arg_10.d
    float zmm9[0x4] = arg_10.d
    float var_38_1[0x4] = zmm6
    
    do
        int64_t rcx_15 = sx.q(*rdi_1)
        rdi_1 = &rdi_1[zx.q(r12_1)]
        result = zx.q(rcx_15.d - r9_1)
        char var_c6
        float zmm4[0x4]
        float zmm5[0x4]
        int32_t var_16c
        void* var_160
        int32_t var_154
        float* var_148
        int32_t var_13c
        float* var_130
        int32_t result_2
        float* var_118
        float zmm1[0x4]
        float zmm3[0x4]
        
        if (rcx_15.d s< 0 || rcx_15.d s>= r13_1)
            zmm4 = data_143dbb1f8
            zmm5 = data_143dbb1fc
            zmm6 = data_143dbb200
            
            if (var_c6 != 0)
                zmm9 = zmm4
                zmm7 = zmm5
                zmm8 = zmm6
            
            if (var_c7 != 0)
                void* rdx_24 = var_160
                zmm1 = data_14399f720:4.d
                float zmm2[0x4] = data_14399f720:8.d
                zmm3 = data_14399f720:0xc.d
                var_160 = rdx_24 + (sx.q(var_16c) << 2)
                *rdx_24 = data_14399f720.d[0]
                float* rdx_25 = var_148
                var_148 = &rdx_25[sx.q(var_154)]
                *rdx_25 = zmm1[0]
                float* rdx_26 = var_130
                var_130 = &rdx_26[sx.q(var_13c)]
                *rdx_26 = zmm2[0]
                float* rdx_27 = var_118
                result = sx.q(result_2)
                var_118 = &rdx_27[result]
                *rdx_27 = zmm3[0]
        else if (rcx_15.d s< r9_1)
            int64_t rdx_16 = sx.q(*(r8_1 + 0x34))
            int64_t rcx_23 = rcx_15 * 6
            result = (rdx_16 + 6) * 2
            int64_t r10_1 = *(r8_1 + (result << 3))
            zmm1 = *(r10_1 + (rcx_23 << 3) + 0x10)
            zmm4 = zmm1
            zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm6 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            
            if (var_c6 != 0)
                result = *(r8_1 + ((rdx_16 ^ 1) + 6) * 0x10)
                zmm1 = *(result + (rcx_23 << 3) + 0x10)
                zmm9 = zmm1
                zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            
            if (var_c7 != 0)
                float zmm0[0x4] = *(r10_1 + (rcx_23 << 3))
                void* rdx_20 = var_160
                var_b8[0] = zmm0
                float temp0_12[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                float temp0_13[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                float temp0_14[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                var_160 = rdx_20 + (sx.q(var_16c) << 2)
                *rdx_20 = zmm0[0]
                float* rdx_21 = var_148
                var_148 = &rdx_21[sx.q(var_154)]
                *rdx_21 = temp0_12[0]
                float* rdx_22 = var_130
                var_130 = &rdx_22[sx.q(var_13c)]
                *rdx_22 = temp0_13[0]
                float* rdx_23 = var_118
                result = sx.q(result_2)
                var_118 = &rdx_23[result]
                *rdx_23 = temp0_14[0]
        else
            int64_t rax_20 = *(rdx_11 + rsi + 0x1c8)
            int64_t rcx_17 = sx.q(result.d) * 6
            zmm4 = *(rax_20 + (rcx_17 << 3) + 0x10)
            zmm3 = *(rax_20 + (rcx_17 << 3))
            result = *(rsi + r14_3 * 0x10 + 0x1c8)
            zmm5 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            zmm6 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            zmm1 = *(result + (rcx_17 << 3) + 0x10)
            
            if (var_c6 != 0)
                zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm9 = zmm1
                zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            
            if (var_c7 != 0)
                float* rdx_12 = var_160
                float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                var_160 = &rdx_12[sx.q(var_16c)]
                *rdx_12 = zmm3[0]
                float* rdx_13 = var_148
                var_148 = &rdx_13[sx.q(var_154)]
                *rdx_13 = temp0_5[0]
                float* rdx_14 = var_130
                var_130 = &rdx_14[sx.q(var_13c)]
                *rdx_14 = temp0_6[0]
                float* rdx_15 = var_118
                result = sx.q(result_2)
                var_118 = &rdx_15[result]
                *rdx_15 = temp0_7[0]
        char var_c8
        
        if (var_c8 != 0)
            void* var_1a8
            float* rdx_28 = var_1a8
            int32_t var_1b4
            var_1a8 = &rdx_28[sx.q(var_1b4)]
            *rdx_28 = zmm4[0]
            void* var_190
            float* rdx_29 = var_190
            int32_t var_19c
            var_190 = &rdx_29[sx.q(var_19c)]
            *rdx_29 = zmm5[0]
            void* var_178
            float* rdx_30 = var_178
            int32_t result_1
            result = sx.q(result_1)
            var_178 = &rdx_30[result]
            *rdx_30 = zmm6[0]
        
        if (var_c6 != 0)
            float* var_100
            float* rdx_31 = var_100
            zmm4[0] = zmm4[0] - zmm9[0]
            zmm5[0] = zmm5[0] - zmm7[0]
            zmm6[0] = zmm6[0] - zmm8[0]
            zmm4[0] = zmm4[0] f* zmm10.d
            int32_t var_10c
            var_100 = &rdx_31[sx.q(var_10c)]
            zmm5[0] = zmm5[0] f* zmm10.d
            *rdx_31 = zmm4[0]
            void* var_e8
            float* rdx_32 = var_e8
            zmm6[0] = zmm6[0] f* zmm10.d
            int32_t var_f4
            var_e8 = &rdx_32[sx.q(var_f4)]
            *rdx_32 = zmm5[0]
            void* var_d0
            float* rdx_33 = var_d0
            int32_t result_3
            result = sx.q(result_3)
            var_d0 = &rdx_33[result]
            *rdx_33 = zmm6[0]
        
        rdx_11 = arg_10
        i_2 += 1
    while (i_2 s< *(arg2 + 0x40))

return result
