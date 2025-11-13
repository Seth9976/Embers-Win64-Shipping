// 函数: sub_1415f5e60
// 地址: 0x1415f5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t r12 = 0
float var_298 = 0f
float zmm3[0x4] = *arg3
float zmm9[0x4] = zx.o(0)
float zmm8[0x4] = 0x3f800000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_208 = (zmm3 ^ 0x80000000)[0]
float var_1fc = _mm_shuffle_ps(zmm3, zmm3, 0xff)[0]
float var_200 = (temp0_1 ^ 0x80000000)[0]
float var_204 = (temp0 ^ 0x80000000)[0]
int32_t* var_1d0 = &var_208
int32_t r13 = 0
zmm3 = *arg9 ^ 0x80000000
float zmm5[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
void* var_210 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_1e0 = arg2
zmm3[0] = zmm3[0] * zmm3[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm5[0] = zmm5[0] + zmm3[0]
zmm5[0] = zmm5[0] + zmm6[0]
float zmm1[0x4]
float zmm2[0x4]
bool cond:0_1

if (not(zmm5[0] < 9.99999975e-05f))
    zmm1 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm5[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm1[0] = 1f / temp0_3[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm5[0]
    zmm1[0] = zmm1[0] * zmm6[0]

if (zmm5[0] < 9.99999975e-05f || not(cond:0_1))
    zmm2 = 0xbf800000
    zmm3 = zx.o(0)
    zmm1 = zx.o(0)

float zmm0[0x4] = data_142d3f7e0
float rcx = 0f
void* rax_6 = *(arg2 + 0x10)
float zmm7[0x4] = 0x7f7fffff
float zmm11[0x4] = arg8
zmm11[0] = zmm11[0] f+ *(arg1 + 0x2c)
float var_180[0x4] = zmm0
int64_t var_198
__builtin_memset(&var_198, 0, 0x14)
zmm0 = *(rax_6 + 0x1c)
float var_274 = 3.40282347e+38f
uint32_t zmm10[0x4]

if (zmm0[0] == 0f)
    zmm10 = zx.o(0)
else
    zmm10 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm10[0] = zmm10[0] f* zmm0[0]

zmm10[0] = zmm10[0] f+ arg10
float zmm12[0x4] = 0x80000000
float zmm13[0x4] = 0x358637bd
int32_t i_6 = var_198.d
int64_t rbx
int64_t arg_8 = rbx
int32_t var_290
int32_t var_28c
int32_t var_288
uint64_t var_270
uint64_t var_260
int32_t var_258
uint64_t var_250
float var_240
float var_23c
float var_238
int64_t var_170
int32_t var_168
int64_t var_140
int32_t var_138
float rcx_1
float zmm14[0x4]
float zmm15[0x4]

while (true)
    rcx_1 = rcx i+ 1
    var_298 = rcx_1
    
    if (rcx s>= 0x20)
        break
    
    void* rax_8 = var_210
    float zmm4[0x4] = *(rax_8 + 0x20)
    zmm5 = *(rax_8 + 0x1c)
    zmm6 = *(rax_8 + 0x24)
    zmm2[0] = zmm2[0] * zmm5[0]
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm6[0]
    zmm2[0] = zmm2[0] + zmm3[0]
    zmm2[0] = zmm2[0] + zmm1[0]
    int32_t* r8
    int32_t r13_1
    
    if (zmm2[0] > zmm12[0])
        int64_t var_1f0
        r8 = &var_1f0
        int32_t rax_9 = *(rax_8 + 0x18)
        r13_1 = r13 | 0x20
        var_1f0 = *(rax_8 + 0x10)
        int32_t var_1e8_1 = rax_9
    else
        zmm2 = *(rax_8 + 0x28)
        r8 = &var_240
        zmm2[0] = zmm2[0] * zmm5[0]
        r13_1 = r13 | 0x10
        zmm2[0] = zmm2[0] * zmm4[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x10)
        zmm2[0] = zmm2[0] * zmm6[0]
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x14)
        zmm2[0] = zmm2[0] f+ *(rax_8 + 0x18)
        var_240 = zmm2[0]
        var_23c = zmm2[0]
        var_238 = zmm2[0]
    
    int32_t rcx_3 = r13_1 & 0xffffffdf
    var_258 = r8[2]
    var_260 = *r8
    
    if ((r13_1.b & 0x20) == 0)
        rcx_3 = r13_1
    
    r13 = rcx_3
    
    if ((rcx_3.b & 0x10) != 0)
        r13 &= 0xffffffef
    
    void* rcx_4 = var_1e0
    void* rax_12 = *(rcx_4 + 0x10)
    zmm3 = *(rcx_4 + 0x28)
    zmm3[0] = zmm3[0] f* *(rax_12 + 0x10)
    zmm0 = *(rax_12 + 0x18)
    zmm0[0] = zmm0[0] f* *(rcx_4 + 0x30)
    zmm2 = *(rax_12 + 0x14)
    zmm2[0] = zmm2[0] f* *(rcx_4 + 0x2c)
    float temp0_5[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_6[0x4] = _mm_unpacklo_ps(zmm2, zmm9[0].q)
    zmm4 = *arg3
    float temp0_7[0x4] = _mm_unpacklo_ps(temp0_5, temp0_6[0].q)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
    float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
    float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_9)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
    float temp0_21[0x4] = _mm_add_ps(temp0_17, temp0_7)
    zmm2 = var_260:4.d
    float temp0_22[0x4] = _mm_mul_ps(temp0_20, temp0_8)
    zmm3 = var_260.d
    zmm0 = var_258
    float temp0_25[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_22, temp0_19), temp0_21), arg3[1])
    *(&var_198:4 + (sx.q(i_6) << 2)) = i_6
    zmm3[0] = zmm3[0] - temp0_25[0]
    int64_t rdx = sx.q(var_198.d)
    int32_t rax_15 = r8[2]
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
    zmm0[0] = zmm0[0] - temp0_26[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
    int64_t rcx_5 = rdx * 3
    float var_1c0_1 = temp0_26[0]
    zmm2[0] = zmm2[0] - temp0_27[0]
    int32_t i_7 = rdx.d + 1
    var_198.d = rdx.d + 1
    float var_1b0_1 = zmm0[0]
    *(&var_170 + (rcx_5 << 2)) = *r8
    (&var_168)[rcx_5] = rax_15
    *(&var_140 + (rcx_5 << 2)) = (_mm_unpacklo_ps(temp0_25, temp0_27[0].q)).q
    (&var_138)[rcx_5] = var_1c0_1
    int64_t var_110
    *(&var_110 + (rcx_5 << 2)) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
    int32_t var_108
    (&var_108)[rcx_5] = var_1b0_1
    
    if (rdx.d == 0)
        int64_t rax_22 = sx.q(var_198:4.d)
        int64_t rcx_13 = rax_22 * 3
        var_180[rax_22] = 0x3f800000
        zmm0 = zx.o(*(&var_110 + (rcx_13 << 2)))
        var_288 = (&var_108)[rcx_13]
    else
        uint64_t* rax_19
        
        if (rdx.d == 1)
            rax_19, zmm7, zmm8, zmm9 =
                sub_1416e69d0(&var_270, &var_110, &var_198:4, &var_198, &var_180)
        label_1415f6296:
            zmm0 = zx.o(*rax_19)
            var_288 = rax_19[1].d
            i_7 = var_198.d
        else
            if (rdx.d == 2)
                rax_19, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_1416fa750(&var_250, &var_110, &var_198, &var_180)
                goto label_1415f6296
            
            if (rdx.d == 3)
                uint64_t var_1a8[0x2]
                rax_19, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_1416f9c90(&var_1a8, &var_110, &var_198, &var_180)
                goto label_1415f6296
            
            int32_t var_278_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
            var_288 = 0
    
    int32_t var_188
    int64_t r8_4 = sx.q(var_188)
    rbx = sx.q(var_198:4.d)
    int64_t var_190
    int64_t r11_1 = sx.q(var_190.d)
    int64_t r10_1 = sx.q(var_190:4.d)
    zmm5 = var_288
    int64_t rdi = r8_4 * 3
    int32_t rax_23 = (&var_108)[rdi]
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int64_t rsi_1 = r10_1 * 3
    int32_t rdx_5 = (&var_108)[r14_1]
    int32_t rcx_14 = (&var_108)[rsi_1]
    int32_t r9_4 = (&var_108)[r15_1]
    var_290.q = zmm0.q
    zmm4 = var_28c
    int64_t var_104_1 = *(&var_110 + (r14_1 << 2))
    zmm2 = var_180[r10_1]
    int64_t var_ec_1 = *(&var_110 + (rdi << 2))
    zmm0 = var_180[rbx]
    int64_t var_f8_1 = *(&var_110 + (rsi_1 << 2))
    zmm1 = var_180[r11_1]
    var_110 = *(&var_110 + (r15_1 << 2))
    zmm3 = var_180[r8_4]
    int32_t r8_5 = (&var_168)[r15_1]
    var_180[2] = zmm2[0]
    zmm2 = zx.o(*(&var_170 + (r14_1 << 2)))
    var_180[0] = zmm0[0]
    zmm0 = zx.o(*(&var_170 + (rdi << 2)))
    var_180[1] = zmm1[0]
    zmm1 = zx.o(*(&var_170 + (rsi_1 << 2)))
    var_180[3] = zmm3[0]
    int32_t var_fc_1 = rdx_5
    int32_t rdx_6 = (&var_168)[r14_1]
    int32_t var_f0_1 = rcx_14
    int32_t rcx_15 = (&var_168)[rsi_1]
    int32_t var_e4_1 = rax_23
    int32_t rax_24 = (&var_168)[rdi]
    int64_t var_164_1 = zmm2.q
    zmm2 = zx.o(*(&var_140 + (r14_1 << 2)))
    int64_t var_14c_1 = zmm0.q
    zmm0 = zx.o(*(&var_140 + (rdi << 2)))
    int64_t var_158_1 = zmm1.q
    zmm1 = zx.o(*(&var_140 + (rsi_1 << 2)))
    var_170 = *(&var_170 + (r15_1 << 2))
    zmm3 = zx.o(*(&var_140 + (r15_1 << 2)))
    var_168 = r8_5
    int32_t r8_6 = (&var_138)[r15_1]
    int32_t var_15c_1 = rdx_6
    int32_t rdx_7 = (&var_138)[r14_1]
    int32_t var_150_1 = rcx_15
    int32_t rcx_16 = (&var_138)[rsi_1]
    int32_t var_144_1 = rax_24
    int32_t rax_25 = (&var_138)[rdi]
    int64_t var_134_1 = zmm2.q
    int64_t var_11c_1 = zmm0.q
    var_198:4.o = data_142e11d00
    var_108 = r9_4
    zmm4[0] = zmm4[0] * zmm4[0]
    var_138 = r8_6
    int64_t var_128_1 = zmm1.q
    var_140 = zmm3.q
    zmm3 = var_290
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_12c_1 = rdx_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_120_1 = rcx_16
    int32_t var_114_1 = rax_25
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm5[0]
    
    if (zmm4[0] < zmm13[0] || zmm4[0] >= zmm7[0])
        i_6 = i_7
        zmm7 = zmm4
        rcx_1 = var_298
        var_274 = zmm4[0]
        break
    
    i_6 = i_7
    rcx = var_298
    zmm1 = zmm8
    float temp0_31[0x4] = _mm_sqrt_ss(0, zmm4[0])
    zmm7 = zmm4
    var_274 = zmm4[0]
    zmm1[0] = zmm1[0] / temp0_31[0]
    zmm2 = zmm1
    zmm2[0] = zmm2[0] * zmm3[0]
    zmm3 = zmm1
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm1[0] = zmm1[0] * zmm5[0]
    continue

if (arg11 != 0)
    *arg11 = rcx_1

float result

if (zmm7[0] <= zmm13[0])
    var_250 = 0
    int64_t var_248_1 = 0
    var_270 = 0
    int64_t var_268_1 = 0
    sub_14083ad30(&var_250, 8)
    
    if (var_268_1:4.d s< 8)
        sub_14083ad30(&var_270, 8)
    
    if (i_6 s> 0)
        rbx = 0
        uint64_t i_5 = zx.q(i_6)
        uint64_t i
        
        do
            int64_t rsi_2 = sx.q(var_248_1.d)
            int32_t rax_29 = (rsi_2 + 1).d
            var_248_1.d = rax_29
            
            if (rax_29 s> var_248_1:4.d)
                sub_14083a7e0(&var_250)
            
            uint64_t rcx_20 = var_250
            int64_t rdx_10 = rsi_2 * 3
            int32_t rax_30 = *(&var_168 + rbx)
            *(rcx_20 + (rdx_10 << 2)) = *(&var_170 + rbx)
            *(rcx_20 + (rdx_10 << 2) + 8) = rax_30
            int64_t rsi_3 = sx.q(var_268_1.d)
            int32_t rax_31 = (rsi_3 + 1).d
            var_268_1.d = rax_31
            
            if (rax_31 s> var_268_1:4.d)
                sub_14083a7e0(&var_270)
            
            uint64_t rcx_22 = var_270
            int64_t rdx_12 = rsi_3 * 3
            int64_t zmm0_1 = *(&var_140 + rbx)
            int32_t rax_32 = *(&var_138 + rbx)
            rbx += 0xc
            *(rcx_22 + (rdx_12 << 2)) = zmm0_1
            *(rcx_22 + (rdx_12 << 2) + 8) = rax_32
            i = i_5
            i_5 -= 1
        while (i != 1)
    
    int32_t rax_33
    uint128_t zmm9_1
    uint128_t zmm10_1
    uint128_t zmm11_1
    float zmm13_1
    rax_33, zmm9_1, zmm10_1, zmm11_1, zmm13_1 = sub_141573a40(&var_250, &var_270, &var_210, 
        &var_1e0, zmm14, zmm15, &var_298, &var_260, &var_240, &var_290)
    uint128_t zmm0_2
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm3_1
    
    if (rax_33 == 2)
        float zmm5_1 = zmm9_1.d
        float zmm6_1 = zmm9_1.d
        float zmm7_1 = zmm9_1.d
        zmm3_1 = zmm9_1
        int64_t zmm4_1 = zmm9_1.q
        
        if (i_6 s> 0)
            float (* rax_36)[0x4] = &var_180
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_1
            
            do
                zmm2_1 = *rax_36
                rax_36 = &(*rax_36)[1]
                zmm0_2.d = zmm2_1.d f* *(&var_170 + r12)
                zmm1_1.d = zmm2_1.d f* *(&var_170:4 + r12)
                zmm5_1 = zmm5_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_168 + r12)
                zmm6_1 = zmm6_1 f+ zmm1_1.d
                zmm1_1.d = zmm2_1.d f* *(&var_140 + r12)
                zmm7_1 = zmm7_1 f+ zmm0_2.d
                zmm0_2.d = zmm2_1.d f* *(&var_140:4 + r12)
                zmm2_1.d = zmm2_1.d f* *(&var_138 + r12)
                zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                r12 += 0xc
                zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                zmm9_1.d = zmm9_1.d f+ zmm2_1.d
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        zmm0_2.d = zmm10_1.d f+ zmm11_1.d
        *arg4 = zmm0_2.d
        *arg7 = var_260
        arg7[2] = var_258
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ zmm5_1
        zmm1_1.d = zmm1_1.d f+ zmm6_1
        zmm11_1.d = zmm11_1.d f+ zmm7_1
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm11_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f- zmm1_1.d
        zmm9_1.d = zmm9_1.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
        arg6[1].d = zmm9_1.d
        float temp3_1 = *arg4
        zmm13_1 - temp3_1
        uint64_t rcx_28 = var_270
        rbx.b = zmm13_1 < temp3_1
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        uint64_t rcx_29 = var_250
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        result = zx.d(rbx.b)
    else
        zmm3_1 = var_290
        *arg7 = var_260
        zmm0_2 = var_298
        arg7[2] = var_258
        zmm0_2.d = zmm0_2.d f+ zmm11_1.d
        zmm0_2.d = zmm0_2.d f+ zmm10_1.d
        *arg4 = zmm0_2.d
        zmm0_2.d = zmm11_1.d f* *arg7
        zmm1_1.d = zmm11_1.d f* arg7[1]
        zmm11_1.d = zmm11_1.d f* arg7[2]
        zmm0_2.d = zmm0_2.d f+ var_240
        zmm1_1.d = zmm1_1.d f+ var_23c
        zmm11_1.d = zmm11_1.d f+ var_238
        *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
        arg5[1].d = zmm11_1.d
        zmm0_2.d = zmm10_1.d f* *arg7
        zmm1_1.d = zmm10_1.d f* arg7[1]
        zmm10_1.d = zmm10_1.d f* arg7[2]
        zmm3_1.d = zmm3_1.d f- zmm0_2.d
        zmm2_1.d = var_28c.d f- zmm1_1.d
        zmm0_2.d = var_288.d f- zmm10_1.d
        *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
        arg6[1].d = zmm0_2.d
        uint64_t rcx_25 = var_270
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        uint64_t rcx_26 = var_250
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        result.b = 1
else
    float var_c8_1[0x4] = zmm14
    float var_d8_1[0x4] = zmm15
    var_298 = zmm9[0]
    
    if (i_6 s> 0)
        float (* rax_26)[0x4] = &var_180
        uint64_t i_3 = zx.q(i_6)
        uint64_t i_2
        
        do
            zmm2 = *rax_26
            rax_26 = &(*rax_26)[1]
            zmm2[0] = zmm2[0] f* *(&var_170 + r12)
            zmm2[0] = zmm2[0] f* *(&var_170:4 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_168 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_140 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] f* *(&var_140:4 + r12)
            zmm2[0] = zmm2[0] f* *(&var_138 + r12)
            zmm9[0] = zmm9[0] + zmm2[0]
            r12 += 0xc
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        var_298 = zmm9[0]
    
    zmm5 = 0x3f000000
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm3 = zx.o(0)
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm9[0] = zmm9[0] + zmm9[0]
    zmm3[0] = zmm9[0]
    zmm2 = 0x3f000000
    float temp0_32[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_32[0] = temp0_32[0] * temp0_32[0]
    zmm3[0] = zmm3[0] * temp0_32[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_32[0] = temp0_32[0] * zmm2[0]
    temp0_32[0] = temp0_32[0] + temp0_32[0]
    temp0_32[0] = temp0_32[0] * temp0_32[0]
    zmm3[0] = zmm3[0] * temp0_32[0]
    zmm1 = zmm10
    zmm1[0] = zmm1[0] + zmm11[0]
    zmm5[0] = 0.5f - zmm3[0]
    temp0_32[0] = temp0_32[0] * zmm5[0]
    temp0_32[0] = temp0_32[0] + temp0_32[0]
    zmm9[0] = zmm9[0] * temp0_32[0]
    zmm9[0] = zmm9[0] * temp0_32[0]
    zmm9[0] = zmm9[0] * temp0_32[0]
    float temp0_33[0x4] = _mm_unpacklo_ps(zmm9, zmm9[0].q)
    *arg7 = temp0_33.q
    float temp0_34[0x4] = __sqrtss_xmmss_memss(temp0_33[0], var_274)
    float var_278_2 = zmm9[0]
    zmm1[0] = zmm1[0] - temp0_34[0]
    arg7[2] = var_278_2
    *arg4 = zmm1[0]
    zmm11[0] = zmm11[0] f* *arg7
    zmm11[0] = zmm11[0] f* arg7[1]
    zmm11[0] = zmm11[0] f* arg7[2]
    zmm11[0] = zmm11[0] + zmm9[0]
    zmm11[0] = zmm11[0] + zmm9[0]
    zmm11[0] = zmm11[0] + var_298
    zmm1 = zmm10
    *arg5 = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
    zmm0 = zmm10
    arg5[1].d = zmm11[0]
    zmm0[0] = zmm0[0] f* *arg7
    zmm1[0] = zmm1[0] f* arg7[1]
    zmm10[0] = zmm10[0] f* arg7[2]
    zmm9[0] = zmm9[0] - zmm0[0]
    zmm9[0] = zmm9[0] - zmm1[0]
    zmm9[0] = zmm9[0] f- zmm10[0]
    *arg6 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
    arg6[1].d = zmm9[0]
    result.b = 1

__security_check_cookie(rax_1 ^ &var_2d8)
return result
