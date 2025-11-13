// 函数: sub_141622a40
// 地址: 0x141622a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
float zmm2[0x4] = *arg3
float zmm9[0x4] = zx.o(0)
float zmm5[0x4] = 0x80000000
float zmm3[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_2[0] = (temp0 ^ 0x80000000)[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_4[0] = (temp0_1 ^ 0x80000000)[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_5[0] = temp0_3[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
float var_188[0x4] = temp0_6
float var_1c8[0x4] = temp0_6
zmm3 = *arg9 ^ 0x80000000
float zmm4[0x4] = (*arg9)[1] ^ 0x80000000
float zmm6[0x4] = (*arg9)[2] ^ 0x80000000
zmm6[0] = zmm6[0] * zmm6[0]
void* var_1f0 = arg2
float (* rdx)[0x4] = &var_1c8
zmm3[0] = zmm3[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm4[0]
int32_t* var_218 = arg1
zmm4[0] = zmm4[0] + zmm3[0]
float (* var_1e0)[0x4] = &var_1c8
zmm4[0] = zmm4[0] + zmm6[0]
bool cond:0_1

if (not(zmm4[0] < 9.99999975e-05f))
    zmm10 = 0x3f800000
    float temp0_7[0x4] = _mm_sqrt_ss(0, zmm4[0])
    cond:0_1 = temp0_7[0] != 0f
    zmm10[0] = 1f / temp0_7[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm11[0] = zmm11[0] * zmm3[0]
    zmm12[0] = zmm12[0] * zmm4[0]
    zmm10[0] = zmm10[0] * zmm6[0]

if (zmm4[0] < 9.99999975e-05f || not(cond:0_1))
    zmm11 = 0xbf800000
    zmm12 = zx.o(0)
    zmm10 = zx.o(0)

zmm6 = arg8
int64_t r13 = 0
zmm6[0] = zmm6[0] f+ arg10
int32_t r8 = 0
uint128_t zmm13 = 0x7f7fffff
int32_t i_6 = 0
var_188 = data_142d3f7e0
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x14)
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm0[0x4] = _mm_cvtps_pd(zmm6[0].q)
float zmm8[0x4]
float var_68[0x4] = zmm8
zmm0[0].q = zmm0[0].q f+ 0.001
float zmm14[0x4]
float var_c8[0x4] = zmm14
float var_230 = 3.40282347e+38f
float var_22c = zmm6[0]
float zmm15[0x4]
float var_d8[0x4] = zmm15
float var_284 = _mm_cvtpd_ps(zmm0)[0]

while (true)
    int32_t r8_1 = r8 + 1
    int64_t var_270
    int32_t var_268
    uint64_t var_260
    uint64_t var_250
    float var_248
    uint64_t var_240
    float var_228
    float var_224
    float var_220
    int64_t var_178
    int32_t var_170
    int64_t var_148
    int32_t var_140
    int128_t* result
    float zmm1[0x4]
    
    if (r8 s>= 0x20)
        zmm10 = 0x358637bd
    label_14162327c:
        
        if (arg11 != 0)
            *arg11 = r8_1
        
        if (not(zmm13.d f<= zmm10[0]))
            zmm14 = zmm9
            float var_294_2 = zmm9[0]
            zmm15 = zmm9
            zmm11 = zmm9
            zmm12 = zmm9
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
                    zmm14[0] = zmm14[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_170 + r13)
                    zmm15[0] = zmm15[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148 + r13)
                    zmm9[0] = zmm9[0] + zmm2[0]
                    zmm2[0] = zmm2[0] f* *(&var_148:4 + r13)
                    zmm2[0] = zmm2[0] f* *(&var_140 + r13)
                    zmm11[0] = zmm11[0] + zmm2[0]
                    r13 += 0xc
                    zmm12[0] = zmm12[0] + zmm2[0]
                    zmm10[0] = zmm10[0] + zmm2[0]
                    i = i_3
                    i_3 -= 1
                while (i != 1)
                var_294_2 = zmm9[0]
            
            zmm5 = 0x3f000000
            int64_t* r14_2 = arg7
            zmm11[0] = zmm11[0] - zmm14[0]
            zmm10[0] = zmm10[0] - zmm9[0]
            zmm3 = zx.o(0)
            zmm12[0] = zmm12[0] - zmm15[0]
            zmm11[0] = zmm11[0] * zmm11[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm12[0] = zmm12[0] + zmm11[0]
            zmm12[0] = zmm12[0] + zmm10[0]
            zmm3[0] = zmm12[0]
            zmm2 = 0x3f000000
            float temp0_35[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] * 0.5f
            temp0_35[0] = temp0_35[0] * temp0_35[0]
            zmm3[0] = zmm3[0] * temp0_35[0]
            zmm2[0] = 0.5f - zmm3[0]
            temp0_35[0] = temp0_35[0] * zmm2[0]
            temp0_35[0] = temp0_35[0] + temp0_35[0]
            temp0_35[0] = temp0_35[0] * temp0_35[0]
            zmm3[0] = zmm3[0] * temp0_35[0]
            zmm5[0] = 0.5f - zmm3[0]
            temp0_35[0] = temp0_35[0] * zmm5[0]
            temp0_35[0] = temp0_35[0] + temp0_35[0]
            temp0_35[0] = temp0_35[0] * zmm11[0]
            temp0_35[0] = temp0_35[0] * zmm12[0]
            temp0_35[0] = temp0_35[0] * zmm10[0]
            zmm1 = var_22c
            *r14_2 = (_mm_unpacklo_ps(temp0_35, temp0_35[0].q)).q
            float temp0_37[0x4] = _mm_sqrt_ss(0, zmm13.d)
            float var_288_2 = temp0_35[0]
            zmm1[0] = zmm1[0] - temp0_37[0]
            r14_2[1].d = var_288_2
            
            if (not(zmm1[0] < zmm9[0]))
                zmm9 = __minss_xmmss_memss(zmm1[0], 0x7f7fffff)
            
            zmm13 = arg8
            zmm2 = arg10
            zmm0 = zmm13
            zmm1 = zmm13
            *arg4 = zmm9[0]
            zmm0[0] = zmm0[0] f* *r14_2
            zmm1[0] = zmm1[0] f* *(r14_2 + 4)
            zmm13.d = zmm13.d f* r14_2[1].d
            zmm0[0] = zmm0[0] + zmm14[0]
            zmm1[0] = zmm1[0] + zmm15[0]
            zmm13.d = zmm13.d f+ var_294_2
            *arg5 = (_mm_unpacklo_ps(zmm0, zmm1[0].q)).q
            arg5[1].d = zmm13.d
            zmm2[0] = zmm2[0] f* *r14_2
            zmm2[0] = zmm2[0] f* *(r14_2 + 4)
            zmm2[0] = zmm2[0] f* r14_2[1].d
            zmm11[0] = zmm11[0] - zmm2[0]
            zmm12[0] = zmm12[0] - zmm2[0]
            zmm10[0] = zmm10[0] - zmm2[0]
            *arg6 = (_mm_unpacklo_ps(zmm11, zmm12[0].q)).q
            arg6[1].d = zmm10[0]
            result.b = 1
            __security_check_cookie(rax_1 ^ &var_2d8)
            return result
        
        var_240 = 0
        int64_t var_238_1 = 0
        var_260 = 0
        int64_t var_258_1 = 0
        sub_14083ad30(&var_240, 8)
        
        if (var_258_1:4.d s< 8)
            sub_14083ad30(&var_260, 8)
        
        if (i_6 s> 0)
            int64_t rdi_2 = 0
            uint64_t i_5 = zx.q(i_6)
            uint64_t i_1
            
            do
                int64_t rsi_2 = sx.q(var_238_1.d)
                int32_t rax_21 = (rsi_2 + 1).d
                var_238_1.d = rax_21
                
                if (rax_21 s> var_238_1:4.d)
                    sub_14083a7e0(&var_240)
                
                uint64_t rcx_7 = var_240
                int64_t rdx_10 = rsi_2 * 3
                int32_t rax_22 = *(&var_170 + rdi_2)
                *(rcx_7 + (rdx_10 << 2)) = *(&var_178 + rdi_2)
                *(rcx_7 + (rdx_10 << 2) + 8) = rax_22
                int64_t rsi_3 = sx.q(var_258_1.d)
                int32_t rax_23 = (rsi_3 + 1).d
                var_258_1.d = rax_23
                
                if (rax_23 s> var_258_1:4.d)
                    sub_14083a7e0(&var_260)
                
                uint64_t rcx_9 = var_260
                int64_t rdx_12 = rsi_3 * 3
                int64_t zmm0_1 = *(&var_148 + rdi_2)
                int32_t rax_24 = *(&var_140 + rdi_2)
                rdi_2 += 0xc
                *(rcx_9 + (rdx_12 << 2)) = zmm0_1
                *(rcx_9 + (rdx_12 << 2) + 8) = rax_24
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
        
        int32_t rax_25
        float zmm9_1[0x4]
        rax_25, zmm9_1, zmm10 = sub_14158eab0(&var_240, &var_260, &var_218, &var_1f0, zmm14, zmm15, 
            &var_284, &var_250, &var_228, &var_270)
        float zmm0_2[0x4]
        float zmm2_1[0x4]
        float zmm13_1[0x4]
        
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
                    zmm2_1[0] = zmm2_1[0] f* *(&var_178 + r13)
                    zmm2_1[0] = zmm2_1[0] f* *(&var_178:4 + r13)
                    zmm5_1 = zmm5_1 + zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_170 + r13)
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_148 + r13)
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    zmm2_1[0] = zmm2_1[0] f* *(&var_148:4 + r13)
                    zmm2_1[0] = zmm2_1[0] f* *(&var_140 + r13)
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    r13 += 0xc
                    zmm4_1.d = zmm4_1.d f+ zmm2_1[0]
                    zmm9_1[0] = zmm9_1[0] + zmm2_1[0]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            float zmm6_1[0x4] = arg8
            zmm13_1 = arg10
            zmm0_2 = zx.o(var_250)
            *arg4 = var_22c[0]
            *arg7 = zmm0_2.q
            arg7[2] = var_248
            zmm6_1[0] = zmm6_1[0] f* *arg7
            zmm6_1[0] = zmm6_1[0] f* arg7[1]
            zmm6_1[0] = zmm6_1[0] f* arg7[2]
            zmm6_1[0] = zmm6_1[0] + zmm5_1
            zmm6_1[0] = zmm6_1[0] + zmm9_1[0]
            zmm6_1[0] = zmm6_1[0] + zmm9_1[0]
            *arg5 = (_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)).q
            arg5[1].d = zmm6_1[0]
            zmm13_1[0] = zmm13_1[0] f* *arg7
            zmm13_1[0] = zmm13_1[0] f* arg7[1]
            zmm13_1[0] = zmm13_1[0] f* arg7[2]
            zmm9_1[0] = zmm9_1[0] - zmm13_1[0]
            zmm4_1.d = zmm4_1.d f- zmm13_1[0]
            zmm9_1[0] = zmm9_1[0] - zmm13_1[0]
            *arg6 = (_mm_unpacklo_ps(zmm9_1, zmm4_1)).q
            arg6[1].d = zmm9_1[0]
            float temp1_1 = *arg4
            zmm10[0] - temp1_1
            uint64_t rcx_15 = var_260
            i_6.b = zmm10[0] < temp1_1
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            uint64_t rcx_16 = var_240
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            result = zx.q(i_6.b)
        else
            zmm13_1 = arg8
            zmm14 = arg10
            float zmm3_1[0x4] = var_270.d
            zmm2_1 = var_270:4.d
            *arg7 = var_250
            zmm0_2 = var_284
            arg7[2] = var_248
            zmm0_2[0] = zmm0_2[0] + zmm13_1[0]
            zmm0_2[0] = zmm0_2[0] + zmm14[0]
            *arg4 = zmm0_2[0]
            zmm13_1[0] = zmm13_1[0] f* *arg7
            uint64_t rcx_12 = var_260
            zmm13_1[0] = zmm13_1[0] f* arg7[1]
            zmm13_1[0] = zmm13_1[0] f* arg7[2]
            zmm13_1[0] = zmm13_1[0] + var_228
            zmm13_1[0] = zmm13_1[0] + var_224
            zmm13_1[0] = zmm13_1[0] + var_220
            *arg5 = (_mm_unpacklo_ps(zmm13_1, zmm13_1[0].q)).q
            arg5[1].d = zmm13_1[0]
            zmm14[0] = zmm14[0] f* *arg7
            zmm14[0] = zmm14[0] f* arg7[1]
            zmm14[0] = zmm14[0] f* arg7[2]
            zmm3_1[0] = zmm3_1[0] - zmm14[0]
            zmm0_2 = var_268
            zmm2_1[0] = zmm2_1[0] - zmm14[0]
            zmm0_2[0] = zmm0_2[0] - zmm14[0]
            *arg6 = (_mm_unpacklo_ps(zmm3_1, zmm2_1[0].q)).q
            arg6[1].d = zmm0_2[0]
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            uint64_t rcx_13 = var_240
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            result.b = 1
        __security_check_cookie(rax_1 ^ &var_2d8)
        return result
    
    zmm4 = zmm12 ^ zmm5
    zmm3 = zmm11 ^ zmm5
    zmm4[0] = zmm4[0] f* arg1[4]
    zmm2 = zmm10 ^ zmm5
    zmm3[0] = zmm3[0] f* *arg1
    zmm2[0] = zmm2[0] f* arg1[2]
    zmm4[0] = zmm4[0] f* arg1[1]
    zmm4[0] = zmm4[0] f* arg1[7]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm3[0] = zmm3[0] f* arg1[3]
    zmm3[0] = zmm3[0] f* arg1[6]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm2[0] = zmm2[0] f* arg1[5]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm2[0] = zmm2[0] f* arg1[8]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    zmm4[0] = zmm4[0] + zmm2[0]
    int32_t r9_1
    
    if (not(zmm4[0] < zmm4[0]) && not(zmm4[0] < zmm4[0]))
        zmm13 = zx.o(*arg1)
        r9_1 = arg1[2]
    else if (zmm4[0] < zmm4[0] || zmm4[0] < zmm4[0])
        zmm13 = zx.o(*(arg1 + 0x18))
        r9_1 = arg1[8]
    else
        zmm13 = zx.o(*(arg1 + 0xc))
        r9_1 = arg1[5]
    
    zmm6 = (*rdx)[1]
    zmm7 = (*rdx)[2]
    zmm3 = *rdx
    zmm2 = (*rdx)[3]
    void* rax_6 = var_1f0
    zmm12[0] = zmm12[0] * zmm7[0]
    var_268 = r9_1
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm10[0] = zmm10[0] - zmm12[0]
    var_270 = zmm13.q
    zmm10[0] = zmm10[0] * zmm3[0]
    zmm10[0] = zmm10[0] + zmm10[0]
    zmm11[0] = zmm11[0] - zmm10[0]
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm14 = zmm10
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm14[0] = zmm14[0] * zmm7[0]
    zmm11[0] = zmm11[0] + zmm11[0]
    zmm12[0] = zmm12[0] + zmm12[0]
    zmm2[0] = zmm2[0] * zmm11[0]
    zmm15 = zmm11
    zmm15[0] = zmm15[0] * zmm3[0]
    zmm11[0] = zmm11[0] * zmm7[0]
    zmm2[0] = zmm2[0] + zmm12[0]
    zmm12[0] = zmm12[0] * zmm3[0]
    zmm14[0] = zmm14[0] - zmm12[0]
    zmm10[0] = zmm10[0] * zmm6[0]
    zmm14[0] = zmm14[0] + zmm2[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    zmm15[0] = zmm15[0] - zmm10[0]
    zmm12[0] = zmm12[0] * zmm6[0]
    zmm2[0] = zmm2[0] * zmm10[0]
    zmm2[0] = zmm2[0] + zmm10[0]
    zmm12[0] = zmm12[0] - zmm11[0]
    zmm2[0] = zmm2[0] + zmm11[0]
    zmm15[0] = zmm15[0] + zmm2[0]
    zmm12[0] = zmm12[0] + zmm2[0]
    
    if (zmm12[0] >= zmm9[0])
        zmm3 = *(rax_6 + 0x1c)
    else
        zmm3 = *(rax_6 + 0x10)
    
    if (zmm14[0] >= zmm9[0])
        zmm2 = *(rax_6 + 0x20)
    else
        zmm2 = *(rax_6 + 0x14)
    
    if (zmm15[0] >= zmm9[0])
        zmm0 = *(rax_6 + 0x24)
    else
        zmm0 = *(rax_6 + 0x18)
    
    float temp0_12[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), _mm_unpacklo_ps(zmm2, zmm9[0].q)[0].q)
    zmm5 = *arg3
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, temp0_15)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_14)
    float temp0_19[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_20[0x4] = _mm_sub_ps(temp0_18, temp0_16)
    float temp0_21[0x4] = _mm_add_ps(temp0_20, temp0_20)
    float temp0_22[0x4] = _mm_mul_ps(temp0_19, temp0_21)
    float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_15)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xd2)
    float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_12)
    zmm2 = var_270:4.d
    float temp0_27[0x4] = _mm_mul_ps(temp0_25, temp0_14)
    zmm3 = var_270.d
    float temp0_30[0x4] =
        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_27, temp0_24), temp0_26), arg3[1])
    zmm3[0] = zmm3[0] - temp0_30[0]
    var_228 = temp0_30[0]
    float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0x55)
    zmm2[0] = zmm2[0] - temp0_31[0]
    var_224 = temp0_31[0]
    zmm0 = var_268
    var_250.d = zmm3[0]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xaa)
    zmm0[0] = zmm0[0] - temp0_32[0]
    zmm3[0] = zmm3[0] * zmm11[0]
    var_250:4.d = zmm2[0]
    zmm2[0] = zmm2[0] * zmm12[0]
    var_248 = zmm0[0]
    zmm0[0] = zmm0[0] * zmm10[0]
    zmm3[0] = zmm3[0] + zmm2[0]
    var_220 = temp0_32[0]
    zmm3[0] = zmm3[0] + zmm0[0]
    
    if (zmm3[0] > var_284)
        result.b = 0
        __security_check_cookie(rax_1 ^ &var_2d8)
        return result
    
    zmm0 = zx.o(var_228.q)
    *(&var_1a8:4 + (sx.q(i_6) << 2)) = i_6
    int64_t r8_2 = sx.q(var_1a8.d)
    int64_t rdx_1 = r8_2 * 3
    *(&var_148 + (rdx_1 << 2)) = zmm0.q
    zmm0 = zx.o(var_250)
    (&var_140)[rdx_1] = var_220
    int32_t i_7 = r8_2.d + 1
    var_1a8.d = r8_2.d + 1
    int64_t var_118
    *(&var_118 + (rdx_1 << 2)) = zmm0.q
    *(&var_178 + (rdx_1 << 2)) = zmm13.q
    int32_t var_110
    (&var_110)[rdx_1] = var_248
    (&var_170)[rdx_1] = r9_1
    int32_t var_278_1
    
    if (r8_2.d == 0)
        int64_t rax_14 = sx.q(var_1a8:4.d)
        int64_t rdx_5 = rax_14 * 3
        var_188[rax_14] = 0x3f800000
        zmm0 = zx.o(*(&var_118 + (rdx_5 << 2)))
        var_278_1 = (&var_110)[rdx_5]
    else
        uint64_t* rax_11
        
        if (r8_2.d == 1)
            rax_11, zmm9 = sub_1416e69d0(&var_260, &var_118, &var_1a8:4, &var_1a8, &var_188)
        label_141622f8f:
            zmm0 = zx.o(*rax_11)
            arg1 = var_218
            var_278_1 = rax_11[1].d
            i_7 = var_1a8.d
        else
            if (r8_2.d == 2)
                rax_11, zmm9, zmm14, zmm15 = sub_1416fa750(&var_240, &var_118, &var_1a8, &var_188)
                goto label_141622f8f
            
            if (r8_2.d == 3)
                uint64_t var_1b8[0x2]
                rax_11, zmm9, zmm14, zmm15 = sub_1416f9c90(&var_1b8, &var_118, &var_1a8, &var_188)
                goto label_141622f8f
            
            int32_t var_288_1 = 0
            zmm0 = _mm_unpacklo_ps(zmm9, zmm9[0].q)
            var_278_1 = 0
    
    int32_t var_198
    int64_t r9_5 = sx.q(var_198)
    int64_t rdi_1 = sx.q(var_1a8:4.d)
    int64_t var_1a0
    int64_t rbx = sx.q(var_1a0.d)
    int64_t r11_1 = sx.q(var_1a0:4.d)
    zmm5 = var_278_1
    int64_t rsi_1 = r9_5 * 3
    int32_t rax_15 = (&var_110)[rsi_1]
    int64_t r12_1 = rdi_1 * 3
    int64_t r15_1 = rbx * 3
    int64_t r14_1 = r11_1 * 3
    int32_t r8_10 = (&var_110)[r15_1]
    int32_t rdx_6 = (&var_110)[r14_1]
    int32_t r10_1 = (&var_110)[r12_1]
    zmm10 = 0x358637bd
    int64_t var_280_1 = zmm0.q
    zmm4 = var_280_1.d
    int64_t var_10c_1 = *(&var_118 + (r15_1 << 2))
    zmm2 = var_188[r11_1]
    int64_t var_f4_1 = *(&var_118 + (rsi_1 << 2))
    zmm0 = var_188[rdi_1]
    int64_t var_100_1 = *(&var_118 + (r14_1 << 2))
    zmm1 = var_188[rbx]
    var_118 = *(&var_118 + (r12_1 << 2))
    zmm3 = var_188[r9_5]
    int32_t r9_6 = (&var_170)[r12_1]
    var_188[2] = zmm2[0]
    zmm2 = zx.o(*(&var_178 + (r15_1 << 2)))
    var_188[0] = zmm0[0]
    zmm0 = zx.o(*(&var_178 + (rsi_1 << 2)))
    var_188[1] = zmm1[0]
    zmm1 = zx.o(*(&var_178 + (r14_1 << 2)))
    var_188[3] = zmm3[0]
    int32_t var_104_1 = r8_10
    int32_t r8_11 = (&var_170)[r15_1]
    int32_t var_f8_1 = rdx_6
    int32_t rdx_7 = (&var_170)[r14_1]
    int32_t var_ec_1 = rax_15
    int32_t rax_16 = (&var_170)[rsi_1]
    int64_t var_16c_1 = zmm2.q
    zmm2 = zx.o(*(&var_148 + (r15_1 << 2)))
    int64_t var_154_1 = zmm0.q
    zmm0 = zx.o(*(&var_148 + (rsi_1 << 2)))
    int64_t var_160_1 = zmm1.q
    zmm1 = zx.o(*(&var_148 + (r14_1 << 2)))
    var_178 = *(&var_178 + (r12_1 << 2))
    zmm3 = zx.o(*(&var_148 + (r12_1 << 2)))
    var_170 = r9_6
    int32_t r9_7 = (&var_140)[r12_1]
    int32_t var_164_1 = r8_11
    int32_t r8_12 = (&var_140)[r15_1]
    int32_t var_158_1 = rdx_7
    int32_t rdx_8 = (&var_140)[r14_1]
    int32_t var_14c_1 = rax_16
    int32_t rax_17 = (&var_140)[rsi_1]
    int64_t var_13c_1 = zmm2.q
    int64_t var_124_1 = zmm0.q
    var_1a8:4.o = data_142e11d00
    var_110 = r10_1
    int64_t var_130_1 = zmm1.q
    var_148 = zmm3.q
    zmm3 = var_280_1:4.d
    zmm4[0] = zmm4[0] * zmm4[0]
    var_140 = r9_7
    zmm3[0] = zmm3[0] * zmm3[0]
    int32_t var_134_1 = r8_12
    zmm5[0] = zmm5[0] * zmm5[0]
    int32_t var_128_1 = rdx_8
    zmm3[0] = zmm3[0] + zmm4[0]
    int32_t var_11c_1 = rax_17
    zmm3[0] = zmm3[0] + zmm5[0]
    
    if (zmm3[0] < 9.99999997e-07f || zmm3[0] >= var_230)
        i_6 = i_7
        zmm13 = zmm3
        goto label_14162327c
    
    zmm10 = 0x3f800000
    i_6 = i_7
    zmm13 = zmm3
    rdx = var_1e0
    r8 = r8_1
    float temp0_34[0x4] = _mm_sqrt_ss(0, zmm3[0])
    var_230 = zmm3[0]
    zmm10[0] = 1f / temp0_34[0]
    zmm11 = zmm10
    zmm12 = zmm10
    zmm10[0] = zmm10[0] * zmm5[0]
    zmm5 = 0x80000000
    zmm11[0] = zmm11[0] * zmm4[0]
    zmm12[0] = zmm12[0] * zmm3[0]
