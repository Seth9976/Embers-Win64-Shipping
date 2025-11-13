// 函数: sub_140736d70
// 地址: 0x140736d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int32_t r9_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r8

if (r9_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r9_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        rdx += 1
    while (r9_1 s>= rax_1)

void* rdi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r9_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_5 u>> 0xf).b) & 1) != 0)
    int32_t rax_7 = *r8
    int32_t rcx_3 = rax_5 & 0x7fff
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
        while (rcx_3 s>= rax_7)

uint32_t rax_8 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_8 u>> 0xf).b) & 1) != 0)
    int32_t rax_10 = *r8
    int32_t rcx_5 = rax_8 & 0x7fff
    
    if (rcx_5 s>= rax_10)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_10
            rdx_4 += 1
            rax_10 = r8[rdx_4]
        while (rcx_5 s>= rax_10)

uint32_t rax_11 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_11 u>> 0xf).b) & 1) != 0)
    int32_t rax_13 = *r8
    int32_t rcx_7 = rax_11 & 0x7fff
    
    if (rcx_7 s>= rax_13)
        int64_t rdx_5 = 0
        
        do
            rcx_7 -= rax_13
            rdx_5 += 1
            rax_13 = r8[rdx_5]
        while (rcx_7 s>= rax_13)

uint32_t rcx_8 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]

if ((not.b((rcx_8 u>> 0xf).b) & 1) != 0)
    int32_t i = rcx_8 & 0x7fff
    
    if (i s>= *r8)
        int64_t rax_17 = 0
        int32_t* rcx_9 = nullptr
        
        do
            i -= *(rcx_9 + r8)
            rax_17 += 1
            rcx_9 = rax_17 << 2
        while (i s>= *(rcx_9 + r8))

uint32_t var_1f8 = 0xffffffff
int32_t* result_7 = nullptr
int32_t var_1e8 = 0
sub_140767bd0(&var_1f8, arg2)
void var_1d8
int32_t* result = sub_140742680(&var_1d8, arg2)
int32_t i_1 = 0
float zmm4 = 1f f/ *(rdi + 0x190)

