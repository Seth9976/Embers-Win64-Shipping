// 函数: sub_1416256f0
// 地址: 0x1416256f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm10[0x4]
float var_88[0x4] = zmm10
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
float zmm3[0x4] = *arg3
int32_t* rbx = arg1
float zmm13[0x4] = 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float var_1f8 = (zmm3 ^ 0x80000000)[0]
float zmm9[0x4] = zx.o(0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float var_1f4 = (temp0 ^ 0x80000000)[0]
float var_1ec = temp0_2[0]
float var_1f0 = (temp0_1 ^ 0x80000000)[0]
int32_t* var_1c0 = &var_1f8
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm5[0x4] = (*arg9)[2] ^ 0x80000000
int32_t* var_228 = rbx
zmm5[0] = zmm5[0] * zmm5[0]
void* var_1d0 = arg2
zmm4[0] = zmm4[0] * zmm4[0]
int128_t* var_1c8 = arg3
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] + zmm3[0]
zmm4[0] = zmm4[0] + zmm5[0]
float var_2a0
float var_29c_1
float var_298_1
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm6 = 0x3f800000
    float temp0_3[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_3[0] != 0f
    zmm6[0] = 1f / temp0_3[0]
    zmm8 = zmm6
    zmm10 = zmm6
    zmm8[0] = zmm8[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm4[0]
    zmm6[0] = zmm6[0] * zmm5[0]
    var_2a0 = zmm8[0]
    var_29c_1 = zmm10[0]
    var_298_1 = zmm6[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm8 = 0xbf800000
    zmm10 = zx.o(0)
    zmm6 = zx.o(0)
    var_2a0 = -1f
    var_29c_1 = 0f
    var_298_1 = 0f

int64_t r13 = 0
void* rax_5 = *(arg2 + 0x10)
int32_t rcx_1 = 0
float zmm14[0x4] = 0x7f7fffff
float var_188[0x4] = data_142d3f7e0
int64_t var_1a0
__builtin_memset(&var_1a0, 0, 0x14)
float zmm0[0x4] = *(rax_5 + 0x2c)
float var_268 = 3.40282347e+38f
uint32_t zmm11[0x4]

if (zmm0[0] == 0f)
    zmm11 = zx.o(0)
else
    zmm11 = __andps_xmmxud_memxud(*(arg2 + 0x28), data_142d3f770)
    zmm11[0] = zmm11[0] f* zmm0[0]

zmm11[0] = zmm11[0] f+ arg10
float zmm12[0x4] = arg8
int32_t i_6 = var_1a0.d
zmm11[0] = zmm11[0] f+ zmm12[0]
float zmm7[0x4]
float var_58[0x4] = zmm7
zmm0 = _mm_cvtps_pd(zmm11[0].q)
uint32_t var_264 = zmm11[0]
zmm0[0].q = zmm0[0].q f+ 0.001
float var_230 = _mm_cvtpd_ps(zmm0)[0]

while (true)
    int32_t rcx_2 = rcx_1 + 1
    int64_t var_278
    int32_t var_270
    uint64_t var_260
    float var_250
    float var_248
    uint64_t var_240
    int64_t var_178
    int32_t var_170
    int64_t var_148
    int32_t var_140
    uint64_t result
    float zmm1[0x4]
    float zmm2[0x4]
    
    if (rcx_1 s>= 0x20)
        zmm8 = 0x358637bd
    label_141625e18:
        
        if (arg11 != 0)
            *arg11 = rcx_2
        
        if (not(zmm14[0] <= zmm8[0]))
            float var_2a4_2 = zmm9[0]
            uint32_t zmm15[0x4] = zmm9
            float var_2a8_1 = zmm9[0]
            zmm13 = zmm9
            zmm14 = zmm9
            zmm10 = zmm9
            
            if (i_6 s> 0)
                float (* rax_18)[0x4] = &var_188
                uint64_t i_3 = zx.q(i_6)
                uint64_t i
                
                do
                    zmm2 = *rax_18
                    rax_18 = &(*rax_18)[1]
                    zmm2[0] = zmm2[0] f* *(&var_178 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_178:4 + r13)
                    zmm15[0] = zmm15[0] f+ zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_170 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148:4 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_140 + r13)
                    zmm13[0] = zmm13[0] + zmm2[0]
                    r13 += 0xc
                    zmm14[0] = zmm14[0] + zmm2[0]
                    zmm10[0] = zmm10[0] + zmm2[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                var_2a8_1 = zmm9[0]
                var_2a4_2 = zmm9[0]
            
            zmm5 = 0x3f000000
            zmm13[0] = zmm13[0] f- zmm15[0]
            zmm14[0] = zmm14[0] - zmm9[0]
            zmm3 = zx.o(0)
            zmm10[0] = zmm10[0] - zmm9[0]
            zmm13[0] = zmm13[0] * zmm13[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm13[0]
            zmm14[0] = zmm14[0] + zmm10[0]
            zmm3[0] = zmm14[0]
            zmm2 = 0x3f000000
            float temp0_11[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_11[0] = temp0_11[0] * temp0_11[0]
            zmm3[0] = zmm3[0] * temp0_11[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_11[0] = temp0_11[0] * zmm2[0]
            temp0_11[0] = temp0_11[0] + temp0_11[0]
            temp0_11[0] = temp0_11[0] * temp0_11[0]
            zmm3[0] = zmm3[0] * temp0_11[0]
            zmm1 = var_264
            zmm5[0] = 0.5f - zmm3[0]
            temp0_11[0] = temp0_11[0] * zmm5[0]
            temp0_11[0] = temp0_11[0] + temp0_11[0]
            zmm13[0] = zmm13[0] * temp0_11[0]
            zmm14[0] = zmm14[0] * temp0_11[0]
            zmm10[0] = zmm10[0] * temp0_11[0]
            float temp0_12[0x4] = _mm_unpacklo_ps(zmm13, zmm14[0].q)
            *arg7 = temp0_12.q
            float temp0_13[0x4] = __sqrtss_xmmss_memss(temp0_12[0], var_268)
            float var_288_2 = zmm10[0]
            zmm1[0] = zmm1[0] - temp0_13[0]
            arg7[2] = var_288_2
            
            if (not(zmm1[0] < zmm9[0]))
                zmm9 = __minss_xmmss_memss(zmm1[0], 0x7f7fffff)
            
            *arg4 = zmm9[0]
            zmm12[0] = zmm12[0] f* *arg7
            zmm12[0] = zmm12[0] f* arg7[1]
            zmm12[0] = zmm12[0] f* arg7[2]
            zmm12[0] = zmm12[0] f+ zmm15[0]
            zmm12[0] = zmm12[0] + var_2a4_2
            zmm12[0] = zmm12[0] + var_2a8_1
            zmm1 = zmm11
            *arg5 = (_mm_unpacklo_ps(zmm12, zmm12[0].q)).q
            zmm0 = zmm11
            arg5[1].d = zmm12[0]
            zmm0[0] = zmm0[0] f* *arg7
            zmm1[0] = zmm1[0] f* arg7[1]
            zmm11[0] = zmm11[0] f* arg7[2]
            zmm13[0] = zmm13[0] - zmm0[0]
            zmm14[0] = zmm14[0] - zmm1[0]
            zmm10[0] = zmm10[0] f- zmm11[0]
            *arg6 = (_mm_unpacklo_ps(zmm13, zmm14[0].q)).q
            arg6[1].d = zmm10[0]
            result.b = 1
            __security_check_cookie(rax_1 ^ &var_2e8)
            return result
        
        var_240 = 0
        int64_t var_238_1 = 0
        var_260 = 0
        int64_t var_258_1 = 0
        sub_14083ad30(&var_240, 8)
        
        if (var_258_1:4.d s< 8)
            sub_14083ad30(&var_260, 8)
        
        if (i_6 s> 0)
            rbx = nullptr
            uint64_t i_5 = zx.q(i_6)
            uint64_t i_1
            
            do
                int64_t rsi_3 = sx.q(var_238_1.d)
                int32_t rax_21 = (rsi_3 + 1).d
                var_238_1.d = rax_21
                
                if (rax_21 s> var_238_1:4.d)
                    sub_14083a7e0(&var_240)
                
                uint64_t rcx_17 = var_240
                int64_t rdx_13 = rsi_3 * 3
                int32_t rax_22 = *(&var_170 + rbx)
                *(rcx_17 + (rdx_13 << 2)) = *(&var_178 + rbx)
                *(rcx_17 + (rdx_13 << 2) + 8) = rax_22
                int64_t rsi_4 = sx.q(var_258_1.d)
                int32_t rax_23 = (rsi_4 + 1).d
                var_258_1.d = rax_23
                
                if (rax_23 s> var_258_1:4.d)
                    sub_14083a7e0(&var_260)
                
                uint64_t rcx_19 = var_260
                int64_t rdx_15 = rsi_4 * 3
                int64_t zmm0_1 = *(&var_148 + rbx)
                int32_t rax_24 = *(&var_140 + rbx)
                rbx = &rbx[3]
                *(rcx_19 + (rdx_15 << 2)) = zmm0_1
                *(rcx_19 + (rdx_15 << 2) + 8) = rax_24
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t rax_25
        float zmm9_1[0x4]
        float zmm11_1[0x4]
        float zmm12_1[0x4]
        float zmm15_1
        rax_25, zmm8, zmm9_1, zmm11_1, zmm12_1, zmm15_1 = sub_14157dc90(&var_240, &var_260, 
            &var_228, &var_1d0, &var_264, &var_250, &var_278, &var_2a0)
        uint128_t zmm0_2
        float zmm2_1[0x4]
        
        if (rax_25 == 2)
            float zmm5_1 = zmm9_1[0]
            int64_t zmm4_1 = zmm9_1[0].q
            
            if (i_6 s> 0)
                float (* rax_28)[0x4] = &var_188
                uint64_t i_4 = zx.q(i_6)
                uint64_t i_2
                
                do
                    zmm2_1 = *rax_28
                    rax_28 = &(*rax_28)[1]
                    zmm0_2.d = zmm2_1.d f* *(&var_178 + r13)
                    zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r13)
                    zmm5_1 = zmm5_1 f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_170 + r13)
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r13)
                    zmm9_1[0] = zmm9_1[0] f+ zmm0_2.d
                    zmm0_2.d = zmm2_1.d f* *(&var_148:4 + r13)
                    zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r13)
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    r13 += 0xc
                    zmm4_1.d = zmm4_1.d f+ zmm0_2.d
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            zmm0_2 = zx.o(var_250.q)
            *arg4 = zmm15_1
            *arg7 = zmm0_2.q
            arg7[2] = var_248
            zmm0_2.d = zmm12_1.d f* *arg7
            zmm12_1[0] = zmm12_1[0] f* arg7[1]
            zmm12_1[0] = zmm12_1[0] f* arg7[2]
            zmm0_2.d = zmm0_2.d f+ zmm5_1
            zmm12_1[0] = zmm12_1[0] + zmm9_1[0]
            zmm12_1[0] = zmm12_1[0] + zmm9_1[0]
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm12_1[0].q)).q
            arg5[1].d = zmm12_1[0]
            zmm0_2.d = zmm11_1.d f* *arg7
            zmm11_1[0] = zmm11_1[0] f* arg7[1]
            zmm11_1[0] = zmm11_1[0] f* arg7[2]
            zmm9_1[0] = zmm9_1[0] f- zmm0_2.d
            zmm4_1.d = zmm4_1.d f- zmm11_1[0]
            zmm9_1[0] = zmm9_1[0] - zmm11_1[0]
            *arg6 = (_mm_unpacklo_ps(zmm9_1, zmm4_1)).q
            arg6[1].d = zmm9_1[0]
            float temp4_1 = *arg4
            zmm8[0] - temp4_1
            uint64_t rcx_25 = var_260
            rbx.b = zmm8[0] < temp4_1
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            uint64_t rcx_26 = var_240
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            result = zx.q(rbx.b)
        else
            float zmm3_1[0x4] = var_2a0
            zmm2_1 = var_29c_1
            *arg7 = var_250.q
            zmm0_2 = var_264
            arg7[2] = var_248
            zmm0_2.d = zmm0_2.d f+ zmm12_1[0]
            zmm0_2.d = zmm0_2.d f+ zmm11_1[0]
            *arg4 = zmm0_2.d
            zmm0_2.d = zmm12_1.d f* *arg7
            uint64_t rcx_22 = var_260
            zmm12_1[0] = zmm12_1[0] f* arg7[1]
            zmm12_1[0] = zmm12_1[0] f* arg7[2]
            zmm0_2.d = zmm0_2.d f+ var_278.d
            zmm12_1[0] = zmm12_1[0] f+ var_278:4.d
            zmm12_1[0] = zmm12_1[0] f+ var_270
            *arg5 = (_mm_unpacklo_ps(zmm0_2, zmm12_1[0].q)).q
            arg5[1].d = zmm12_1[0]
            zmm0_2.d = zmm11_1.d f* *arg7
            zmm11_1[0] = zmm11_1[0] f* arg7[1]
            zmm11_1[0] = zmm11_1[0] f* arg7[2]
            zmm3_1[0] = zmm3_1[0] f- zmm0_2.d
            zmm2_1[0] = zmm2_1[0] - zmm11_1[0]
            zmm0_2.d = var_298_1.d f- zmm11_1[0]
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
            arg6[1].d = zmm0_2.d
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            uint64_t rcx_23 = var_240
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            result.b = 1
        __security_check_cookie(rax_1 ^ &var_2e8)
        return result
    
    zmm4 = zmm10 ^ zmm13
    zmm3 = zmm8 ^ zmm13
    zmm4[0] = zmm4[0] f* rbx[1]
    zmm3[0] = zmm3[0] f* *rbx
    zmm4[0] = zmm4[0] f* rbx[4]
    zmm2 = zmm6 ^ zmm13
    zmm4[0] = zmm4[0] f* rbx[7]
    zmm2[0] = zmm2[0] f* rbx[2]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] f* rbx[6]
    zmm3[0] = zmm3[0] f* rbx[3]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm2[0] = zmm2[0] f* rbx[5]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm2[0] = zmm2[0] f* rbx[8]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    int32_t rsi_1
    
    if (not(zmm4[0] < zmm4[0]) && not(zmm4[0] < zmm4[0]))
        zmm7 = zx.o(*rbx)
        rsi_1 = rbx[2]
    else if (zmm4[0] < zmm4[0] || zmm4[0] < zmm4[0])
        zmm7 = zx.o(*(rbx + 0x18))
        rsi_1 = rbx[8]
    else
        zmm7 = zx.o(*(rbx + 0xc))
        rsi_1 = rbx[5]
    
    var_278 = zmm7.q
    var_270 = rsi_1
    float var_1b8
    result, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
        sub_14170b7f0(&var_1d0, &var_1b8, &var_2a0)
    zmm3 = var_278.d
    zmm2 = var_278:4.d
    zmm1 = zx.o(*result)
    int32_t rcx_4 = *(result + 8)
    zmm3[0] = zmm3[0] - zmm1[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm2[0] = zmm2[0] - temp0_7[0]
    zmm0 = var_270
    zmm0[0] = zmm0[0] f- rcx_4
    var_250 = zmm3[0]
    zmm3[0] = zmm3[0] * zmm8[0]
    float var_24c_1 = zmm2[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    var_248 = zmm0[0]
    zmm0[0] = zmm0[0] * zmm6[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    
    if (zmm3[0] > var_230)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_2e8)
        return result
    
    zmm0 = zx.o(var_250.q)
    *(&var_1a0:4 + (sx.q(i_6) << 2)) = i_6
    int64_t rdx_1 = sx.q(var_1a0.d)
    int32_t rax_8 = *(result + 8)
    int64_t rcx_5 = rdx_1 * 3
    *(&var_148 + (rcx_5 << 2)) = zmm1.q
    (&var_140)[rcx_5] = rax_8
    int32_t i_7 = rdx_1.d + 1
    var_1a0.d = rdx_1.d + 1
    *(&var_178 + (rcx_5 << 2)) = zmm7.q
    int64_t var_118
    *(&var_118 + (rcx_5 << 2)) = zmm0.q
    int32_t var_110
    (&var_110)[rcx_5] = var_248
    (&var_170)[rcx_5] = rsi_1
    int32_t var_27c_1
    
    if (rdx_1.d == 0)
        int64_t rax_14 = sx.q(var_1a0:4.d)
        int64_t rcx_9 = rax_14 * 3
        var_188[rax_14] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rcx_9 << 2)))
        var_27c_1 = (&var_110)[rcx_9]
    else
        uint64_t* rax_11
        
        if (rdx_1.d == 1)
            rax_11, zmm9 = sub_1416e69d0(&var_260, &var_118, &var_1a0:4, &var_1a0, &var_188)
        label_141625b0e:
            zmm0 = zx.o(*rax_11)
            rbx = var_228
            var_27c_1 = rax_11[1].d
            i_7 = var_1a0.d
        else
            if (rdx_1.d == 2)
                rax_11, zmm9, zmm11, zmm12, zmm13, zmm14 =
                    sub_1416fa750(&var_240, &var_118, &var_1a0, &var_188)
                goto label_141625b0e
            
            if (rdx_1.d == 3)
                uint64_t var_1ac
                rax_11, zmm9, zmm11, zmm12, zmm13, zmm14 =
                    sub_1416f9c90(&var_1ac, &var_118, &var_1a0, &var_188)
                goto label_141625b0e
            
            int32_t var_288_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
            var_27c_1 = 0
    
    int32_t var_190
    int64_t r8_5 = sx.q(var_190)
    int64_t rdi = sx.q(var_1a0:4.d)
    int64_t var_198
    int64_t r11_1 = sx.q(var_198.d)
    int64_t r10_1 = sx.q(var_198:4.d)
    zmm5 = var_27c_1
    int64_t rsi_2 = r8_5 * 3
    int32_t rax_15 = (&var_110)[rsi_2]
    int64_t r12_1 = rdi * 3
    int64_t r15_1 = r11_1 * 3
    int64_t r14_1 = r10_1 * 3
    int32_t rdx_9 = (&var_110)[r15_1]
    int32_t rcx_10 = (&var_110)[r14_1]
    int32_t r9_4 = (&var_110)[r12_1]
    int64_t var_284_1 = zmm0.q
    zmm4 = var_284_1:4.d
    int64_t var_10c_1 = *(&var_118 + (r15_1 << 2))
    zmm2 = var_188[r10_1]
    int64_t var_f4_1 = *(&var_118 + (rsi_2 << 2))
    zmm0 = var_188[rdi]
    int64_t var_100_1 = *(&var_118 + (r14_1 << 2))
    zmm1 = var_188[r11_1]
    var_118 = *(&var_118 + (r12_1 << 2))
    zmm3 = var_188[r8_5]
    int32_t r8_6 = (&var_170)[r12_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r15_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rsi_2 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = rdx_9
    int32_t rdx_10 = (&var_170)[r15_1]
    int32_t var_f8_1 = rcx_10
    int32_t rcx_11 = (&var_170)[r14_1]
    int32_t var_ec_1 = rax_15
    int32_t rax_16 = (&var_170)[rsi_2]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r15_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rsi_2 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (r14_1 << 2)))
    var_178 = *(&var_178 + (r12_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r12_1 << 2)))
    var_170 = r8_6
    int32_t r8_7 = (&var_140)[r12_1]
    int32_t var_164_1 = rdx_10
    int32_t rdx_11 = (&var_140)[r15_1]
    int32_t var_158_1 = rcx_11
    int32_t rcx_12 = (&var_140)[r14_1]
    int32_t var_14c_1 = rax_16
    int32_t rax_17 = (&var_140)[rsi_2]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a0:4.o = data_142e11d00
    var_110 = r9_4
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r8_7
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_284_1.d
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_134_1 = rdx_11
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_128_1 = rcx_12
    var_2a0 = zmm3[0]
    var_29c_1 = zmm4[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    var_298_1 = zmm5[0]
    int32_t var_11c_1 = rax_17
    zmm4[0] = zmm4[0] + zmm5[0]
    zmm8 = 0x358637bd
    
    if (zmm4[0] < 9.99999997e-07f || zmm4[0] >= zmm14[0])
        i_6 = i_7
        zmm14 = zmm4
        var_268 = zmm4[0]
        goto label_141625e18
    
    zmm6 = 0x3f800000
    i_6 = i_7
    zmm14 = zmm4
    rcx_1 = rcx_2
    float temp0_10[0x4] = _mm_sqrt_ss(0, zmm4[0])
    var_268 = zmm4[0]
    zmm6[0] = 1f / temp0_10[0]
    zmm8 = zmm6
    zmm10 = zmm6
    zmm8[0] = zmm8[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm4[0]
    zmm6[0] = zmm6[0] * zmm5[0]
    var_2a0 = zmm8[0]
    var_29c_1 = zmm10[0]
    var_298_1 = zmm6[0]
