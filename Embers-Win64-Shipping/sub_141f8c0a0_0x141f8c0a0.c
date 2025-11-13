// 函数: sub_141f8c0a0
// 地址: 0x141f8c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
arg1[7].d = 0

if (*(arg1 + 0x74) != 6)
    sub_14149c8a0(arg1, 6)

float zmm2[0x4]
float zmm4[0x4]

if (arg5 != 0)
    zmm7 = *(arg2 + 0x18)
    zmm8 = *(arg2 + 8)
    zmm6 = *(arg2 + 0x28)
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm8[0] = zmm8[0] + zmm6[0]
    
    if (not(zmm8[0] <= 9.99999944e-11f))
        int64_t rsi_1 = sx.q(arg1[7].d)
        zmm4 = 0x3f000000
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm2 = 0x3f000000
        int32_t rax_1 = (rsi_1 + 1).d
        zmm8[0] = zmm8[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm8[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm4[0] = 0.5f - zmm8[0]
        temp0_1[0] = temp0_1[0] * zmm4[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] f* *(arg2 + 0x38)
        arg1[7].d = rax_1
        temp0_1[0] = temp0_1[0] * zmm8[0]
        temp0_1[0] = temp0_1[0] * zmm7[0]
        temp0_1[0] = temp0_1[0] * zmm6[0]
        float var_b8_1 = (temp0_1 ^ 0x80000000)[0]
        float var_b4_1 = (temp0_1 ^ 0x80000000)[0]
        float var_ac_1 = temp0_1[0]
        float var_b0_1 = (temp0_1 ^ 0x80000000)[0]
        
        if (rax_1 s> *(arg1 + 0x74))
            sub_14149c260(arg1, rsi_1.d)
        
        int128_t* rax_2 = arg1[6].q
        int128_t* rcx_1 = arg1
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        rcx_1[rsi_1] = var_b8_1.o

float zmm5[0x4] = arg2[1].d
float zmm13[0x4] = *arg2
float zmm3[0x4] = *(arg2 + 0x1c)
zmm7 = *(arg2 + 0xc)
zmm5[0] = zmm5[0] + zmm3[0]
zmm4 = arg2[2].d
zmm13[0] = zmm13[0] + zmm7[0]
zmm6 = *(arg2 + 0x2c)
zmm8 = zmm4
zmm8[0] = zmm8[0] + zmm6[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm13[0] = zmm13[0] * zmm13[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm13[0] = zmm13[0] + zmm5[0]
zmm13[0] = zmm13[0] + zmm8[0]
float zmm0[0x4]

if (not(zmm13[0] <= 9.99999944e-11f))
    int64_t rsi_2 = sx.q(arg1[7].d)
    zmm4 = 0x3f000000
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0])
    zmm2 = 0x3f000000
    int32_t rax_5 = (rsi_2 + 1).d
    zmm13[0] = zmm13[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm13[0] = zmm13[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm13[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm13[0] = zmm13[0] * temp0_2[0]
    zmm4[0] = 0.5f - zmm13[0]
    temp0_2[0] = temp0_2[0] * zmm4[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm0 = *(arg2 + 0x3c)
    zmm0[0] = zmm0[0] f+ arg2[3].d
    arg1[7].d = rax_5
    temp0_2[0] = temp0_2[0] * zmm13[0]
    temp0_2[0] = temp0_2[0] * zmm5[0]
    temp0_2[0] = temp0_2[0] * zmm8[0]
    zmm0[0] = zmm0[0] * temp0_2[0]
    float var_b8_2 = (temp0_2 ^ 0x80000000)[0]
    float var_b4_2 = (temp0_2 ^ 0x80000000)[0]
    float var_b0_2 = (temp0_2 ^ 0x80000000)[0]
    float var_ac_2 = zmm0[0]
    
    if (rax_5 s> *(arg1 + 0x74))
        sub_14149c260(arg1, rsi_2.d)
    
    int128_t* rax_6 = arg1[6].q
    int128_t* rcx_3 = arg1
    
    if (rax_6 != 0)
        rcx_3 = rax_6
    
    rcx_3[rsi_2] = var_b8_2.o
    zmm6 = *(arg2 + 0x2c)
    zmm4 = arg2[2].d
    zmm3 = *(arg2 + 0x1c)
    zmm5 = arg2[1].d
    zmm7 = *(arg2 + 0xc)
    zmm13 = *arg2

zmm3[0] = zmm3[0] - zmm5[0]
zmm7[0] = zmm7[0] - zmm13[0]
zmm6[0] = zmm6[0] - zmm4[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm3[0]
zmm7[0] = zmm7[0] + zmm6[0]

if (not(zmm7[0] <= 9.99999944e-11f))
    int64_t rsi_3 = sx.q(arg1[7].d)
    zmm4 = 0x3f000000
    float temp0_3[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm2 = 0x3f000000
    int32_t rax_9 = (rsi_3 + 1).d
    zmm7[0] = zmm7[0] * 0.5f
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm7[0] = zmm7[0] * temp0_3[0]
    zmm2[0] = 0.5f - zmm7[0]
    temp0_3[0] = temp0_3[0] * zmm2[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm7[0] = zmm7[0] * temp0_3[0]
    zmm4[0] = 0.5f - zmm7[0]
    temp0_3[0] = temp0_3[0] * zmm4[0]
    temp0_3[0] = temp0_3[0] + temp0_3[0]
    zmm0 = *(arg2 + 0x3c)
    zmm0[0] = zmm0[0] f- arg2[3].d
    arg1[7].d = rax_9
    temp0_3[0] = temp0_3[0] * zmm7[0]
    temp0_3[0] = temp0_3[0] * zmm3[0]
    temp0_3[0] = temp0_3[0] * zmm6[0]
    zmm0[0] = zmm0[0] * temp0_3[0]
    float var_b8_3 = (temp0_3 ^ 0x80000000)[0]
    float var_b4_3 = (temp0_3 ^ 0x80000000)[0]
    float var_b0_3 = (temp0_3 ^ 0x80000000)[0]
    float var_ac_3 = zmm0[0]
    
    if (rax_9 s> *(arg1 + 0x74))
        sub_14149c260(arg1, rsi_3.d)
    
    int128_t* rax_10 = arg1[6].q
    int128_t* rcx_5 = arg1
    
    if (rax_10 != 0)
        rcx_5 = rax_10
    
    rcx_5[rsi_3] = var_b8_3.o
    zmm6 = *(arg2 + 0x2c)
    zmm3 = *(arg2 + 0x1c)
    zmm7 = *(arg2 + 0xc)

zmm8 = *(arg2 + 0x14)
zmm5 = *(arg2 + 4)
zmm3[0] = zmm3[0] - zmm8[0]
zmm4 = *(arg2 + 0x24)
zmm7[0] = zmm7[0] - zmm5[0]
zmm6[0] = zmm6[0] - zmm4[0]
zmm3[0] = zmm3[0] * zmm3[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm3[0]
zmm7[0] = zmm7[0] + zmm6[0]

if (not(zmm7[0] <= 9.99999944e-11f))
    int64_t rsi_4 = sx.q(arg1[7].d)
    zmm4 = 0x3f000000
    float temp0_4[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm2 = 0x3f000000
    int32_t rax_13 = (rsi_4 + 1).d
    zmm7[0] = zmm7[0] * 0.5f
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    zmm7[0] = zmm7[0] * temp0_4[0]
    zmm2[0] = 0.5f - zmm7[0]
    temp0_4[0] = temp0_4[0] * zmm2[0]
    temp0_4[0] = temp0_4[0] + temp0_4[0]
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    zmm7[0] = zmm7[0] * temp0_4[0]
    zmm4[0] = 0.5f - zmm7[0]
    temp0_4[0] = temp0_4[0] * zmm4[0]
    temp0_4[0] = temp0_4[0] + temp0_4[0]
    zmm0 = *(arg2 + 0x3c)
    zmm0[0] = zmm0[0] f- *(arg2 + 0x34)
    arg1[7].d = rax_13
    temp0_4[0] = temp0_4[0] * zmm7[0]
    temp0_4[0] = temp0_4[0] * zmm3[0]
    temp0_4[0] = temp0_4[0] * zmm6[0]
    zmm0[0] = zmm0[0] * temp0_4[0]
    float var_b8_4 = (temp0_4 ^ 0x80000000)[0]
    float var_b4_4 = (temp0_4 ^ 0x80000000)[0]
    float var_b0_4 = (temp0_4 ^ 0x80000000)[0]
    float var_ac_4 = zmm0[0]
    
    if (rax_13 s> *(arg1 + 0x74))
        sub_14149c260(arg1, rsi_4.d)
    
    int128_t* rax_14 = arg1[6].q
    int128_t* rcx_7 = arg1
    
    if (rax_14 != 0)
        rcx_7 = rax_14
    
    rcx_7[rsi_4] = var_b8_4.o
    zmm6 = *(arg2 + 0x2c)
    zmm4 = *(arg2 + 0x24)
    zmm3 = *(arg2 + 0x1c)
    zmm8 = *(arg2 + 0x14)
    zmm7 = *(arg2 + 0xc)
    zmm5 = *(arg2 + 4)

zmm8[0] = zmm8[0] + zmm3[0]
zmm7[0] = zmm7[0] + zmm5[0]
zmm6[0] = zmm6[0] + zmm4[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]

if (not(zmm7[0] <= 9.99999944e-11f))
    int64_t rsi_5 = sx.q(arg1[7].d)
    zmm4 = 0x3f000000
    float temp0_5[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm2 = 0x3f000000
    int32_t rax_17 = (rsi_5 + 1).d
    zmm7[0] = zmm7[0] * 0.5f
    temp0_5[0] = temp0_5[0] * temp0_5[0]
    zmm7[0] = zmm7[0] * temp0_5[0]
    zmm2[0] = 0.5f - zmm7[0]
    temp0_5[0] = temp0_5[0] * zmm2[0]
    temp0_5[0] = temp0_5[0] + temp0_5[0]
    temp0_5[0] = temp0_5[0] * temp0_5[0]
    zmm7[0] = zmm7[0] * temp0_5[0]
    zmm4[0] = 0.5f - zmm7[0]
    temp0_5[0] = temp0_5[0] * zmm4[0]
    temp0_5[0] = temp0_5[0] + temp0_5[0]
    zmm0 = *(arg2 + 0x3c)
    zmm0[0] = zmm0[0] f+ *(arg2 + 0x34)
    arg1[7].d = rax_17
    temp0_5[0] = temp0_5[0] * zmm7[0]
    temp0_5[0] = temp0_5[0] * zmm8[0]
    temp0_5[0] = temp0_5[0] * zmm6[0]
    zmm0[0] = zmm0[0] * temp0_5[0]
    float var_b8_5 = (temp0_5 ^ 0x80000000)[0]
    float var_b4_5 = (temp0_5 ^ 0x80000000)[0]
    float var_b0_5 = (temp0_5 ^ 0x80000000)[0]
    float var_ac_5 = zmm0[0]
    
    if (rax_17 s> *(arg1 + 0x74))
        sub_14149c260(arg1, rsi_5.d)
    
    int128_t* rax_18 = arg1[6].q
    int128_t* rcx_9 = arg1
    
    if (rax_18 != 0)
        rcx_9 = rax_18
    
    rcx_9[rsi_5] = var_b8_5.o

if (arg4 == 0)
    zmm7 = *(arg2 + 0x1c)
    zmm8 = *(arg2 + 0xc)
    zmm7[0] = zmm7[0] f- *(arg2 + 0x18)
    zmm8[0] = zmm8[0] f- *(arg2 + 8)
    zmm6 = *(arg2 + 0x2c)
    zmm6[0] = zmm6[0] f- *(arg2 + 0x28)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] + zmm7[0]
    zmm8[0] = zmm8[0] + zmm6[0]
    
    if (not(zmm8[0] <= 9.99999944e-11f))
        zmm4 = 0x3f000000
        float temp0_6[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm2 = 0x3f000000
        zmm8[0] = zmm8[0] * 0.5f
        temp0_6[0] = temp0_6[0] * temp0_6[0]
        zmm8[0] = zmm8[0] * temp0_6[0]
        zmm2[0] = 0.5f - zmm8[0]
        temp0_6[0] = temp0_6[0] * zmm2[0]
        temp0_6[0] = temp0_6[0] + temp0_6[0]
        temp0_6[0] = temp0_6[0] * temp0_6[0]
        zmm8[0] = zmm8[0] * temp0_6[0]
        zmm4[0] = 0.5f - zmm8[0]
        temp0_6[0] = temp0_6[0] * zmm4[0]
        temp0_6[0] = temp0_6[0] + temp0_6[0]
        zmm0 = *(arg2 + 0x3c)
        zmm0[0] = zmm0[0] f- *(arg2 + 0x38)
        int64_t rdi_2 = sx.q(arg1[7].d)
        int32_t rax_25 = (rdi_2 + 1).d
        temp0_6[0] = temp0_6[0] * zmm8[0]
        arg1[7].d = rax_25
        temp0_6[0] = temp0_6[0] * zmm7[0]
        temp0_6[0] = temp0_6[0] * zmm6[0]
        zmm0[0] = zmm0[0] * temp0_6[0]
        float var_b8_6 = (temp0_6 ^ 0x80000000)[0]
        float var_b4_6 = (temp0_6 ^ 0x80000000)[0]
        float var_b0_6 = (temp0_6 ^ 0x80000000)[0]
        float var_ac_6 = zmm0[0]
        
        if (rax_25 s> *(arg1 + 0x74))
            sub_14149c260(arg1, rdi_2.d)
        
        int128_t* rax_26 = arg1[6].q
        int128_t* rcx_13 = arg1
        
        if (rax_26 != 0)
            rcx_13 = rax_26
        
        rcx_13[rdi_2] = var_b8_6.o
else
    int64_t rdi_1 = sx.q(arg1[7].d)
    int32_t rax_21 = (rdi_1 + 1).d
    arg1[7].d = rax_21
    
    if (rax_21 s> *(arg1 + 0x74))
        sub_14149c260(arg1, rdi_1.d)
    
    int128_t* rax_22 = arg1[6].q
    int128_t* rcx_11 = arg1
    
    if (rax_22 != 0)
        rcx_11 = rax_22
    
    rcx_11[rdi_1] = *arg3

return sub_141f8cbb0(arg1) __tailcall
