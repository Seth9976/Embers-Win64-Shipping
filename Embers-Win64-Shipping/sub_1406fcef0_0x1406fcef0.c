// 函数: sub_1406fcef0
// 地址: 0x1406fcef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_28 = zmm7
int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = zx.d(*rax) & 0x7fff
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

uint32_t rcx_2 = zx.d(rax[1])
void* rsi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
*(arg2 + 0x10) = &rax[2]

if ((not.b((rcx_2 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *r9
    int32_t rdx_4 = rcx_2 & 0x7fff
    
    if (rdx_4 s>= rax_8)
        int64_t rcx_3 = 0
        
        do
            rdx_4 -= rax_8
            rcx_3 += 1
            rax_8 = r9[rcx_3]
        while (rdx_4 s>= rax_8)

float zmm6[0x4]
float var_18[0x4] = zmm6
uint32_t var_1c8 = 0xffffffff
int32_t* result_5 = nullptr
int32_t var_1b8 = 0
sub_140767bd0(&var_1c8, arg2)
void var_138
int32_t* result = sub_1407422f0(&var_138, arg2)
float var_198[0x4]
char var_47
int128_t zmm8

if (var_47 != 0)
    float var_178[0x4] = *(rsi + 0xd0)
    float var_168_1[0x4] = *(rsi + 0xe0)
    float var_158_1[0x4] = *(rsi + 0xf0)
    float var_148_1[0x4] = *(rsi + 0x100)
    zmm8 = sub_1407740e0(&var_178, 0x322bcc77)
    result, zmm6 = sub_140ae1ba0(&var_178, &var_198)
    
    if (var_47 != 0)
        var_178 = *(rsi + 0xd0)
        float var_168_2[0x4] = *(rsi + 0xe0)
        float var_158_2[0x4] = *(rsi + 0xf0)
        float var_148_2[0x4] = *(rsi + 0x100)
        zmm8 = sub_1407740e0(&var_178, zmm6)
        result = sub_140ae1ba0(&var_178, &var_198)

zmm7.d = 1f f/ *(rsi + 0x190)

if (*(arg2 + 0x40) s> 0)
    int32_t* result_4 = result_5
    int128_t var_38_1 = zmm8
    int32_t var_17c_1 = 0x3f800000
    int32_t var_18c_1 = 0x3f800000
    
    do
        int32_t zmm4 = data_143dbb1f8
        result = result_4
        result_4 = &result_4[sx.q(var_1b8)]
        float var_188[0x4]
        var_188[0] = zmm4
        int32_t zmm5 = data_143dbb1fc
        zmm6 = data_143dbb200
        zmm8 = *result
        float temp0_1[0x4] = _mm_shuffle_ps(var_188, var_188, 0xe1)
        temp0_1[0] = zmm5
        int64_t var_1a8_1 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm6[0]
        int32_t var_1a0_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_188 = temp0_3
        float temp0_5[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rsi + 0xf0))
        var_1c8.q = 0
        float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rsi + 0xd0))
        result_5.d = 0
        float temp0_9[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rsi + 0x100))
        float temp0_11[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rsi + 0xe0))
        float temp0_12[0x4] = _mm_add_ps(temp0_5, temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_7, temp0_11)
        float zmm3[0x4] = var_198
        zmm3[0] = zmm4
        float temp0_14[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_14[0] = zmm5
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xc6)
        float temp0_16[0x4] = _mm_add_ps(temp0_12, temp0_13)
        temp0_15[0] = zmm6[0]
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
        var_198 = temp0_17
        float temp0_19[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), *(rsi + 0x180))
        var_1a8_1.o = temp0_16
        float temp0_21[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0xaa), *(rsi + 0x170))
        float temp0_23[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_17, temp0_17, 0), *(rsi + 0x150))
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
        var_1c8.o = _mm_add_ps(_mm_add_ps(temp0_21, temp0_19), 
            _mm_add_ps(temp0_23, __mulps_xmmps_memps(temp0_24, *(rsi + 0x160))))
        float zmm1[0x4]
        float zmm2[0x4]
        
        if (var_47 != 0)
            void* var_e0
            float* rdx_9 = var_e0
            zmm1 = data_14399f720:4.d
            zmm2 = data_14399f720:8.d
            zmm3 = data_14399f720:0xc.d
            int32_t var_ec
            var_e0 = &rdx_9[sx.q(var_ec)]
            *rdx_9 = data_14399f720.d[0]
            void* var_c8
            float* rdx_10 = var_c8
            int32_t var_d4
            var_c8 = &rdx_10[sx.q(var_d4)]
            *rdx_10 = zmm1[0]
            void* var_b0
            float* rdx_11 = var_b0
            int32_t var_bc
            var_b0 = &rdx_11[sx.q(var_bc)]
            *rdx_11 = zmm2[0]
            void* var_98
            float* rdx_12 = var_98
            int32_t result_2
            result = sx.q(result_2)
            var_98 = &rdx_12[result]
            *rdx_12 = zmm3[0]
        
        zmm3 = var_1c8
        zmm5 = result_5.d
        float zmm0[0x4] = var_1a8_1.d
        zmm1 = var_1a8_1:4.d
        zmm0[0] = zmm0[0] - zmm3[0]
        zmm2 = var_1a0_1
        int32_t var_1c4
        zmm1[0] = zmm1[0] f- var_1c4
        zmm2[0] = zmm2[0] f- zmm5
        zmm0[0] = zmm0[0] f* zmm8.d
        zmm1[0] = zmm1[0] f* zmm8.d
        zmm2[0] = zmm2[0] f* zmm8.d
        zmm0[0] = zmm0[0] + zmm3[0]
        zmm1[0] = zmm1[0] f+ var_1c4
        zmm2[0] = zmm2[0] f+ zmm5
        char var_48
        
        if (var_48 != 0)
            void* var_128
            float* rdx_13 = var_128
            int32_t var_134
            var_128 = &rdx_13[sx.q(var_134)]
            *rdx_13 = zmm0[0]
            void* var_110
            float* rdx_14 = var_110
            int32_t var_11c
            var_110 = &rdx_14[sx.q(var_11c)]
            *rdx_14 = zmm1[0]
            void* var_f8
            float* rdx_15 = var_f8
            int32_t result_1
            result = sx.q(result_1)
            var_f8 = &rdx_15[result]
            *rdx_15 = zmm2[0]
        
        char var_46
        
        if (var_46 != 0)
            void* var_80
            float* rdx_16 = var_80
            zmm0[0] = zmm0[0] - zmm3[0]
            zmm1[0] = zmm1[0] f- var_1c4
            zmm2[0] = zmm2[0] f- zmm5
            zmm0[0] = zmm0[0] f* zmm7.d
            int32_t var_8c
            var_80 = &rdx_16[sx.q(var_8c)]
            zmm1[0] = zmm1[0] f* zmm7.d
            *rdx_16 = zmm0[0]
            void* var_68
            float* rdx_17 = var_68
            zmm2[0] = zmm2[0] f* zmm7.d
            int32_t var_74
            var_68 = &rdx_17[sx.q(var_74)]
            *rdx_17 = zmm1[0]
            void* var_50
            float* rdx_18 = var_50
            int32_t result_3
            result = sx.q(result_3)
            var_50 = &rdx_18[result]
            *rdx_18 = zmm2[0]
        
        i += 1
    while (i s< *(arg2 + 0x40))

return result
