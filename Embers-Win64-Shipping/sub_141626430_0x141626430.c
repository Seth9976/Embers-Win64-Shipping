// 函数: sub_141626430
// 地址: 0x141626430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
float zmm3[0x4] = *arg3
float zmm14[0x4] = 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_1d8 = (zmm3 ^ 0x80000000)[0]
float zmm9[0x4] = zx.o(0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1d4 = (temp0 ^ 0x80000000)[0]
float var_1cc = temp0_2[0]
float var_1d0 = (temp0_1 ^ 0x80000000)[0]
int32_t* var_1b0 = &var_1d8
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
int32_t* var_200 = arg1
zmm5[0] = zmm5[0] * zmm5[0]
void* var_1c0 = arg2
zmm4[0] = zmm4[0] * zmm4[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm7 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm7[0] = 1f / temp0_3[0]
    zmm10 = zmm7
    zmm11 = zmm7
    zmm10[0] = zmm10[0] * zmm3[0]
    zmm11[0] = zmm11[0] * zmm4[0]
    zmm7[0] = zmm7[0] * zmm5[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm10 = 0xbf800000
    zmm11 = zx.o(0)
    zmm7 = zx.o(0)

int64_t r13 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rdx_1 = 0
float zmm15[0x4] = 0x7f7fffff
float var_180[0x4] = data_142d3f7e0
int64_t var_198
__builtin_memset(&var_198, 0, 0x14)
float zmm0[0x4] = *(rax_5 + 0x1c)
float var_250 = 3.40282347e+38f
uint32_t zmm12[0x4]

if (zmm0[0] == 0f)
    zmm12 = zx.o(0)
else
    zmm12 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm12[0] = zmm12[0] f* zmm0[0]

zmm12[0] = zmm12[0] f+ arg10
float zmm13[0x4] = arg8
int32_t i_6 = var_198.d
zmm12[0] = zmm12[0] f+ zmm13[0]
float zmm6[0x4]
float var_48[0x4] = zmm6
zmm0 = _mm_cvtps_pd(zmm12[0].q)
uint32_t var_218 = zmm12[0]
zmm0[0].q = zmm0[0].q f+ 0.001
uint32_t zmm8[0x4] = 0x358637bd
float var_274 = _mm_cvtpd_ps(zmm0)[0]

while (true)
    int32_t rdx_2 = rdx_1 + 1
    
    if (rdx_1 s>= 0x20)
        goto label_141626b90
    
    zmm4 = zmm11 ^ zmm14
    zmm3 = zmm10 ^ zmm14
    zmm4[0] = zmm4[0] f* arg1[1]
    zmm3[0] = zmm3[0] f* *arg1
    zmm4[0] = zmm4[0] f* arg1[4]
    float zmm2[0x4] = zmm7 ^ zmm14
    zmm4[0] = zmm4[0] f* arg1[7]
    zmm2[0] = zmm2[0] f* arg1[2]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] f* arg1[6]
    zmm3[0] = zmm3[0] f* arg1[3]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm2[0] = zmm2[0] f* arg1[5]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm2[0] = zmm2[0] f* arg1[8]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    int32_t r9_1
    
    if (not(zmm4[0] < zmm4[0]) && not(zmm4[0] < zmm4[0]))
        zmm8 = zx.o(*arg1)
        r9_1 = arg1[2]
    else if (zmm4[0] < zmm4[0] || zmm4[0] < zmm4[0])
        zmm8 = zx.o(*(arg1 + 0x18))
        r9_1 = arg1[8]
    else
        zmm8 = zx.o(*(arg1 + 0xc))
        r9_1 = arg1[5]
    
    void* rdx_3 = var_1c0
    int64_t var_260 = zmm8.q
    int32_t var_258 = r9_1
    void* rax_7 = *(rdx_3 + 0x10)
    zmm3 = *(rax_7 + 0x10)
    zmm3[0] = zmm3[0] f* *(rdx_3 + 0x28)
    zmm0 = *(rax_7 + 0x18)
    zmm0[0] = zmm0[0] f* *(rdx_3 + 0x30)
    zmm2 = *(rax_7 + 0x14)
    zmm2[0] = zmm2[0] f* *(rdx_3 + 0x2c)
    float temp0_7[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm2, zmm9[0].q)
    zmm5 = *arg3
    float temp0_9[0x4] = _mm_unpacklo_ps(temp0_7, temp0_8[0].q)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xc9), temp0_11)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0xd2), temp0_10)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_17[0x4] = _mm_sub_ps(temp0_15, temp0_13)
    float temp0_18[0x4] = _mm_add_ps(temp0_17, temp0_17)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, temp0_18)
    float temp0_20[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc9)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xd2)
    zmm2 = var_260.d
    float temp0_22[0x4] = _mm_mul_ps(temp0_20, temp0_11)
    float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_9)
    float temp0_27[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_21, temp0_10), temp0_22), temp0_23), arg3[1])
    zmm2[0] = zmm2[0] - temp0_27[0]
    float var_210 = temp0_27[0]
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
    zmm3 = var_260:4.d
    zmm3[0] = zmm3[0] - temp0_28[0]
    float var_20c = temp0_28[0]
    zmm0 = var_258
    zmm0[0] = zmm0[0] - temp0_29[0]
    float var_238 = zmm2[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    float var_234_1 = zmm3[0]
    zmm3[0] = zmm3[0] * zmm11[0]
    float var_230 = zmm0[0]
    zmm0[0] = zmm0[0] * zmm7[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    float var_208 = temp0_29[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    int128_t* result
    
    if (zmm3[0] > var_274)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_2c8)
        return result
    
    zmm0 = zx.o(var_210.q)
    *(&var_198:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r8 = sx.q(var_198.d)
    int64_t rdx_4 = r8 * 3
    int64_t var_140
    *(&var_140 + (rdx_4 << 2)) = zmm0.q
    zmm0 = zx.o(var_238.q)
    int32_t var_138
    (&var_138)[rdx_4] = var_208
    int32_t i_7 = r8.d + 1
    var_198.d = r8.d + 1
    int64_t var_110
    *(&var_110 + (rdx_4 << 2)) = zmm0.q
    int64_t var_170
    *(&var_170 + (rdx_4 << 2)) = zmm8.q
    int32_t var_108
    (&var_108)[rdx_4] = var_230
    int32_t var_168
    (&var_168)[rdx_4] = r9_1
    int32_t var_268_1
    uint64_t var_248
    uint64_t var_228
    
    if (r8.d == 0)
        int64_t rax_15 = sx.q(var_198:4.d)
        int64_t rdx_8 = rax_15 * 3
        var_180[rax_15] = 0x3f800000
        zmm0 = zx.o(*(&var_110 + (rdx_8 << 2)))
        var_268_1 = (&var_108)[rdx_8]
    else
        uint64_t* rax_12
        
        if (r8.d == 1)
            rax_12, zmm9 = sub_1416e69d0(&var_248, &var_110, &var_198:4, &var_198, &var_180)
        label_1416268c6:
            zmm0 = zx.o(*rax_12)
            arg1 = var_200
            var_268_1 = rax_12[1].d
            i_7 = var_198.d
        else
            if (r8.d == 2)
                rax_12, zmm9, zmm12, zmm13, zmm14, zmm15 =
                    sub_1416fa750(&var_228, &var_110, &var_198, &var_180)
                goto label_1416268c6
            
            if (r8.d == 3)
                uint64_t var_1a8[0x2]
                rax_12, zmm9, zmm12, zmm13, zmm14, zmm15 =
                    sub_1416f9c90(&var_1a8, &var_110, &var_198, &var_180)
                goto label_1416268c6
            
            int32_t var_278_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
            var_268_1 = 0
    
    int32_t var_188
    int64_t r9_5 = sx.q(var_188)
    int64_t rdi_1 = sx.q(var_198:4.d)
    int64_t var_190
    int64_t rbx = sx.q(var_190.d)
    int64_t r11_1 = sx.q(var_190:4.d)
    zmm5 = var_268_1
    int64_t rsi_1 = r9_5 * 3
    int32_t rax_16 = (&var_108)[rsi_1]
    int64_t r12_1 = rdi_1 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int32_t r8_8 = (&var_108)[r15_1]
    int32_t rdx_9 = (&var_108)[r14_1]
    int32_t r10_1 = (&var_108)[r12_1]
    zmm8 = 0x358637bd
    int64_t var_270_1 = zmm0.q
    zmm4 = var_270_1.d
    int64_t var_104_1 = *(&var_110 + (r15_1 << 2))
    zmm2 = var_180[r11_1]
    int64_t var_ec_1 = *(&var_110 + (rsi_1 << 2))
    zmm0 = var_180[rdi_1]
    int64_t var_f8_1 = *(&var_110 + (r14_1 << 2))
    float zmm1[0x4] = var_180[rbx]
    var_110 = *(&var_110 + (r12_1 << 2))
    zmm3 = var_180[r9_5]
    int32_t r9_6 = (&var_168)[r12_1]
    var_180[2] = zmm2[0]
    zmm2 = zx.o(*(&var_170 + (r15_1 << 2)))
    var_180[0] = zmm0[0]
    zmm0 = zx.o(*(&var_170 + (rsi_1 << 2)))
    var_180[1] = zmm1[0]
    zmm1 = zx.o(*(&var_170 + (r14_1 << 2)))
    var_180[3] = zmm3[0]
    int32_t var_fc_1 = r8_8
    int32_t r8_9 = (&var_168)[r15_1]
    int32_t var_f0_1 = rdx_9
    int32_t rdx_10 = (&var_168)[r14_1]
    int32_t var_e4_1 = rax_16
    int32_t rax_17 = (&var_168)[rsi_1]
    int64_t var_164_1 = zmm2.q
    zmm2 = zx.o(*(&var_140 + (r15_1 << 2)))
    int64_t var_14c_1 = zmm0.q
    zmm0 = zx.o(*(&var_140 + (rsi_1 << 2)))
    int64_t var_158_1 = zmm1.q
    zmm1 = zx.o(*(&var_140 + (r14_1 << 2)))
    var_170 = *(&var_170 + (r12_1 << 2))
    zmm3 = zx.o(*(&var_140 + (r12_1 << 2)))
    var_168 = r9_6
    int32_t r9_7 = (&var_138)[r12_1]
    int32_t var_15c_1 = r8_9
    int32_t r8_10 = (&var_138)[r15_1]
    int32_t var_150_1 = rdx_10
    int32_t rdx_11 = (&var_138)[r14_1]
    int32_t var_144_1 = rax_17
    int32_t rax_18 = (&var_138)[rsi_1]
    int64_t var_134_1 = zmm2.q
    int64_t var_11c_1 = zmm0.q
    var_198:4.o = data_142e11d00
    var_108 = r10_1
    int64_t var_128_1 = zmm1.q
    var_140 = zmm3.q
    zmm3 = var_270_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_138 = r9_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_12c_1 = r8_10
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_120_1 = rdx_11
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_114_1 = rax_18
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= zmm15[0])
        i_6 = i_7
        zmm15 = zmm3
        var_250 = zmm3[0]
    label_141626b90:
        
        if (arg11 != 0)
            *arg11 = rdx_2
        
        if (not(zmm15[0] f<= zmm8[0]))
            float var_284_2 = zmm9[0]
            zmm15 = zmm9
            float var_288_1 = zmm9[0]
            zmm11 = zmm9
            zmm14 = zmm9
            zmm10 = zmm9
            
            if (i_6 s> 0)
                float (* rax_19)[0x4] = &var_180
                uint64_t i_3 = zx.q(i_6)
                uint64_t i
                
                do
                    zmm2 = *rax_19
                    rax_19 = &(*rax_19)[1]
                    zmm2[0] = zmm2[0] f* *(&var_170 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_170:4 + r13)
                    zmm15[0] = zmm15[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_168 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_140 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_140:4 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_138 + r13)
                    zmm11[0] = zmm11[0] + zmm2[0]
                    r13 += 0xc
                    zmm14[0] = zmm14[0] + zmm2[0]
                    zmm10[0] = zmm10[0] + zmm2[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                var_288_1 = zmm9[0]
                var_284_2 = zmm9[0]
            
            zmm5 = 0x3f000000
            zmm11[0] = zmm11[0] - zmm15[0]
            zmm8 = zmm10
            zmm14[0] = zmm14[0] - zmm9[0]
            zmm3 = zx.o(0)
            zmm8[0] = zmm8[0] f- zmm9[0]
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm1 = zmm8
            zmm1[0] = zmm1[0] f* zmm8[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm11[0]
            zmm14[0] = zmm14[0] + zmm1[0]
            zmm3[0] = zmm14[0]
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
            zmm5[0] = 0.5f - zmm3[0]
            temp0_32[0] = temp0_32[0] * zmm5[0]
            temp0_32[0] = temp0_32[0] + temp0_32[0]
            temp0_32[0] = temp0_32[0] * zmm14[0]
            temp0_32[0] = temp0_32[0] * zmm11[0]
            temp0_32[0] = temp0_32[0] f* zmm8[0]
            float temp0_33[0x4] = _mm_unpacklo_ps(temp0_32, temp0_32[0].q)
            zmm1 = var_218
            *arg7 = temp0_33.q
            float temp0_34[0x4] = __sqrtss_xmmss_memss(temp0_33[0], var_250)
            float var_278_2 = temp0_32[0]
            zmm1[0] = zmm1[0] - temp0_34[0]
            arg7[2] = var_278_2
            
            if (not(zmm1[0] < zmm9[0]))
                zmm9 = __minss_xmmss_memss(zmm1[0], 0x7f7fffff)
            
            *arg4 = zmm9[0]
            zmm13[0] = zmm13[0] f* *arg7
            zmm13[0] = zmm13[0] f* arg7[1]
            zmm13[0] = zmm13[0] f* arg7[2]
            zmm13[0] = zmm13[0] + zmm15[0]
            zmm13[0] = zmm13[0] + var_284_2
            zmm13[0] = zmm13[0] + var_288_1
            zmm1 = zmm12
            *arg5 = (_mm_unpacklo_ps(zmm13, zmm13[0].q)).q
            zmm0 = zmm12
            arg5[1].d = zmm13[0]
            zmm0[0] = zmm0[0] f* *arg7
            zmm1[0] = zmm1[0] f* arg7[1]
            zmm12[0] = zmm12[0] f* arg7[2]
            zmm11[0] = zmm11[0] - zmm0[0]
            zmm14[0] = zmm14[0] - zmm1[0]
            zmm10[0] = zmm10[0] f- zmm12[0]
            *arg6 = (_mm_unpacklo_ps(zmm11, zmm14[0].q)).q
            arg6[1].d = zmm10[0]
            result.b = 1
            __security_check_cookie(rax_1 ^ &var_2c8)
            return result
        
        var_228 = 0
        int64_t var_220_1 = 0
        var_248 = 0
        int64_t var_240_1 = 0
        sub_14083ad30(&var_228, 8)
        
        if (var_240_1:4.d s< 8)
            sub_14083ad30(&var_248, 8)
        
        if (i_6 s> 0)
            int64_t rdi_2 = 0
            uint64_t i_5 = zx.q(i_6)
            uint64_t i_1
            
            do
                int64_t rsi_2 = sx.q(var_220_1.d)
                int32_t rax_22 = (rsi_2 + 1).d
                var_220_1.d = rax_22
                
                if (rax_22 s> var_220_1:4.d)
                    sub_14083a7e0(&var_228)
                
                uint64_t rcx_7 = var_228
                int64_t rdx_13 = rsi_2 * 3
                int32_t rax_23 = *(&var_168 + rdi_2)
                *(rcx_7 + (rdx_13 << 2)) = *(&var_170 + rdi_2)
                *(rcx_7 + (rdx_13 << 2) + 8) = rax_23
                int64_t rsi_3 = sx.q(var_240_1.d)
                int32_t rax_24 = (rsi_3 + 1).d
                var_240_1.d = rax_24
                
                if (rax_24 s> var_240_1:4.d)
                    sub_14083a7e0(&var_248)
                
                uint64_t rcx_9 = var_248
                int64_t rdx_15 = rsi_3 * 3
                int64_t zmm0_1 = *(&var_140 + rdi_2)
                int32_t rax_25 = *(&var_138 + rdi_2)
                rdi_2 += 0xc
                *(rcx_9 + (rdx_15 << 2)) = zmm0_1
                *(rcx_9 + (rdx_15 << 2) + 8) = rax_25
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t rax_26
        float zmm8_1
        uint128_t zmm9_1
        uint128_t zmm12_1
        uint128_t zmm13_1
        rax_26, zmm8_1, zmm9_1, zmm12_1, zmm13_1 = sub_1415a4d70(&var_228, &var_248, &var_200, 
            &var_1c0, zmm15, &var_274, &var_238, &var_210, &var_260)
        uint128_t zmm0_2
        uint128_t zmm1_1
        uint128_t zmm2_1
        uint128_t zmm3_1
        
        if (rax_26 == 2)
            float zmm5_1 = zmm9_1.d
            zmm6 = zmm9_1
            zmm7 = zmm9_1
            zmm3_1 = zmm9_1
            int64_t zmm4_1 = zmm9_1.q
            
            if (i_6 s> 0)
                float (* rax_29)[0x4] = &var_180
                uint64_t i_4 = zx.q(i_6)
                uint64_t i_2
                
                do
                    zmm2_1 = *rax_29
                    rax_29 = &(*rax_29)[1]
                    zmm0_2.d = zmm2_1.d f* *(&var_170 + r13)
                    zmm1_1.d = zmm2_1.d f* *(&var_170:4 + r13)
                    zmm5_1 = zmm5_1 f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_168 + r13)
                    zmm6[0] = zmm6[0] f+ zmm1_1.d
                    zmm1_1.d = zmm2_1.d f* *(&var_140 + r13)
                    zmm7[0] = zmm7[0] f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_140:4 + r13)
                    zmm2_1.d = zmm2_1.d f* *(&var_138 + r13)
                    zmm3_1.d = zmm3_1.d f+ zmm1_1.d
                    r13 += 0xc
                    zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                    zmm9_1.d = zmm9_1.d f+ zmm2_1.d
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            zmm0_2 = zx.o(var_238.q)
            *arg4 = var_218.d
            *arg7 = zmm0_2.q
            arg7[2] = var_230
            zmm0_2.d = zmm13_1.d f* *arg7
            zmm1_1.d = zmm13_1.d f* arg7[1]
            zmm13_1.d = zmm13_1.d f* arg7[2]
            zmm0_2.d = zmm0_2.d f+ zmm5_1
            zmm1_1.d = zmm1_1.d f+ zmm6[0]
            zmm13_1.d = zmm13_1.d f+ zmm7[0]
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            arg5[1].d = zmm13_1.d
            zmm0_2.d = zmm12_1.d f* *arg7
            zmm1_1.d = zmm12_1.d f* arg7[1]
            zmm12_1.d = zmm12_1.d f* arg7[2]
            zmm3_1.d = zmm3_1.d f- zmm0_2.d
            zmm4_1.d = zmm4_1.d f- zmm1_1.d
            zmm9_1.d = zmm9_1.d f- zmm12_1.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm4_1)).q
            arg6[1].d = zmm9_1.d
            float temp3_1 = *arg4
            zmm8_1 - temp3_1
            uint64_t rcx_15 = var_248
            i_6.b = zmm8_1 < temp3_1
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            uint64_t rcx_16 = var_228
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            result = zx.q(i_6.b)
        else
            zmm3_1 = var_260.d
            zmm2_1 = var_260:4.d
            *arg7 = var_238.q
            zmm0_2 = var_274
            arg7[2] = var_230
            zmm0_2.d = zmm0_2.d f+ zmm13_1.d
            zmm0_2.d = zmm0_2.d f+ zmm12_1.d
            *arg4 = zmm0_2.d
            zmm0_2.d = zmm13_1.d f* *arg7
            uint64_t rcx_12 = var_248
            zmm1_1.d = zmm13_1.d f* arg7[1]
            zmm13_1.d = zmm13_1.d f* arg7[2]
            zmm0_2.d = zmm0_2.d f+ var_210
            zmm1_1.d = zmm1_1.d f+ var_20c
            zmm13_1.d = zmm13_1.d f+ var_208
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm1_1.q)).q
            arg5[1].d = zmm13_1.d
            zmm0_2.d = zmm12_1.d f* *arg7
            zmm1_1.d = zmm12_1.d f* arg7[1]
            zmm12_1.d = zmm12_1.d f* arg7[2]
            zmm3_1.d = zmm3_1.d f- zmm0_2.d
            zmm2_1.d = zmm2_1.d f- zmm1_1.d
            zmm0_2.d = var_258.d f- zmm12_1.d
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
            arg6[1].d = zmm0_2.d
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            uint64_t rcx_13 = var_228
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            result.b = 1
        __security_check_cookie(rax_1 ^ &var_2c8)
        return result
    
    zmm7 = 0x3f800000
    i_6 = i_7
    zmm15 = zmm3
    rdx_1 = rdx_2
    float temp0_31[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_250 = zmm3[0]
    zmm7[0] = 1f / temp0_31[0]
    zmm10 = zmm7
    zmm11 = zmm7
    zmm10[0] = zmm10[0] * zmm4[0]
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm7[0] = zmm7[0] * zmm5[0]
