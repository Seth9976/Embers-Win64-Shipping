// 函数: sub_141613160
// 地址: 0x141613160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
float zmm3[0x4] = *arg3
int64_t rbx = arg1
float zmm13[0x4] = 0x80000000
float zmm14[0x4] = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float zmm10[0x4] = zx.o(0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_208 = (zmm3 ^ 0x80000000)[0]
float var_1fc = _mm_shuffle_ps(zmm3, zmm3, 0xff)[0]
float var_200 = (temp0_1 ^ 0x80000000)[0]
float var_204 = (temp0 ^ 0x80000000)[0]
int32_t* var_1e0 = &var_208
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
int64_t var_210 = rbx
zmm4[0] = zmm4[0] * zmm4[0]
void* var_1f0 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
float zmm1[0x4]
float zmm2[0x4]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm1 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm1[0] = 1f / temp0_3[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm5[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm2 = 0xbf800000
    zmm3 = zx.o(0)
    zmm1 = zx.o(0)

int64_t r12 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rcx_1 = 0
float zmm12[0x4] = 0x7f7fffff
float var_180[0x4] = data_142d3f7e0
int64_t var_198
__builtin_memset(&var_198, 0, 0x14)
float zmm0[0x4] = *(rax_5 + 0x1c)
float var_274 = 3.40282347e+38f
uint32_t zmm11[0x4]

if (zmm0[0] == 0f)
    zmm11 = zx.o(0)
else
    zmm11 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm11[0] = zmm11[0] f* zmm0[0]

zmm11[0] = zmm11[0] f+ arg10
float zmm15[0x4] = 0x358637bd
int32_t i_6 = var_198.d
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
int32_t var_298
uint64_t var_290
int32_t var_288
uint64_t var_270
uint64_t var_260
float var_250
float var_24c
float var_248
int32_t var_240
int32_t var_23c
int32_t var_238
int64_t var_170
int32_t var_168
int64_t var_140
int32_t var_138
int32_t rcx_2

while (true)
    rcx_2 = rcx_1 + 1
    var_298 = rcx_2
    
    if (rcx_1 s>= 0x20)
        break
    
    zmm3[0] = zmm3[0] f* *(rbx + 0x2c)
    void* rcx_3 = *(rbx + 0x10)
    zmm2[0] = zmm2[0] f* *(rbx + 0x28)
    zmm1[0] = zmm1[0] f* *(rbx + 0x30)
    var_24c = (zmm3 ^ zmm13)[0]
    var_250 = (zmm2 ^ zmm13)[0]
    var_248 = (zmm1 ^ zmm13)[0]
    zmm10, zmm11 = sub_141758e70(rcx_3, &var_240, &var_250, zmm10)
    void* rcx_4 = var_1f0
    zmm9 = var_240
    zmm9[0] = zmm9[0] f* *(rbx + 0x28)
    void* rax_7 = *(rcx_4 + 0x10)
    zmm8 = var_23c
    zmm8[0] = zmm8[0] f* *(rbx + 0x2c)
    zmm3 = *(rax_7 + 0x10)
    zmm3[0] = zmm3[0] f* *(rcx_4 + 0x28)
    zmm0 = *(rax_7 + 0x18)
    zmm0[0] = zmm0[0] f* *(rcx_4 + 0x30)
    zmm2 = *(rax_7 + 0x14)
    zmm2[0] = zmm2[0] f* *(rcx_4 + 0x2c)
    zmm7 = var_238
    zmm7[0] = zmm7[0] f* *(rbx + 0x30)
    zmm4 = *arg3
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_8[0x4] = _mm_unpacklo_ps(temp0_5, _mm_unpacklo_ps(zmm2, zmm10[0].q)[0].q)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xc9), temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xd2), temp0_6)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float var_1d0_1 = zmm7[0]
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
    float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_9)
    float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_6)
    float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_8)
    float temp0_25[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_21, temp0_20), temp0_22), arg3[1])
    *(&var_198:4 + (sx.q(i_6) << 2)) = i_6
    zmm9[0] = zmm9[0] - temp0_25[0]
    int64_t r13 = sx.q(var_198.d)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    zmm7[0] = zmm7[0] - temp0_26[0]
    float var_1c0_1 = temp0_26[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    float temp0_28[0x4] = _mm_unpacklo_ps(zmm9, zmm8[0].q)
    int64_t rcx_6 = r13 * 3
    zmm8[0] = zmm8[0] - temp0_27[0]
    float var_1b0_1 = zmm7[0]
    *(&var_170 + (rcx_6 << 2)) = temp0_28.q
    (&var_168)[rcx_6] = var_1d0_1
    i_6 = r13.d + 1
    *(&var_140 + (rcx_6 << 2)) = (_mm_unpacklo_ps(temp0_25, temp0_27[0].q)).q
    (&var_138)[rcx_6] = var_1c0_1
    int64_t var_110
    *(&var_110 + (rcx_6 << 2)) = (_mm_unpacklo_ps(zmm9, zmm8[0].q)).q
    int32_t var_108
    (&var_108)[rcx_6] = var_1b0_1
    var_198.d = i_6
    int32_t rax_13
    
    if (i_6 == 1)
        int64_t rax_17 = sx.q(var_198:4.d)
        int64_t rcx_14 = rax_17 * 3
        var_180[rax_17] = 0x3f800000
        zmm0 = zx.o(*(&var_110 + (rcx_14 << 2)))
        rax_13 = (&var_108)[rcx_14]
    else if (i_6 == 2)
        uint64_t* rax_16 = sub_1416e69d0(&var_270, &var_110, &var_198:4, &var_198, &var_180)
        i_6 = var_198.d
        zmm0 = zx.o(*rax_16)
        rax_13 = rax_16[1].d
    else if (i_6 == 3)
        uint64_t* rax_15
        rax_15, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416fa750(&var_260, &var_110, &var_198, &var_180)
        i_6 = var_198.d
        zmm0 = zx.o(*rax_15)
        rax_13 = rax_15[1].d
    else if (i_6 == 4)
        uint64_t var_1a8[0x2]
        uint64_t* rax_14
        rax_14, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
            sub_1416f9c90(&var_1a8, &var_110, &var_198, &var_180)
        i_6 = var_198.d
        zmm0 = zx.o(*rax_14)
        rax_13 = rax_14[1].d
    else
        int32_t var_278_1 = 0
        zmm0 = _mm_unpacklo_ps(zmm10, zmm10[0].q)
        rax_13 = 0
    
    int32_t var_188
    int64_t r8_4 = sx.q(var_188)
    rbx = sx.q(var_198:4.d)
    int64_t var_190
    int64_t r11_1 = sx.q(var_190.d)
    int64_t r10_1 = sx.q(var_190:4.d)
    var_290 = zmm0.q
    int64_t rdi_1 = r8_4 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_4 = (&var_108)[r14_1]
    int32_t rcx_15 = (&var_108)[rsi_1]
    int32_t r9_4 = (&var_108)[r15_1]
    zmm4 = var_290:4.d
    var_288 = rax_13
    int32_t rax_18 = (&var_108)[rdi_1]
    zmm5 = var_288
    int64_t var_104_1 = *(&var_110 + (r14_1 << 2))
    zmm2 = var_180[r10_1]
    int64_t var_ec_1 = *(&var_110 + (rdi_1 << 2))
    zmm0 = var_180[rbx]
    int64_t var_f8_1 = *(&var_110 + (rsi_1 << 2))
    zmm1 = var_180[r11_1]
    var_110 = *(&var_110 + (r15_1 << 2))
    zmm3 = var_180[r8_4]
    int32_t r8_5 = (&var_168)[r15_1]
    var_180[2] = zmm2[0]
    zmm2 = zx.o(*(&var_170 + (r14_1 << 2)))
    var_180[0] = zmm0[0]
    zmm0 = zx.o(*(&var_170 + (rdi_1 << 2)))
    var_180[1] = zmm1[0]
    zmm1 = zx.o(*(&var_170 + (rsi_1 << 2)))
    var_180[3] = zmm3[0]
    int32_t var_fc_1 = rdx_4
    int32_t rdx_5 = (&var_168)[r14_1]
    int32_t var_f0_1 = rcx_15
    int32_t rcx_16 = (&var_168)[rsi_1]
    int32_t var_e4_1 = rax_18
    int32_t rax_19 = (&var_168)[rdi_1]
    int64_t var_164_1 = zmm2.q
    zmm2 = zx.o(*(&var_140 + (r14_1 << 2)))
    int64_t var_14c_1 = zmm0.q
    zmm0 = zx.o(*(&var_140 + (rdi_1 << 2)))
    int64_t var_158_1 = zmm1.q
    zmm1 = zx.o(*(&var_140 + (rsi_1 << 2)))
    var_170 = *(&var_170 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_140 + (r15_1 << 2)))
    var_168 = r8_5
    int32_t r8_6 = (&var_138)[r15_1]
    int32_t var_15c_1 = rdx_5
    int32_t rdx_6 = (&var_138)[r14_1]
    int32_t var_150_1 = rcx_16
    int32_t rcx_17 = (&var_138)[rsi_1]
    int32_t var_144_1 = rax_19
    int32_t rax_20 = (&var_138)[rdi_1]
    int64_t var_134_1 = zmm2.q
    int64_t var_11c_1 = zmm0.q
    var_198:4.o = data_142e11d00
    var_108 = r9_4
    zmm4[0] = zmm4[0] * zmm4[0]
    var_138 = r8_6
    int64_t var_128_1 = zmm1.q
    var_140 = zmm3.q
    zmm3 = var_290.d
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_12c_1 = rdx_6
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_120_1 = rcx_17
    int32_t var_114_1 = rax_20
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm5[0]
    
    if (zmm4[0] < zmm15[0] || zmm4[0] >= zmm12[0])
        rcx_2 = var_298
        zmm12 = zmm4
        var_274 = zmm4[0]
        break
    
    rbx = var_210
    rcx_1 = var_298
    zmm1 = zmm14
    float temp0_33[0x4] = _mm_sqrt_ss(0, zmm4[0])
    zmm12 = zmm4
    var_274 = zmm4[0]
    zmm1[0] = zmm1[0] / temp0_33[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_2

uint32_t result

if (zmm12[0] <= zmm15[0])
    __builtin_memset(&var_270, 0, 0x20)
    sub_14083ad30(&var_260, 8)
    int64_t var_268
    
    if (var_268:4.d s< 8)
        sub_14083ad30(&var_270, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t var_258_1
            int64_t rdi_2 = sx.q(var_258_1.d)
            int32_t rax_24 = (rdi_2 + 1).d
            var_258_1.d = rax_24
            
            if (rax_24 s> var_258_1:4.d)
                sub_14083a7e0(&var_260)
            
            uint64_t rcx_22 = var_260
            int64_t rdx_8 = rdi_2 * 3
            int32_t rax_25 = *(&var_168 + rbx)
            *(rcx_22 + (rdx_8 << 2)) = *(&var_170 + rbx)
            *(rcx_22 + (rdx_8 << 2) + 8) = rax_25
            int64_t rdi_3 = sx.q(var_268.d)
            int32_t rax_26 = (rdi_3 + 1).d
            var_268.d = rax_26
            
            if (rax_26 s> var_268:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_24 = var_270
            int64_t rdx_10 = rdi_3 * 3
            int64_t zmm0_1 = *(&var_140 + rbx)
            int32_t rax_27 = *(&var_138 + rbx)
            rbx += 0xc
            *(rcx_24 + (rdx_10 << 2)) = zmm0_1
            *(rcx_24 + (rdx_10 << 2) + 8) = rax_27
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_28
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm15_1
    rax_28, zmm10_1, zmm11_1, zmm15_1 = sub_141572e60(&var_260, &var_270, &var_210, &var_1f0, 
        &var_298, &var_290, &var_240, &var_250)
    float zmm2_1[0x4]
    
    if (rax_28 == 2)
        float zmm5_1 = zmm10_1[0]
        int64_t zmm4_1 = zmm10_1[0].q
        
        if (i_6 s> 0)
            float (* rax_31)[0x4] = &var_180
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_31
                rax_31 = &(*rax_31)[1]
                zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_170:4 + r12)
                zmm5_1 = zmm5_1 + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_168 + r12)
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r12)
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f* *(&var_140:4 + r12)
                zmm2_1[0] = zmm2_1[0] f* *(&var_138 + r12)
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                zmm10_1[0] = zmm10_1[0] + zmm2_1[0]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm2_1 = arg8
        zmm11_1[0] = zmm11_1[0] + zmm2_1[0]
        *arg4 = zmm11_1[0]
        *arg7 = var_290
        arg7[2] = var_288
        zmm2_1[0] = zmm2_1[0] f* *arg7
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm2_1[0] = zmm2_1[0] + zmm5_1
        zmm2_1[0] = zmm2_1[0] + zmm10_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm10_1[0]
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        arg5[1].d = zmm2_1[0]
        zmm11_1[0] = zmm11_1[0] f* *arg7
        zmm11_1[0] = zmm11_1[0] f* arg7[1]
        zmm11_1[0] = zmm11_1[0] f* arg7[2]
        zmm10_1[0] = zmm10_1[0] - zmm11_1[0]
        zmm4_1.d = zmm4_1.d f- zmm11_1[0]
        zmm10_1[0] = zmm10_1[0] - zmm11_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm10_1, zmm4_1)).q
        arg6[1].d = zmm10_1[0]
        float temp4_1 = *arg4
        zmm15_1 - temp4_1
        uint64_t rcx_30 = var_270
        rbx.b = zmm15_1 < temp4_1
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        uint64_t rcx_31 = var_260
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = zx.d(rbx.b)
    else
        zmm2_1 = arg8
        float zmm3_1[0x4] = var_250
        *arg7 = var_290
        float zmm0_2[0x4] = var_298
        zmm0_2[0] = zmm0_2[0] + zmm2_1[0]
        arg7[2] = var_288
        zmm0_2[0] = zmm0_2[0] + zmm11_1[0]
        *arg4 = zmm0_2[0]
        zmm2_1[0] = zmm2_1[0] f* *arg7
        uint64_t rcx_27 = var_270
        zmm2_1[0] = zmm2_1[0] f* arg7[1]
        zmm2_1[0] = zmm2_1[0] f* arg7[2]
        zmm2_1[0] = zmm2_1[0] f+ var_240
        zmm2_1[0] = zmm2_1[0] f+ var_23c
        zmm2_1[0] = zmm2_1[0] f+ var_238
        *arg5 = (_mm_unpacklo_ps(zmm2_1, zmm2_1[0].q)).q
        float var_278_5 = zmm2_1[0]
        zmm2_1 = var_24c
        arg5[1].d = var_278_5
        zmm11_1[0] = zmm11_1[0] f* *arg7
        zmm11_1[0] = zmm11_1[0] f* arg7[1]
        zmm11_1[0] = zmm11_1[0] f* arg7[2]
        zmm3_1[0] = zmm3_1[0] - zmm11_1[0]
        zmm0_2 = var_248
        zmm2_1[0] = zmm2_1[0] - zmm11_1[0]
        zmm0_2[0] = zmm0_2[0] - zmm11_1[0]
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
        arg6[1].d = zmm0_2[0]
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        uint64_t rcx_28 = var_260
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        result.b = 1
else
    if (i_6 s> 0)
        float (* rax_21)[0x4] = &var_180
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_21
            rax_21 = &(*rax_21)[1]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm2[0] = zmm2[0] f* *(&var_170:4 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_168 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_140:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_138 + r12)
            zmm10[0] = zmm10[0] + zmm2[0]
            r12 += 0xc
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm10[0] = zmm10[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    zmm5 = 0x3f000000
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm10[0] = zmm10[0] - zmm10[0]
    zmm3 = zx.o(0)
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm3[0] = zmm10[0]
    zmm2 = 0x3f000000
    float temp0_34[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_34[0] = temp0_34[0] * temp0_34[0]
    zmm3[0] = zmm3[0] * temp0_34[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_34[0] = temp0_34[0] * zmm2[0]
    zmm2 = arg8
    temp0_34[0] = temp0_34[0] + temp0_34[0]
    temp0_34[0] = temp0_34[0] * temp0_34[0]
    zmm3[0] = zmm3[0] * temp0_34[0]
    zmm1 = zmm11
    zmm1[0] = zmm1[0] + zmm2[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_34[0] = temp0_34[0] * zmm5[0]
    temp0_34[0] = temp0_34[0] + temp0_34[0]
    zmm10[0] = zmm10[0] * temp0_34[0]
    zmm10[0] = zmm10[0] * temp0_34[0]
    zmm10[0] = zmm10[0] * temp0_34[0]
    float temp0_35[0x4] = _mm_unpacklo_ps(zmm10, zmm10[0].q)
    *arg7 = temp0_35.q
    float temp0_36[0x4] = __sqrtss_xmmss_memss(temp0_35[0], var_274)
    float var_278_2 = zmm10[0]
    zmm1[0] = zmm1[0] - temp0_36[0]
    arg7[2] = var_278_2
    *arg4 = zmm1[0]
    zmm2[0] = zmm2[0] f* *arg7
    zmm2[0] = zmm2[0] f* arg7[1]
    zmm2[0] = zmm2[0] f* arg7[2]
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm1 = zmm11
    *arg5 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
    zmm0 = zmm11
    arg5[1].d = zmm2[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm11[0] = zmm11[0] f* arg7[2]
    zmm10[0] = zmm10[0] - zmm0[0]
    zmm10[0] = zmm10[0] - zmm1[0]
    zmm10[0] = zmm10[0] f- zmm11[0]
    *arg6 = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
    arg6[1].d = zmm10[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2d8)
return result
