// 函数: sub_141607c10
// 地址: 0x141607c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
float zmm4[0x4] = *arg3
int64_t r12 = 0
float zmm15[0x4] = 0x7f7fffff
float zmm0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa) ^ 0x80000000
float zmm10[0x4] = zx.o(0)
float var_1e8
int32_t* var_1c8 = &var_1e8
void* rax_4 = *(arg1 + 0x10)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float var_1e0 = zmm0[0]
zmm0 = data_142d3f7e0
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
var_1e8 = (zmm4 ^ 0x80000000)[0]
float var_1e4 = (temp0_1 ^ 0x80000000)[0]
float var_1dc = temp0_2[0]
void* var_238 = arg1
void* var_1d8 = arg2
float var_188[0x4] = zmm0
zmm0 = *(rax_4 + 0x1c)
bool cond:0 = zmm0[0] == 0f
int32_t rcx_1 = 0
int32_t* var_260 = arg10
int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
uint32_t zmm11[0x4]

if (cond:0)
    zmm11 = zx.o(0)
else
    zmm11 = _mm_and_ps(*(arg1 + 0x28), 0x7fffffff)
    zmm11[0] = zmm11[0] f* zmm0[0]

void* rax_5 = *(arg2 + 0x10)
zmm11[0] = zmm11[0] f+ arg8
zmm0 = *(rax_5 + 0x1c)
uint32_t zmm12[0x4]

if (zmm0[0] == 0f)
    zmm12 = zx.o(0)
else
    zmm12 = _mm_and_ps(*(arg2 + 0x28), 0x7fffffff)
    zmm12[0] = zmm12[0] f* zmm0[0]

zmm12[0] = zmm12[0] f+ arg9
float zmm13[0x4] = 0x358637bd
int32_t i_6 = var_1a0.d
int64_t rbx
int64_t arg_8 = rbx
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
uint64_t var_280
int32_t var_278
uint64_t var_258
uint64_t var_248
float var_208
float var_1f8
int64_t var_178
int32_t var_170
int64_t var_148
int32_t var_140
int32_t rcx_2
uint32_t zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm14[0x4]

