// 函数: sub_1406fd390
// 地址: 0x1406fd390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = *(arg2 + 0x20)
int32_t i = 0
int128_t zmm7
int128_t var_28 = zmm7
int16_t* rax = *(arg2 + 0x10)
int32_t r10 = 0
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = zx.d(*rax) & 0x7fff
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        r10 += 1
    while (r8_1 s>= rax_1)

uint32_t rcx_2 = zx.d(rax[1])
void* rdi = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(r10) << 3)) + sx.q(r8_1))) << 3))
*(arg2 + 0x10) = &rax[2]

if ((not.b((rcx_2 u>> 0xf).b) & 1) != 0)
    int32_t rax_8 = *r9
    int32_t rdx_3 = rcx_2 & 0x7fff
    
    if (rdx_3 s>= rax_8)
        int64_t rcx_3 = 0
        
        do
            rdx_3 -= rax_8
            rcx_3 += 1
            rax_8 = r9[rcx_3]
        while (rdx_3 s>= rax_8)

float zmm6[0x4]
float var_18[0x4] = zmm6
void var_158
int32_t* result = sub_1407422f0(&var_158, arg2)
int64_t var_1c8
char var_67
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]

if (var_67 != 0)
    float var_198[0x4] = *(rdi + 0xd0)
    float var_188_1[0x4] = *(rdi + 0xe0)
    float var_178_1[0x4] = *(rdi + 0xf0)
    float var_168_1[0x4] = *(rdi + 0x100)
    zmm8, zmm9, zmm10 = sub_1407740e0(&var_198, 0x322bcc77)
    result, zmm6 = sub_140ae1ba0(&var_198, &var_1c8)
    
    if (var_67 != 0)
        var_198 = *(rdi + 0xd0)
        float var_188_2[0x4] = *(rdi + 0xe0)
        float var_178_2[0x4] = *(rdi + 0xf0)
        float var_168_2[0x4] = *(rdi + 0x100)
        zmm8, zmm9, zmm10 = sub_1407740e0(&var_198, zmm6)
        result = sub_140ae1ba0(&var_198, &var_1c8)

zmm7.d = 1f f/ *(rdi + 0x190)

if (*(arg2 + 0x40) s> 0)
    float var_38_1[0x4] = zmm8
    float var_48_1[0x4] = zmm9
    float var_58_1[0x4] = zmm10
    int32_t var_1ac_1 = 0x3f800000
    
    do
        zmm8 = data_143dbb1f8
        zmm9 = data_143dbb1fc
        float var_1b8[0x4]
        var_1b8[0] = zmm8[0]
        zmm10 = data_143dbb200
        float temp0_1[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
        temp0_1[0] = zmm9[0]
        var_1c8 = 0
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm10[0]
        int32_t var_1c0_1 = 0
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
        var_1b8 = temp0_3
        float temp0_5[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(rdi + 0x100))
        float temp0_7[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(rdi + 0xe0))
        float temp0_9[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(rdi + 0xf0))
        float temp0_11[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(rdi + 0xd0))
        float temp0_14[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
        char var_66
        
        if (var_66 != 0)
            int32_t var_19c_1 = 0x3f800000
            float var_1a8[0x4]
            var_1a8[0] = zmm8[0]
            var_1c8 = 0
            float temp0_17[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
            temp0_17[0] = zmm9[0]
            int32_t var_1c0_2 = 0
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc6)
            temp0_18[0] = zmm10[0]
            float temp0_19[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
            var_1a8 = temp0_19
            float temp0_21[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), *(rdi + 0x180))
            float temp0_23[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0x55), *(rdi + 0x160))
            float temp0_25[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0xaa), *(rdi + 0x170))
            float temp0_27[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_19, temp0_19, 0), *(rdi + 0x150))
            zmm8 = _mm_add_ps(_mm_add_ps(temp0_21, temp0_25), _mm_add_ps(temp0_23, temp0_27))
            zmm9 = _mm_shuffle_ps(zmm8, zmm8, 0x55)
            zmm10 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        
        if (var_67 != 0)
            float* var_100
            float* rdx_7 = var_100
            float zmm1[0x4] = data_14399f720:4.d
            float zmm2[0x4] = data_14399f720:8.d
            int32_t zmm3 = data_14399f720:0xc.d
            int32_t var_10c
            var_100 = &rdx_7[sx.q(var_10c)]
            *rdx_7 = data_14399f720.d[0]
            void* var_e8
            float* rdx_8 = var_e8
            int32_t var_f4
            var_e8 = &rdx_8[sx.q(var_f4)]
            *rdx_8 = zmm1[0]
            void* var_d0
            float* rdx_9 = var_d0
            int32_t var_dc
            var_d0 = &rdx_9[sx.q(var_dc)]
            *rdx_9 = zmm2[0]
            void* var_b8
            int32_t* rdx_10 = var_b8
            int32_t result_2
            result = sx.q(result_2)
            var_b8 = &rdx_10[result]
            *rdx_10 = zmm3
        
        char var_68
        
        if (var_68 != 0)
            void* var_148
            float* rdx_11 = var_148
            int32_t var_154
            var_148 = &rdx_11[sx.q(var_154)]
            *rdx_11 = temp0_14[0]
            void* var_130
            float* rdx_12 = var_130
            int32_t var_13c
            var_130 = &rdx_12[sx.q(var_13c)]
            *rdx_12 = temp0_15[0]
            void* var_118
            float* rdx_13 = var_118
            int32_t result_1
            result = sx.q(result_1)
            var_118 = &rdx_13[result]
            *rdx_13 = temp0_16[0]
        
        if (var_66 != 0)
            void* var_a0
            float* rdx_14 = var_a0
            temp0_14[0] = temp0_14[0] - zmm8[0]
            temp0_15[0] = temp0_15[0] - zmm9[0]
            temp0_16[0] = temp0_16[0] - zmm10[0]
            temp0_14[0] = temp0_14[0] f* zmm7.d
            int32_t var_ac
            var_a0 = &rdx_14[sx.q(var_ac)]
            temp0_15[0] = temp0_15[0] f* zmm7.d
            *rdx_14 = temp0_14[0]
            void* var_88
            float* rdx_15 = var_88
            temp0_16[0] = temp0_16[0] f* zmm7.d
            int32_t var_94
            var_88 = &rdx_15[sx.q(var_94)]
            *rdx_15 = temp0_15[0]
            void* var_70
            float* rdx_16 = var_70
            int32_t result_3
            result = sx.q(result_3)
            var_70 = &rdx_16[result]
            *rdx_16 = temp0_16[0]
        
        i += 1
    while (i s< *(arg2 + 0x40))

return result
