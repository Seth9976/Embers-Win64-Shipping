// 函数: sub_141673da0
// 地址: 0x141673da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
float result_21[0x4] = *arg3
float result_20[0x4] = *(arg2 + 0x1c)
int32_t* r10 = arg1
int64_t r13 = 0
float result_8[0x4] = result_21 ^ 0x80000000
uint128_t var_338 = arg3[1]
float temp0[0x4] = _mm_shuffle_ps(result_8, result_8, 0xe1)
int128_t var_12c_1
__builtin_memset(&var_12c_1, 0, 0x24)
int32_t i_7 = 0
int128_t var_fc_1
__builtin_memset(&var_fc_1, 0, 0x24)
int32_t* var_2c8 = r10
uint128_t var_178 = data_142d3f7e0
float (* var_268)[0x4] = arg4
int128_t* r15 = arg3
int128_t var_168
__builtin_memset(&var_168, 0, 0x24)
void* r11 = arg2
float temp0_1[0x4] = _mm_shuffle_ps(result_21, result_21, 0x55)
result_20[0] = result_20[0] * result_20[0]
float temp0_2[0x4] = _mm_shuffle_ps(result_21, result_21, 0xaa)
uint128_t result_11 = zx.o(0)
int32_t var_18c
__builtin_memset(&var_18c, 0, 0x10)
int32_t i_8 = i_7
uint128_t result_17 = _mm_cvtps_pd(result_20[0].q)
int32_t i_6 = i_8
float temp0_4[0x4] = _mm_shuffle_ps(result_21, result_21, 0xff)
result_17.q = result_17.q f+ 9.9999999999999995e-07
float result_9[0x4] = (*arg10)[1]
float result_13 = result_20[0]
float result_31[0x4] = result_21
int32_t result_29 = _mm_cvtpd_ps(result_17).d
float result_39 = temp0_4[0]
float result_18[0x4] = (*arg10)[2]
temp0[0] = (temp0_1 ^ 0x80000000).d
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_6[0] = (temp0_2 ^ 0x80000000)[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0_4[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float var_1c8[0x4] = temp0_8
result_9[0] = result_9[0] f* r10[1]
float var_238[0x4] = temp0_8
result_8 = *arg10
result_17.d = result_8.d f* *r10
uint128_t result_35
result_35.d = result_9.d f* r10[4]
result_18[0] = result_18[0] f* r10[2]
result_9[0] = result_9[0] f+ result_17.d
result_9[0] = result_9[0] f* r10[7]
result_17.d = result_8.d f* r10[3]
result_8[0] = result_8[0] f* r10[6]
result_9[0] = result_9[0] + result_18[0]
result_18[0] = result_18[0] f* r10[8]
result_18[0] = result_18[0] f* r10[5]
result_35.d = result_35.d f+ result_17.d
result_9[0] = result_9[0] + result_8[0]
result_35.d = result_35.d f+ result_18[0]
result_9[0] = result_9[0] + result_18[0]
int32_t result_43

if (not(result_9[0] f< result_35.d) && not(result_9[0] < result_9[0]))
    result_17 = zx.o(*r10)
    result_43 = r10[2]
else if (result_35.d f< result_9[0] || result_35.d f< result_9[0])
    result_17 = zx.o(*(r10 + 0x18))
    result_43 = r10[8]
else
    result_17 = zx.o(*(r10 + 0xc))
    result_43 = r10[5]

uint64_t result_27 = result_17.q
int64_t result_32 = result_17.q
result_17 = zx.o(*(arg2 + 0x10))
uint64_t result_24 = result_17.q
result_8 = result_24.d
result_35 = _mm_shuffle_ps(result_17, result_17, 0x55)
result_8[0] = result_8[0] * temp0_2[0]
result_17.d = result_35.d f* temp0_2[0]
result_18 = result_35
int32_t result_40 = result_43
float result_15 = *(arg2 + 0x18)
result_18[0] = result_18[0] * result_21[0]
float result_7 = result_15
uint128_t result_5 = result_7
float result_10[0x4] = result_5
result_10[0] = result_10[0] * temp0_1[0]
result_10[0] = result_10[0] f- result_17.d
result_17.d = result_5.d f* result_21[0]
result_8[0] = result_8[0] f- result_17.d
result_17.d = result_8.d f* temp0_1[0]
result_10[0] = result_10[0] + result_10[0]
result_18[0] = result_18[0] f- result_17.d
temp0_4[0] = temp0_4[0] * result_10[0]
result_8[0] = result_8[0] + result_8[0]
temp0_2[0] = temp0_2[0] * result_10[0]
temp0_4[0] = temp0_4[0] + result_8[0]
result_17.d = temp0_2.d f* result_8[0]
result_18[0] = result_18[0] + result_18[0]
result_21[0] = result_21[0] * result_8[0]
temp0_1[0] = temp0_1[0] * result_18[0]
temp0_1[0] = temp0_1[0] f- result_17.d
result_17.d = result_21.d f* result_18[0]
temp0_1[0] = temp0_1[0] + temp0_4[0]
temp0_2[0] = temp0_2[0] f- result_17.d
temp0_4[0] = temp0_4[0] * result_8[0]
result_9 = var_338:8.d
result_17.d = temp0_1.d f* result_10[0]
float zmm13[0x4] = zx.o(0)
temp0_4[0] = temp0_4[0] f+ result_35.d
float result_6 = result_9[0]
float result_2 = result_9[0]
result_21[0] = result_21[0] f- result_17.d
temp0_2[0] = temp0_2[0] + temp0_4[0]
temp0_4[0] = temp0_4[0] * result_18[0]
result_18 = var_338:4.d
float result_12 = result_18[0]
result_10 = result_18
result_17 = _mm_unpacklo_ps(temp0_1, temp0_2[0].q)
temp0_4[0] = temp0_4[0] f+ result_5.d
int64_t result_14 = result_17.q
result_5 = result_9
result_17.d = result_27.d.d f- temp0_1[0]
float var_29c = result_18[0]
result_21[0] = result_21[0] + temp0_4[0]
float result_34[0x4] = var_338.d
float result_42[0x4] = result_34
float result_37 = result_34[0]
float var_2a0 = result_34[0]
result_35 = result_34
result_42[0] = result_42[0] f- result_17.d
float result_1 = result_21[0]
float result_3 = result_1
float result = zx.d(arg9)
result_17.d = result_27:4.d.d f- temp0_2[0]
float result_36[0x4] = result_18
int64_t var_2f8 = 0
float result_22[0x4] = result_9
float var_2f0 = 1f
result_36[0] = result_36[0] f- result_17.d
result_17.d = result_43.d f- result_21[0]
result_22[0] = result_22[0] f- result_17.d
result_36[0] = result_36[0] * result_36[0]
result_17.d = result_42.d f* result_42[0]
result_22[0] = result_22[0] * result_22[0]
result_36[0] = result_36[0] f+ result_17.d
result_36[0] = result_36[0] + result_22[0]
float rdi

if (result_36[0] f>= result_29 || (result.b != 0 && result_36[0] >= 9.99999997e-07f))
    rdi.b = 0
else
    rdi.b = 1

result_34 = 0x7f7fffff
int64_t rbx
rbx.b = 0
float result_23 = 3.40282347e+38f
int32_t rdx = 0
uint32_t r8 = zx.d(rdi.b)
char var_358 = rdi.b
result_21 = 0x7f7fffff
int32_t var_328 = 0
float var_324
int64_t result_38
float result_19[0x4]

if (rdi.b == 0)
    while (true)
        int32_t rax_5 = rdx
        rdx += 1
        var_328 = rdx
        
        if (rax_5 s>= 0x20)
            result_5 = result_6
            result = zx.d(arg9)
        else
            result_19 = 0x3f000000
            result_18 = zx.o(0)
            result_22[0] = result_22[0] * result_22[0]
            result_17.d = result_42.d f* result_42[0]
            result_36[0] = result_36[0] * result_36[0]
            result_36[0] = result_36[0] f+ result_17.d
            result_36[0] = result_36[0] + result_22[0]
            result_18[0] = result_36[0]
            result_8 = 0x3f000000
            float temp0_11[0x4] = _mm_rsqrt_ss(result_18[0], result_18[0])
            result_18[0] = result_18[0] * 0.5f
            result_17.d = temp0_11.d f* temp0_11[0]
            result_18[0] = result_18[0] f* result_17.d
            result_8[0] = 0.5f - result_18[0]
            result_17.d = temp0_11.d f* result_8[0]
            temp0_11[0] = temp0_11[0] f+ result_17.d
            temp0_11[0] = temp0_11[0] * temp0_11[0]
            result_18[0] = result_18[0] * temp0_11[0]
            result_19[0] = 0.5f - result_18[0]
            result_17.d = temp0_11.d f* result_19[0]
            temp0_11[0] = temp0_11[0] f+ result_17.d
            result_22[0] = result_22[0] * temp0_11[0]
            result_36[0] = result_36[0] * temp0_11[0]
            temp0_11[0] = temp0_11[0] * result_42[0]
            result_22[0] = result_22[0] f* r10[2]
            result_36[0] = result_36[0] f* r10[1]
            result_36[0] = result_36[0] f* r10[4]
            result_17.d = temp0_11.d f* *r10
            var_324 = temp0_11[0]
            result_36[0] = result_36[0] f* r10[7]
            result_36[0] = result_36[0] f+ result_17.d
            float result_30 = temp0_11[0]
            result_17.d = temp0_11.d f* r10[3]
            result_36[0] = result_36[0] + result_22[0]
            result_22[0] = result_22[0] f* r10[5]
            result_36[0] = result_36[0] f+ result_17.d
            result_17.d = temp0_11.d f* r10[6]
            result_36[0] = result_36[0] + result_22[0]
            result_22[0] = result_22[0] f* r10[8]
            result_36[0] = result_36[0] f+ result_17.d
            bool cond:1_1 = result_36[0] < result_36[0]
            result_36[0] = result_36[0] + result_22[0]
            int32_t rax_6
            
            if (not(cond:1_1) && not(result_36[0] < result_36[0]))
                result_17 = zx.o(*r10)
                rax_6 = r10[2]
            else if (result_36[0] < result_36[0] || result_36[0] < result_36[0])
                result_17 = zx.o(*(r10 + 0x18))
                rax_6 = r10[8]
            else
                result_17 = zx.o(*(r10 + 0xc))
                rax_6 = r10[5]
            
            uint64_t result_28 = result_17.q
            result_17 = zx.o(*(r11 + 0x10))
            result_21 = result_28.d
            result_19 = result_17
            result_20 = result_28:4.d
            result_8 = result_17.d
            float temp0_12[0x4] = _mm_shuffle_ps(result_19, result_19, 0x55)
            result_8[0] = result_8[0] * temp0_2[0]
            result_17.d = temp0_12.d f* temp0_2[0]
            result_10 = *(r11 + 0x18)
            result_35.d = result_10.d f* temp0_1[0]
            float var_300_1 = rax_6[0]
            temp0_12[0] = temp0_12[0] * result_31[0]
            result_35.d = result_35.d f- result_17.d
            result_17.d = result_10.d f* result_31[0]
            result_34 = result_39
            result_8[0] = result_8[0] f- result_17.d
            result_17.d = result_8.d f* temp0_1[0]
            result_35.d = result_35.d f+ result_35.d
            temp0_12[0] = temp0_12[0] f- result_17.d
            result_34[0] = result_34[0] f* result_35.d
            result_8[0] = result_8[0] + result_8[0]
            temp0_2[0] = temp0_2[0] f* result_35.d
            result_34[0] = result_34[0] + result_8[0]
            result_17.d = temp0_2.d f* result_8[0]
            temp0_12[0] = temp0_12[0] + temp0_12[0]
            result_5.d = temp0_1.d f* temp0_12[0]
            result_5.d = result_5.d f- result_17.d
            result_17.d = result_31.d f* temp0_12[0]
            result_31[0] = result_31[0] * result_8[0]
            result_5.d = result_5.d f+ result_34[0]
            result_34 = result_39
            result_34[0] = result_34[0] * result_8[0]
            temp0_2[0] = temp0_2[0] f- result_17.d
            result_17.d = temp0_1[0].d f* result_35.d
            result_35 = result_37
            result_34[0] = result_34[0] + temp0_12[0]
            result_31[0] = result_31[0] f- result_17.d
            temp0_2[0] = temp0_2[0] + result_34[0]
            result_34 = result_39
            result_34[0] = result_34[0] * temp0_12[0]
            result_18 = result_35
            result_34[0] = result_34[0] + result_10[0]
            result_10 = result_12
            result_20[0] = result_20[0] - temp0_2[0]
            result_31[0] = result_31[0] + result_34[0]
            result_21[0] = result_21[0] f- result_5.d
            float var_278_1 = result_20[0]
            result_10[0] = result_10[0] - result_20[0]
            result_17.d = rax_6.d f- result_31[0]
            float var_1e0_1 = result_31[0]
            result_8 = result_6
            result_18[0] = result_18[0] - result_21[0]
            float var_27c_1 = result_21[0]
            result_24:4.d = result_10[0]
            var_324 = result_17.d
            result_24.d = result_18[0]
            result_19 = result_30
            result_8[0] = result_8[0] f- result_17.d
            result_17 = _mm_unpacklo_ps(result_21, result_20[0].q)
            result_20 = result_13
            result_10[0] = result_10[0] * result_36[0]
            (&var_18c)[sx.q(i_8)] = i_8
            int64_t i_9 = sx.q(i_7)
            result_18[0] = result_18[0] * result_19[0]
            i_6 = i_9.d
            int64_t rdx_1 = i_9 * 3
            result_7 = result_8[0]
            *(&result_32 + (rdx_1 << 2)) = result_17.q
            result_10[0] = result_10[0] + result_18[0]
            result_8[0] = result_8[0] * result_22[0]
            (&result_40)[rdx_1] = var_300_1
            *(&result_14 + (rdx_1 << 2)) = (_mm_unpacklo_ps(result_5, temp0_2[0].q)).q
            result_10[0] = result_10[0] + result_8[0]
            (&result_3)[rdx_1] = var_1e0_1
            int128_t var_158_1
            int32_t var_148_1
            
            if (result_10[0] <= result_20[0])
                i_9 = zx.q(i_9.d + 1)
                *(&var_168 + (rdx_1 << 2)) = result_24
                *(&var_168:8 + (rdx_1 << 2)) = result_7
                i_6 = i_9.d
                i_7 = i_9.d
            label_1416747b0:
                result_21 = result_23
                result_5 = result_6
                
                if (r8.b != 0 && not(result_10[0] f< result_11.d))
                    result_10[0] = result_10[0] * result_10[0]
                    result_10[0] = result_10[0] + 9.99999997e-07f
                    rdi.b = result_10[0] >= result_21[0]
            else
                result_18 = (*arg4)[1]
                result_42 = *arg4
                result_5 = (*arg4)[2]
                result_19[0] = result_19[0] * result_42[0]
                result_17.d = result_36.d f* result_18[0]
                result_22[0] = result_22[0] f* result_5.d
                result_19[0] = result_19[0] f+ result_17.d
                result_19[0] = result_19[0] + result_22[0]
                
                if (result_19[0] f>= result_11.d)
                    result.b = 0
                    goto label_141675246
                
                result_17.d = result_10.d f- result_20[0]
                result_17.d = result_17.d f/ result_19[0]
                zmm13[0] = zmm13[0] f- result_17.d
                
                if (zmm13[0] <= zmm13[0])
                    goto label_1416747b0
                
                if (zmm13[0] f> arg5)
                    result.b = 0
                    goto label_141675246
                
                result_34 = zx.o(var_2a0.q)
                result_10 = result_18
                result_17 = result_34
                result_21 = 0x7f7fffff
                result_17 = _mm_shuffle_ps(result_17, result_17, 0x55)
                i_9 = zx.q(i_9.d + 1)
                result_38 = result_34.q
                result_35.d = result_42.d f* zmm13[0]
                result_1 = result_2
                result_10[0] = result_10[0] * zmm13[0]
                i_6 = i_9.d
                result_35.d = result_35.d f+ var_338.d
                result_5.d = result_5.d f* zmm13[0]
                i_7 = i_9.d
                result_10[0] = result_10[0] f+ var_338:4.d
                var_2f8.d = result_19[0]
                result_5.d = result_5.d f+ var_338:8.d
                result_18 = result_35
                result_37 = result_35.d
                result_18[0] = result_18[0] - result_34[0]
                var_2a0 = result_35.d
                result_34 = var_168:4.d
                result_10[0] = result_10[0] f- result_17.d
                result_12 = result_10[0]
                result_17 = var_168.d
                result_8 = result_5
                result_8[0] = result_8[0] - result_1
                result_17.d = result_17.d f+ result_18[0]
                result_6 = result_5.d
                float var_29c_1 = result_10[0]
                result_34[0] = result_34[0] + result_10[0]
                result_2 = result_5.d
                var_2f8:4.d = result_36[0]
                var_2f0 = result_22[0]
                var_168.d = result_17.d
                result_17.d = var_168:8.d.d f+ result_8[0]
                var_168:4.d = result_34[0]
                result_34 = var_168:0xc.d
                result_34[0] = result_34[0] + result_18[0]
                result_23 = 3.40282347e+38f
                var_358 = 0
                var_168:8.d = result_17.d
                var_168:0xc.d = result_34[0]
                result_17.d = var_158_1.d.d f+ result_10[0]
                result_34 = var_158_1:4.d
                result_34[0] = result_34[0] + result_8[0]
                var_158_1.d = result_17.d
                result_17 = var_158_1:8.d
                var_158_1:4.d = result_34[0]
                result_17.d = result_17.d f+ result_18[0]
                result_34 = var_158_1:0xc.d
                result_34[0] = result_34[0] + result_10[0]
                var_158_1:8.d = result_17.d
                result_17.d = var_148_1.d f+ result_8[0]
                var_158_1:0xc.d = result_34[0]
                result_34 = result_35
                result_34[0] = result_34[0] - var_27c_1
                result_10[0] = result_10[0] - var_278_1
                var_148_1 = result_17.d
                result_17.d = result_5.d f- var_324
                *(&var_168 + (rdx_1 << 2)) = (_mm_unpacklo_ps(result_34, result_10[0].q)).q
                *(&var_168:8 + (rdx_1 << 2)) = result_17.d
            
            if (rdi.b != 0)
                int64_t* rax_21
                rax_21, result_35, result_10, result_5, result_20, result_21, result_11, zmm13 =
                    sub_1416f4530(&var_238, &var_168, &i_7, &var_178, &result_32, &result_14)
                r10 = var_2c8
                result_34 = zx.o(*rax_21)
                result_17 = result_34
                result_22 = rax_21[1].d
                i_6 = i_7
                result_36 = _mm_shuffle_ps(result_17, result_17, 0x55)
                result = zx.d(arg9)
                result_42 = result_34.d
            else
                int32_t result_26
                
                if (i_9.d == 1)
                    int64_t rax_17 = sx.q(var_18c)
                    int64_t rcx_6 = rax_17 * 3
                    *(&var_178 + (rax_17 << 2)) = 0x3f800000
                    result_17 = zx.o(*(&var_168 + (rcx_6 << 2)))
                    result_26 = *(&var_168:8 + (rcx_6 << 2))
                else
                    uint64_t* rax_14
                    
                    if (i_9.d == 2)
                        void var_1a0
                        rax_14, result_35, result_10, result_5 =
                            sub_1416e69d0(&var_1a0, &var_168, &var_18c, &i_7, &var_178)
                    label_141674833:
                        result_17 = zx.o(*rax_14)
                        r10 = var_2c8
                        result_26 = rax_14[1].d
                        i_6 = i_7
                    else
                        if (i_9.d == 3)
                            uint64_t var_1ac
                            rax_14, result_35, result_10, result_5, result_20, result_21, 
                                result_11, zmm13 = sub_1416fa750(&var_1ac, &var_168, &i_7, &var_178)
                            goto label_141674833
                        
                        if (i_9.d == 4)
                            uint64_t var_1b8
                            rax_14, result_35, result_10, result_5, result_20, result_21, 
                                result_11, zmm13 = sub_1416f9c90(&var_1b8, &var_168, &i_7, &var_178)
                            goto label_141674833
                        
                        int32_t var_318_1 = 0
                        result_17 = _mm_unpacklo_ps(result_11, result_11.q)
                        result_26 = 0
                
                int32_t var_180
                int64_t rdi_1 = sx.q(var_180)
                rbx = sx.q(var_18c)
                int64_t var_188
                int64_t r11_1 = sx.q(var_188.d)
                int64_t r9_3 = sx.q(var_188:4.d)
                result_22 = result_26
                int64_t rsi_1 = rdi_1 * 3
                int64_t r12_1 = rbx * 3
                int64_t r15_1 = r11_1 * 3
                int64_t r14_1 = r9_3 * 3
                r8 = *(&var_168:8 + (r12_1 << 2))
                uint64_t result_25 = result_17.q
                result_42 = result_25.d
                result_36 = result_25:4.d
                var_168:0xc.q = *(&var_168 + (r15_1 << 2))
                var_148_1:4.q = *(&var_168 + (rsi_1 << 2))
                var_158_1:8.q = *(&var_168 + (r14_1 << 2))
                var_168.q = *(&var_168 + (r12_1 << 2))
                int32_t result_44 = (&result_40)[r12_1]
                var_178:8.d = (*(&var_178 + (r9_3 << 2)))[0]
                var_178.d = (*(&var_178 + (rbx << 2))).d
                var_178:4.d = (*(&var_178 + (r11_1 << 2)))[0]
                var_178:0xc.d = (*(&var_178 + (rdi_1 << 2)))[0]
                var_158_1:4.d = *(&var_168:8 + (r15_1 << 2))
                int32_t rdx_6 = (&result_40)[r15_1]
                var_148_1 = *(&var_168:8 + (r14_1 << 2))
                int32_t rcx_8 = (&result_40)[r14_1]
                var_148_1 = *(&var_168:8 + (rsi_1 << 2))
                int32_t rax_19 = (&result_40)[rsi_1]
                var_12c_1.q = *(&result_32 + (r15_1 << 2))
                result_8 = zx.o(*(&result_14 + (r15_1 << 2)))
                int128_t var_11c_1
                var_11c_1:8.q = *(&result_32 + (rsi_1 << 2))
                result_17 = zx.o(*(&result_14 + (rsi_1 << 2)))
                var_12c_1:0xc.q = *(&result_32 + (r14_1 << 2))
                result_34 = zx.o(*(&result_14 + (r14_1 << 2)))
                result_32 = *(&result_32 + (r12_1 << 2))
                result_18 = zx.o(*(&result_14 + (r12_1 << 2)))
                result_40 = result_44
                var_12c_1:8.d = rdx_6
                int32_t rdx_7 = (&result_3)[r15_1]
                var_11c_1:4.d = rcx_8
                int32_t rcx_9 = (&result_3)[r14_1]
                int32_t var_10c_1 = rax_19
                int32_t rax_20 = (&result_3)[rsi_1]
                var_fc_1.q = result_8.q
                int128_t var_ec_1
                var_ec_1:8.q = result_17.q
                var_18c.o = data_142e11d00
                result_3 = (&result_3)[r12_1]
                result_36[0] = result_36[0] * result_36[0]
                var_168:8.d = r8
                var_fc_1:0xc.q = result_34.q
                result_17.d = result_42.d f* result_42[0]
                var_fc_1:8.d = rdx_7
                result_22[0] = result_22[0] * result_22[0]
                var_ec_1:4.d = rcx_9
                result_36[0] = result_36[0] f+ result_17.d
                result_14 = result_18.q
                result_18 = result_29
                int32_t var_dc_1 = rax_20
                result_36[0] = result_36[0] + result_22[0]
                rdi.b = result_18[0] > result_36[0]
                result = zx.d(arg9)
                bool cond:3_1 = result_36[0] >= result_21[0]
                result_23 = result_36[0]
                result_21 = result_36
                rbx.b = cond:3_1
                
                if (result.b == 0)
                    goto label_141674be1
                
                if (rdi.b == 0)
                    goto label_141674be6
                
                if (not(zmm13[0] f!= result_11.d))
                    result_34 = 0x3eb0c6f7a0b5ed8d
                    result_17 = _mm_cvtps_pd(result_36[0].q)
                    
                    if (not(result_17.q f<= result_34[0].q))
                        result_17 = _mm_cvtps_pd(result_18[0].q)
                        
                        if (not(result_17.q f<= result_34[0].q) && i_6 s< 4)
                            r8.b = 1
                            rdi.b = 0
                            var_358 = 1
                            goto label_141674bec
            
        label_141674be1:
            
            if (rdi.b != 0)
                rdx = var_328
                arg4 = var_268
            else
            label_141674be6:
                r8 = zx.d(var_358)
            label_141674bec:
                rdx = var_328
                arg4 = var_268
                
                if (rbx.b == 0)
                    i_8 = i_6
                    r11 = arg2
                    continue
        
        result_34 = 0x7f7fffff
        r15 = arg3
        break

bool cond:0_1 = zmm13[0] f<= result_11.d
int32_t* rdi_2 = arg6
*rdi_2 = zmm13[0]

if (not(cond:0_1))
    result_9 = result_11
    result_18 = result_11
    *arg8 = var_2f8
    (*arg8)[2] = var_2f0
    uint64_t i_3 = zx.q(i_6)
    
    if (i_3.d s> 0)
        uint128_t* rdx_9 = &var_178
        float* rcx_11 = &result_3
        uint64_t i
        
        do
            result_8 = *rdx_9
            rdx_9 += 4
            result_17.d = result_8.d f* rcx_11[-2]
            result_8[0] = result_8[0] * rcx_11[-1]
            result_8[0] = result_8[0] * *rcx_11
            rcx_11 = &rcx_11[3]
            result_11.d = result_11.d f+ result_17.d
            result_9[0] = result_9[0] + result_8[0]
            result_18[0] = result_18[0] + result_8[0]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    result_17.d = result_20.d f* *arg8
    zmm13[0] = zmm13[0] * *arg4
    result_11.d = result_11.d f- result_17.d
    result_17.d = result_20.d f* (*arg8)[1]
    zmm13[0] = zmm13[0] f+ var_338.d
    result_20[0] = result_20[0] * (*arg8)[2]
    result_9[0] = result_9[0] f- result_17.d
    result_11.d = result_11.d f+ zmm13[0]
    zmm13[0] = zmm13[0] * (*arg4)[1]
    result_18[0] = result_18[0] - result_20[0]
    zmm13[0] = zmm13[0] * (*arg4)[2]
    zmm13[0] = zmm13[0] f+ var_338:4.d
    zmm13[0] = zmm13[0] f+ var_338:8.d
    result_9[0] = result_9[0] + zmm13[0]
    result_18[0] = result_18[0] + zmm13[0]
    *arg7 = (_mm_unpacklo_ps(result_11, result_9[0].q)).q
    arg7[1].d = result_18[0]
else if (result.b != 0)
    if (not(result_20[0] f<= result_11.d))
        result_17 = _mm_cvtps_pd(result_21[0].q)
    
    if (result_20[0] f<= result_11.d || result_17.q f<= 9.9999999999999995e-07
            || result_21[0] >= result_34[0])
        var_178.q = 0
        var_178:8.q = 0
        var_338.q = 0
        var_338:8.q = 0
        sub_14083ad30(&var_178, 8)
        
        if (var_338:0xc.d s< 8)
            sub_14083ad30(&var_338, 8)
        
        float result_16
        uint128_t result_41
        
        if (var_328 == 0)
            int32_t var_318_5 = 0x3f800000
            result_16 = 1f
            result_41 = _mm_unpacklo_ps(result_11, result_11.q)
        label_1416751da:
            result_8 = result_32:4.d
            result_34 = result_32.d
            *rdi_2 = (result_20 ^ data_142d3f780)[0]
            *arg8 = result_41.q
            result_41 = result_40
            (*arg8)[2] = result_16
            result = result_41.d
            *arg7 = (_mm_unpacklo_ps(result_34, result_8[0].q)).q
        else
            if (i_6 s> 0)
                uint64_t i_5 = zx.q(i_6)
                uint64_t i_1
                
                do
                    int64_t rdi_3 = sx.q(var_178:8.d)
                    int32_t rax_29 = (rdi_3 + 1).d
                    var_178:8.d = rax_29
                    
                    if (rax_29 s> var_178:0xc.d)
                        sub_14083a7e0(&var_178)
                    
                    int64_t rcx_16 = var_178.q
                    int64_t rdx_11 = rdi_3 * 3
                    result_41 = zx.o(*(&result_32 + r13))
                    int32_t rax_30 = *(&result_40 + r13)
                    result_10[0] = result_10[0] f+ *(&result_14:4 + r13)
                    *(rcx_16 + (rdx_11 << 2)) = result_41.q
                    result_41.d = result_35.d f+ *(&result_14 + r13)
                    *(rcx_16 + (rdx_11 << 2) + 8) = rax_30
                    int64_t rdi_4 = sx.q(var_338:8.d)
                    result_24:4.d = result_10[0]
                    result_24.d = result_41.d
                    result_41.d = result_5.d f+ *(&result_3 + r13)
                    int32_t rax_31 = (rdi_4 + 1).d
                    var_338:8.d = rax_31
                    result_7 = result_41.d
                    
                    if (rax_31 s> var_338:0xc.d)
                        sub_14083a7e0(&var_338)
                    
                    int64_t rcx_18 = var_338.q
                    int64_t rdx_13 = rdi_4 * 3
                    r13 += 0xc
                    *(rcx_18 + (rdx_13 << 2)) = result_24
                    *(rcx_18 + (rdx_13 << 2) + 8) = result_7
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                rdi_2 = arg6
            
            int128_t* var_180_1 = r15
            i_7.q = &var_1c8
            void* var_188_1 = arg2
            int32_t rax_34
            rax_34, result_20 = sub_14156bec0(&var_178, &var_338, &var_2c8, &i_7, &var_324, 
                &result_24, &result_38, &var_238)
            result_41 = zx.o(result_24)
            result_16 = result_7
            
            if (rax_34 == 2)
                goto label_1416751da
            
            *arg8 = result_41.q
            result_41 = var_324 ^ data_142d3f780
            (*arg8)[2] = result_16
            result_41.d = result_41.d f- result_20[0]
            result = result_1
            *rdi_2 = result_41.d
            *arg7 = result_38
        int64_t rcx_20 = var_338.q
        arg7[1].d = result
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        int64_t rcx_21 = var_178.q
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    else
        result_18 = result_11
        result_9 = result_11
        *arg8 = var_2f8
        result_19 = result_11
        (*arg8)[2] = var_2f0
        result_20 = result_11
        result_21 = result_11
        result_5 = result_11
        
        if (rdx == 0)
            result_34 = zx.o(result_32)
            result_8 = zx.o(result_14)
            result_17 = result_34
            int32_t result_33 = result_40
            result_9 = _mm_shuffle_ps(result_17, result_17, 0x55)
            float result_4 = result_3
            result_17 = result_8
            result_19 = result_33
            result_21 = _mm_shuffle_ps(result_17, result_17, 0x55)
            result_5 = result_4
            result_18 = result_34.d
            result_20 = result_8.d
        else if (i_6 s> 0)
            uint128_t* rcx_12 = &var_178
            uint64_t i_4 = zx.q(i_6)
            uint64_t i_2
            
            do
                result_8 = *rcx_12
                rcx_12 += 4
                result_17.d = result_8.d f* *(&result_32 + r13)
                result_8[0] = result_8[0] f* *(&result_32:4 + r13)
                result_18[0] = result_18[0] f+ result_17.d
                result_17.d = result_8.d f* *(&result_40 + r13)
                result_9[0] = result_9[0] + result_8[0]
                result_8[0] = result_8[0] f* *(&result_14 + r13)
                result_19[0] = result_19[0] f+ result_17.d
                result_17.d = result_8.d f* *(&result_14:4 + r13)
                result_8[0] = result_8[0] f* *(&result_3 + r13)
                result_20[0] = result_20[0] + result_8[0]
                r13 += 0xc
                result_21[0] = result_21[0] f+ result_17.d
                result_5.d = result_5.d f+ result_8[0]
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        zmm13 = var_338.d
        result_36 = var_338:4.d
        result_20[0] = result_20[0] + zmm13[0]
        result_22 = var_338:8.d
        result_21[0] = result_21[0] + result_36[0]
        result_35.d = result_5.d f+ result_22[0]
        result_20[0] = result_20[0] - result_18[0]
        result_18 = zx.o(0)
        result_21[0] = result_21[0] - result_9[0]
        result_35.d = result_35.d f- result_19[0]
        result_19 = 0x3f000000
        result_17.d = result_20.d f* result_20[0]
        result_34 = result_35
        result_34[0] = result_34[0] f* result_35.d
        result_21[0] = result_21[0] * result_21[0]
        result_21[0] = result_21[0] f+ result_17.d
        result_21[0] = result_21[0] + result_34[0]
        result_18[0] = result_21[0]
        result_8 = 0x3f000000
        float temp0_25[0x4] = _mm_rsqrt_ss(result_18[0], result_18[0])
        result_18[0] = result_18[0] * 0.5f
        result_17.d = temp0_25.d f* temp0_25[0]
        result_18[0] = result_18[0] f* result_17.d
        result_8[0] = 0.5f - result_18[0]
        result_17.d = temp0_25.d f* result_8[0]
        temp0_25[0] = temp0_25[0] f+ result_17.d
        temp0_25[0] = temp0_25[0] * temp0_25[0]
        result_18[0] = result_18[0] * temp0_25[0]
        result_19[0] = 0.5f - result_18[0]
        result_17.d = temp0_25.d f* result_19[0]
        temp0_25[0] = temp0_25[0] f+ result_17.d
        temp0_25[0] = temp0_25[0] * result_21[0]
        result_17.d = temp0_25.d f* result_20[0]
        temp0_25[0] = temp0_25[0] f* result_35.d
        result_17 = _mm_unpacklo_ps(result_17, temp0_25[0].q)
        *arg8 = result_17.q
        result_17 = __sqrtss_xmmss_memss(result_17.d, result_23)
        float var_318_3 = temp0_25[0]
        result_9 = result_13
        result_9[0] = result_9[0] f- result_17.d
        (*arg8)[2] = var_318_3
        
        if (not(result_9[0] f< result_11.d))
            result_11 = __minss_xmmss_memss(result_9.d, 0x7f7fffff)
        
        result_34 = *arg8
        result_8 = (*arg8)[1]
        result_18 = (*arg8)[2]
        result_17.d = result_34.d f* result_9[0]
        result_34[0] = result_34[0] f* result_11.d
        result_20[0] = result_20[0] f- result_17.d
        result_17.d = result_8.d f* result_9[0]
        result_8[0] = result_8[0] f* result_11.d
        result_21[0] = result_21[0] f- result_17.d
        result_17.d = result_18.d f* result_9[0]
        result_20[0] = result_20[0] + zmm13[0]
        result_18[0] = result_18[0] f* result_11.d
        result_11 ^= data_142d3f780
        result_5.d = result_5.d f- result_17.d
        result_21[0] = result_21[0] + result_36[0]
        result_20[0] = result_20[0] + result_34[0]
        result_5.d = result_5.d f+ result_22[0]
        result_21[0] = result_21[0] + result_8[0]
        result_5.d = result_5.d f+ result_18[0]
        *arg7 = (_mm_unpacklo_ps(result_20, result_21[0].q)).q
        arg7[1].d = result_5.d
        *rdi_2 = result_11.d

result.b = 1
label_141675246:
__security_check_cookie(rax_1 ^ &var_398)
return result