while (true)
    rcx_2 = rcx_1 + 1
    
    if (rcx_1 s>= 0x20)
        break
    
    void* rax_7 = var_238
    void* rcx_3 = *(rax_7 + 0x10)
    zmm9 = *(rcx_3 + 0x10)
    zmm9[0] = zmm9[0] f* *(rax_7 + 0x28)
    zmm8 = *(rcx_3 + 0x14)
    zmm8[0] = zmm8[0] f* *(rax_7 + 0x2c)
    zmm7 = *(rcx_3 + 0x18)
    zmm7[0] = zmm7[0] f* *(rax_7 + 0x30)
    void* rcx_4 = var_1d8
    var_1f8 = zmm7[0]
    void* rax_8 = *(rcx_4 + 0x10)
    zmm3 = *(rcx_4 + 0x28)
    zmm3[0] = zmm3[0] f* *(rax_8 + 0x10)
    zmm0 = *(rax_8 + 0x18)
    zmm0[0] = zmm0[0] f* *(rcx_4 + 0x30)
    zmm2 = *(rax_8 + 0x14)
    zmm2[0] = zmm2[0] f* *(rcx_4 + 0x2c)
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, zmm10[0].q)
    zmm4 = *arg3
    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), zmm1)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), zmm1)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
    float temp0_25[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, temp0_8), temp0_19), temp0_21), arg3[1])
    *(&var_1a0:4 + (sx.q(i_6) << 2)) = i_6
    zmm9[0] = zmm9[0] - temp0_25[0]
    int64_t r13 = sx.q(var_1a0.d)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    var_208 = temp0_26[0]
    zmm7[0] = zmm7[0] - temp0_26[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    int64_t rcx_6 = r13 * 3
    zmm8[0] = zmm8[0] - temp0_27[0]
    i_6 = r13.d + 1
    float temp0_28[0x4] = _mm_unpacklo_ps(zmm9, zmm8[0].q)
    float var_1b8_1 = zmm7[0]
    *(&var_178 + (rcx_6 << 2)) = temp0_28.q
    *(&var_148 + (rcx_6 << 2)) = (_mm_unpacklo_ps(temp0_25, temp0_27[0].q)).q
    (&var_170)[rcx_6] = var_1f8
    (&var_140)[rcx_6] = var_208
    int64_t var_118
    *(&var_118 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm9, zmm8[0].q)).q
    int32_t var_110
    (&var_110)[rcx_6] = var_1b8_1
    var_1a0.d = i_6
    int32_t rax_14
    
    if (i_6 == 1)
        int64_t rax_18 = sx.q(var_1a0:4.d)
        int64_t rcx_14 = rax_18 * 3
        var_188[rax_18] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_14 << 2)))
        rax_14 = (&var_110)[rcx_14]
    else if (i_6 == 2)
        uint64_t* rax_17 = sub_1416e69d0(&var_258, &var_118, &var_1a0:4, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_17)
        rax_14 = rax_17[1].d
    else if (i_6 == 3)
        uint64_t* rax_16
        rax_16, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_248, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_16)
        rax_14 = rax_16[1].d
    else if (i_6 == 4)
        uint64_t var_1b0[0x2]
        uint64_t* rax_15
        rax_15, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1b0, &var_118, &var_1a0, &var_188)
        i_6 = var_1a0.d
        zmm0 = zx.o(*rax_15)
        rax_14 = rax_15[1].d
    else
        int32_t var_268_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm10, zmm10[0].q)
        rax_14 = 0
    
    int32_t var_190
    int64_t r8_3 = sx.q(var_190)
    rbx = sx.q(var_1a0:4.d)
    int64_t var_198
    int64_t r11_1 = sx.q(var_198.d)
    int64_t r10_1 = sx.q(var_198:4.d)
    int64_t rdi_1 = r8_3 * 3
    var_280 = zmm0.q
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_3 = (&var_110)[r14_1]
    int32_t rcx_15 = (&var_110)[rsi_1]
    int32_t r9_4 = (&var_110)[r15_1]
    var_278 = rax_14
    int32_t rax_19 = (&var_110)[rdi_1]
    int64_t var_10c_1 = *(&var_118 + (r14_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rdi_1 << 2))
    zmm0 = var_188[rbx]
    int64_t var_100_1 = *(&var_118 + (rsi_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r15_1 << 2))
    zmm3 = var_188[r8_3]
    int32_t r8_4 = (&var_170)[r15_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rdi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_3
    int32_t rdx_4 = (&var_170)[r14_1]
    int32_t var_f8_1 = rcx_15
    int32_t rcx_16 = (&var_170)[rsi_1]
    int32_t var_ec_1 = rax_19
    int32_t rax_20 = (&var_170)[rdi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r14_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rdi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (rsi_1 << 2)))
    var_178 = *(&var_178 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r15_1 << 2)))
    var_170 = r8_4
    int32_t r8_5 = (&var_140)[r15_1]
    int32_t var_164_1 = rdx_4
    int32_t rdx_5 = (&var_140)[r14_1]
    int32_t var_158_1 = rcx_16
    int32_t rcx_17 = (&var_140)[rsi_1]
    int32_t var_14c_1 = rax_20
    int32_t rax_21 = (&var_140)[rdi_1]
    int64_t var_13c_1 = zmm2.q
    zmm2 = var_280:4.d
    int64_t var_124_1 = zmm0.q
    var_1a0:4.o = data_142e11d00
    var_110 = r9_4
    zmm0 = var_280.d
    zmm2[0] = zmm2[0] * zmm2[0]
    var_140 = r8_5
    int64_t var_130_1 = zmm1.q
    zmm1 = var_278
    zmm0[0] = zmm0[0] * zmm0[0]
    int32_t var_134_1 = rdx_5
    zmm1[0] = zmm1[0] f* zmm1[0]
    int32_t var_128_1 = rcx_17
    zmm2[0] = zmm2[0] + zmm0[0]
    var_148 = zmm3.q
    int32_t var_11c_1 = rax_21
    zmm2[0] = zmm2[0] f+ zmm1[0]
    
    if (zmm2[0] < zmm13[0] || zmm2[0] >= zmm15[0])
        zmm15 = zmm2
        break
    
    rcx_1 = rcx_2
    zmm15 = zmm2
    continue

