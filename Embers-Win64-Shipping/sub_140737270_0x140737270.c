// 函数: sub_140737270
// 地址: 0x140737270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
*(arg2 + 0x10) = &rax[1]
int32_t r9_1 = zx.d(*rax) & 0x7fff
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

void var_198
int32_t* result = sub_140742680(&var_198, arg2)
int32_t i_1 = 0
int128_t zmm7
zmm7.d = 1f f/ *(rdi + 0x190)

if (*(arg2 + 0x40) s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    
    do
        float zmm3[0x4] = zx.o(0)
        float zmm5[0x4] = zx.o(0)
        zmm6 = zx.o(0)
        char var_2f
        float zmm2[0x4]
        
        if (var_2f != 0)
            zmm2 = data_142d3f660
            float temp0_2[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x180))
            float temp0_4[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0x160))
            float temp0_6[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0x170))
            float temp0_8[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0x150))
            zmm3 = _mm_add_ps(_mm_add_ps(temp0_2, temp0_6), _mm_add_ps(temp0_4, temp0_8))
            zmm5 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            zmm6 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        
        char var_30
        
        if (var_30 != 0 || var_2f != 0)
            zmm2 = data_142d3f660
            void* var_188
            float* rdx_8 = var_188
            float temp0_15[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xff), *(rdi + 0x100))
            float temp0_17[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), *(rdi + 0xe0))
            float temp0_19[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), *(rdi + 0xf0))
            float temp0_21[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), *(rdi + 0xd0))
            int32_t var_194
            var_188 = &rdx_8[sx.q(var_194)]
            float temp0_24[0x4] =
                _mm_add_ps(_mm_add_ps(temp0_15, temp0_19), _mm_add_ps(temp0_17, temp0_21))
            *rdx_8 = temp0_24[0]
            void* var_170
            float* rdx_9 = var_170
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
            int32_t var_17c
            var_170 = &rdx_9[sx.q(var_17c)]
            *rdx_9 = temp0_25[0]
            void* var_158
            float* rdx_10 = var_158
            int32_t result_1
            result = sx.q(result_1)
            var_158 = &rdx_10[result]
            *rdx_10 = temp0_26[0]
            
            if (var_2f != 0)
                void* var_140
                float* rdx_11 = var_140
                temp0_24[0] = temp0_24[0] - zmm3[0]
                temp0_25[0] = temp0_25[0] - zmm5[0]
                temp0_26[0] = temp0_26[0] - zmm6[0]
                temp0_24[0] = temp0_24[0] f* zmm7.d
                int32_t var_14c
                var_140 = &rdx_11[sx.q(var_14c)]
                temp0_25[0] = temp0_25[0] f* zmm7.d
                *rdx_11 = temp0_24[0]
                float* var_128
                float* rdx_12 = var_128
                temp0_26[0] = temp0_26[0] f* zmm7.d
                int32_t var_134
                var_128 = &rdx_12[sx.q(var_134)]
                *rdx_12 = temp0_25[0]
                void* var_110
                float* rdx_13 = var_110
                int32_t result_2
                result = sx.q(result_2)
                var_110 = &rdx_13[result]
                *rdx_13 = temp0_26[0]
        
        char var_2e
        
        if (var_2e != 0)
            void* var_f8
            int32_t* rdx_14 = var_f8
            int32_t var_104
            var_f8 = &rdx_14[sx.q(var_104)]
            *rdx_14 = 0
            void* var_e0
            int32_t* rdx_15 = var_e0
            int32_t var_ec
            var_e0 = &rdx_15[sx.q(var_ec)]
            *rdx_15 = 0
            void* var_c8
            int32_t* rdx_16 = var_c8
            int32_t result_3
            result = sx.q(result_3)
            var_c8 = &rdx_16[result]
            *rdx_16 = 0x3f800000
        
        char var_2d
        
        if (var_2d != 0)
            void* var_b0
            int32_t* rdx_17 = var_b0
            int32_t var_bc
            var_b0 = &rdx_17[sx.q(var_bc)]
            *rdx_17 = 0
            void* var_98
            int32_t* rdx_18 = var_98
            int32_t var_a4
            var_98 = &rdx_18[sx.q(var_a4)]
            *rdx_18 = 0x3f800000
            void* var_80
            int32_t* rdx_19 = var_80
            int32_t result_4
            result = sx.q(result_4)
            var_80 = &rdx_19[result]
            *rdx_19 = 0
        
        char var_2c
        
        if (var_2c != 0)
            void* var_68
            int32_t* rdx_20 = var_68
            int32_t var_74
            var_68 = &rdx_20[sx.q(var_74)]
            *rdx_20 = 0x3f800000
            void* var_50
            int32_t* rdx_21 = var_50
            int32_t var_5c
            var_50 = &rdx_21[sx.q(var_5c)]
            *rdx_21 = 0
            void* var_38
            int32_t* rdx_22 = var_38
            int32_t result_5
            result = sx.q(result_5)
            var_38 = &rdx_22[result]
            *rdx_22 = 0
        
        i_1 += 1
    while (i_1 s< *(arg2 + 0x40))

return result