if (*(arg2 + 0x40) s> 0)
    float zmm5[0x4] = data_142d3f660
    int32_t* result_6 = result_7
    int128_t zmm6
    int128_t var_18_1 = zmm6
    float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
    int128_t zmm7
    int128_t var_28_1 = zmm7
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    int128_t zmm8
    int128_t var_38_1 = zmm8
    
    do
        result = result_6
        float temp0_5[0x4] = __mulps_xmmps_memps(temp0_4, *(rdi + 0x150))
        result_6 = &result_6[sx.q(var_1e8)]
        float temp0_6[0x4] = __mulps_xmmps_memps(temp0_1, *(rdi + 0x160))
        float temp0_7[0x4] = __mulps_xmmps_memps(temp0_2, *(rdi + 0x180))
        zmm6 = *result
        int96_t var_208_1 = _mm_add_ps(_mm_add_ps(temp0_5, temp0_6), 
            _mm_add_ps(temp0_7, __mulps_xmmps_memps(temp0_3, *(rdi + 0x170))))[0].12
        char var_70
        char var_6f
        
        if (var_70 != 0 || var_6f != 0)
            float zmm2[0x4] = data_142d3f660
            void* var_1c8
            float* rdx_9 = var_1c8
            zmm7 = var_208_1:4.d
            zmm8 = var_208_1:8.d
            float temp0_13[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            float temp0_15[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            float temp0_17[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_15)
            int32_t var_1d4
            var_1c8 = &rdx_9[sx.q(var_1d4)]
            float temp0_21[0x4] = _mm_add_ps(temp0_17, 
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0)))
            zmm2 = var_208_1.d
            float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_21)
            float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
            temp0_22[0] = temp0_22[0] - zmm2[0]
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
            temp0_23[0] = temp0_23[0] f- zmm7.d
            temp0_24[0] = temp0_24[0] f- zmm8.d
            temp0_22[0] = temp0_22[0] f* zmm6.d
            temp0_23[0] = temp0_23[0] f* zmm6.d
            temp0_22[0] = temp0_22[0] + zmm2[0]
            temp0_24[0] = temp0_24[0] f* zmm6.d
            temp0_23[0] = temp0_23[0] f+ zmm7.d
            temp0_24[0] = temp0_24[0] f+ zmm8.d
            *rdx_9 = temp0_22[0]
            void* var_1b0
            float* rdx_10 = var_1b0
            int32_t var_1bc
            var_1b0 = &rdx_10[sx.q(var_1bc)]
            *rdx_10 = temp0_23[0]
            void* var_198
            float* rdx_11 = var_198
            int32_t result_1
            result = sx.q(result_1)
            var_198 = &rdx_11[result]
            *rdx_11 = temp0_24[0]
            
            if (var_6f != 0)
                void* var_180
                float* rdx_12 = var_180
                temp0_22[0] = temp0_22[0] - zmm2[0]
                temp0_23[0] = temp0_23[0] f- zmm7.d
                temp0_24[0] = temp0_24[0] f- zmm8.d
                temp0_22[0] = temp0_22[0] * zmm4
                int32_t var_18c
                var_180 = &rdx_12[sx.q(var_18c)]
                temp0_23[0] = temp0_23[0] * zmm4
                *rdx_12 = temp0_22[0]
                void* var_168
                float* rdx_13 = var_168
                temp0_24[0] = temp0_24[0] * zmm4
                int32_t var_174
                var_168 = &rdx_13[sx.q(var_174)]
                *rdx_13 = temp0_23[0]
                void* var_150
                float* rdx_14 = var_150
                int32_t result_2
                result = sx.q(result_2)
                var_150 = &rdx_14[result]
                *rdx_14 = temp0_24[0]
        
        char var_6e
        
        if (var_6e != 0)
            void* var_138
            int32_t* rdx_15 = var_138
            int32_t var_144
            var_138 = &rdx_15[sx.q(var_144)]
            *rdx_15 = 0
            void* var_120
            int32_t* rdx_16 = var_120
            int32_t var_12c
            var_120 = &rdx_16[sx.q(var_12c)]
            *rdx_16 = 0
            void* var_108
            int32_t* rdx_17 = var_108
            int32_t result_3
            result = sx.q(result_3)
            var_108 = &rdx_17[result]
            *rdx_17 = 0x3f800000
        
        char var_6d
        
        if (var_6d != 0)
            void* var_f0
            int32_t* rdx_18 = var_f0
            int32_t var_fc
            var_f0 = &rdx_18[sx.q(var_fc)]
            *rdx_18 = 0
            void* var_d8
            int32_t* rdx_19 = var_d8
            int32_t var_e4
            var_d8 = &rdx_19[sx.q(var_e4)]
            *rdx_19 = 0x3f800000
            void* var_c0
            int32_t* rdx_20 = var_c0
            int32_t result_4
            result = sx.q(result_4)
            var_c0 = &rdx_20[result]
            *rdx_20 = 0
        
        char var_6c
        
        if (var_6c != 0)
            void* var_a8
            int32_t* rdx_21 = var_a8
            int32_t var_b4
            var_a8 = &rdx_21[sx.q(var_b4)]
            *rdx_21 = 0x3f800000
            void* var_90
            int32_t* rdx_22 = var_90
            int32_t var_9c
            var_90 = &rdx_22[sx.q(var_9c)]
            *rdx_22 = 0
            void* var_78
            int32_t* rdx_23 = var_78
            int32_t result_5
            result = sx.q(result_5)
            var_78 = &rdx_23[result]
            *rdx_23 = 0
        
        i_1 += 1
    while (i_1 s< *(arg2 + 0x40))

return result