int32_t* r9_5 = var_260

if (r9_5 != 0)
    *r9_5 = rcx_2

float result

if (zmm15[0] <= zmm13[0])
    __builtin_memset(&var_258, 0, 0x20)
    sub_14083ad30(&var_248, 8)
    int64_t var_250
    
    if (var_250:4.d s< 8)
        sub_14083ad30(&var_258, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_240_1
            int64_t rdi_2 = sx.q(var_240_1.d)
            int32_t rax_25 = (rdi_2 + 1).d
            var_240_1.d = rax_25
            
            if (rax_25 s> var_240_1:4.d)
                sub_14083a7e0(&var_248)
            
            uint64_t rcx_22 = var_248
            int64_t rdx_7 = rdi_2 * 3
            int32_t rax_26 = *(&var_170 + rbx)
            *(rcx_22 + (rdx_7 << 2)) = *(&var_178 + rbx)
            *(rcx_22 + (rdx_7 << 2) + 8) = rax_26
            int64_t rdi_3 = sx.q(var_250.d)
            int32_t rax_27 = (rdi_3 + 1).d
            var_250.d = rax_27
            
            if (rax_27 s> var_250:4.d)
                sub_14083a7e0(&var_258)
            
            uint64_t rcx_24 = var_258
            int64_t rdx_9 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_148 + rbx)
            int32_t rax_28 = *(&var_140 + rbx)
            rbx += 0xc
            *(rcx_24 + (rdx_9 << 2)) = zmm0_1
            *(rcx_24 + (rdx_9 << 2) + 8) = rax_28
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t var_210
    int32_t var_200
    int32_t rax_29
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1
    rax_29, zmm10_1, zmm11_1, zmm12_1, zmm13_1 = sub_14159e110(&var_248, &var_258, &var_238, 
        &var_1d8, &var_260, &var_280, &var_210, &var_200)
    float zmm2_1[0x4]
    
    if (rax_29 == 2)
        float zmm5_1 = zmm10_1[0]
        int64_t zmm4_1 = zmm10_1[0].q
        
        if (i_6 s> 0)
            float (* rax_32)[0x4] = &var_188
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_32
                rax_32 = &(*rax_32)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r12)
                zmm5_1 = zmm5_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r12)
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm12_1[0] = zmm12_1[0] + zmm11_1[0]
        *arg4 = zmm12_1[0]
        *arg7 = var_280
        arg7[2] = var_278
        zmm11_1[0] = zmm11_1[0] f* *arg7
        zmm11_1[0] = zmm11_1[0] f* arg7[1]
        zmm11_1[0] = zmm11_1[0] f* arg7[2]
        zmm11_1[0] = zmm11_1[0] + zmm5_1
        zmm11_1[0] = zmm11_1[0] + zmm10_1[0]
        zmm11_1[0] = zmm11_1[0] + zmm10_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm11_1, zmm11_1[0].q)).q
        arg5[1].d = zmm11_1[0]
        zmm12_1[0] = zmm12_1[0] f* *arg7
        zmm12_1[0] = zmm12_1[0] f* arg7[1]
        zmm12_1[0] = zmm12_1[0] f* arg7[2]
        zmm10_1[0] = zmm10_1[0] - zmm12_1[0]
        zmm4_1.d = zmm4_1.d f- zmm12_1[0]
        zmm10_1[0] = zmm10_1[0] - zmm12_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm10_1, zmm4_1)).q
        arg6[1].d = zmm10_1[0]
        uint32_t temp4_1 = *arg4
        zmm13_1 f- temp4_1
        uint64_t rcx_30 = var_258
        rbx.b = zmm13_1 f< temp4_1
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        uint64_t rcx_31 = var_248
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = zx.d(rbx.b)
    else
        float zmm3_1[0x4] = var_200
        int32_t var_1fc
        zmm2_1 = var_1fc
        *arg7 = var_280
        float zmm0_2[0x4] = var_260.d
        arg7[2] = var_278
        zmm0_2[0] = zmm0_2[0] + zmm11_1[0]
        zmm0_2[0] = zmm0_2[0] + zmm12_1[0]
        *arg4 = zmm0_2[0]
        zmm11_1[0] = zmm11_1[0] f* *arg7
        uint64_t rcx_27 = var_258
        zmm11_1[0] = zmm11_1[0] f* arg7[1]
        zmm11_1[0] = zmm11_1[0] f* arg7[2]
        zmm11_1[0] = zmm11_1[0] f+ var_210
        int32_t var_20c
        zmm11_1[0] = zmm11_1[0] f+ var_20c
        zmm11_1[0] = zmm11_1[0] + var_208
        *arg5 = (_mm_unpacklo_ps(zmm11_1, zmm11_1[0].q)).q
        arg5[1].d = zmm11_1[0]
        zmm12_1[0] = zmm12_1[0] f* *arg7
        zmm12_1[0] = zmm12_1[0] f* arg7[1]
        zmm12_1[0] = zmm12_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm12_1[0]
        zmm0_2 = var_1f8
        zmm2_1[0] = zmm2_1[0] - zmm12_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm12_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_248
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        result.b = 1
else
    float var_c8_1[0x4] = zmm14
    float var_288_2 = zmm10[0]
    var_260.d = zmm10[0]
    
    if (i_6 s> 0)
        float (* rax_22)[0x4] = &var_188
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_22
            rax_22 = &(*rax_22)[1]
            zmm1 = zmm2
            zmm2[0] = zmm2[0] f* *(&var_178 + r12)
            zmm1[0] = zmm1[0] f* *(&var_178:4 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm10[0] = zmm10[0] f+ zmm1[0]
            zmm1 = zmm2
            zmm1[0] = zmm1[0] f* *(&var_148 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_148:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm10[0] = zmm10[0] f+ zmm1[0]
            r12 += 0xc
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm10[0] = zmm10[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        var_260.d = zmm10[0]
        var_288_2 = zmm10[0]
    
    float zmm5[0x4] = 0x3f000000
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm3 = zx.o(0)
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm1 = zmm10
    zmm1[0] = zmm1[0] f* zmm10[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm10[0] = zmm10[0] f+ zmm1[0]
    zmm3[0] = zmm10[0]
    zmm2 = 0x3f000000
    float temp0_33[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_33[0] = temp0_33[0] * temp0_33[0]
    zmm1 = zmm3
    zmm1[0] = zmm1[0] f* temp0_33[0]
    zmm2[0] = 0.5f f- zmm1[0]
    temp0_33[0] = temp0_33[0] * zmm2[0]
    temp0_33[0] = temp0_33[0] + temp0_33[0]
    zmm1 = temp0_33
    zmm1[0] = zmm1[0] f* temp0_33[0]
    zmm3[0] = zmm3[0] f* zmm1[0]
    zmm12[0] = zmm12[0] f+ zmm11[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_33[0] = temp0_33[0] * zmm5[0]
    temp0_33[0] = temp0_33[0] + temp0_33[0]
    zmm10[0] = zmm10[0] * temp0_33[0]
    zmm10[0] = zmm10[0] * temp0_33[0]
    zmm10[0] = zmm10[0] * temp0_33[0]
    *arg7 = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
    float temp0_35[0x4] = _mm_sqrt_ss(0, zmm15[0])
    float var_268_2 = zmm10[0]
    zmm12[0] = zmm12[0] f- temp0_35[0]
    arg7[2] = var_268_2
    zmm0 = zmm11
    *arg4 = zmm12[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm11[0] = zmm11[0] f* arg7[1]
    zmm11[0] = zmm11[0] f* arg7[2]
    zmm0[0] = zmm0[0] + zmm10[0]
    zmm11[0] = zmm11[0] f+ var_288_2
    zmm11[0] = zmm11[0] f+ var_260.d
    *arg5 = (_mm_unpacklo_ps(zmm0, zmm11[0].q)).q
    zmm0 = zmm12
    arg5[1].d = zmm11[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm12[0] = zmm12[0] f* arg7[1]
    zmm12[0] = zmm12[0] f* arg7[2]
    zmm10[0] = zmm10[0] - zmm0[0]
    zmm10[0] = zmm10[0] f- zmm12[0]
    zmm10[0] = zmm10[0] f- zmm12[0]
    *arg6 = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
    arg6[1].d = zmm10[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2c8)
return result
