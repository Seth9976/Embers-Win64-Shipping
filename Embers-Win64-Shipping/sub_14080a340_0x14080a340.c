// 函数: sub_14080a340
// 地址: 0x14080a340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_4 = 0
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
uint8_t rax_2 = (r8 u>> 0xf).b
int32_t i = r8 & 0x7fff
float (* r8_3)[0x4]

if ((not.b(rax_2) & 1) == 0)
    r8_3 = zx.q(*(arg2 + 0x80) * i) + *(arg2 + 0x70)
else
    int32_t* r8_1 = *(arg2 + 0x20)
    int32_t r9_1 = 0
    
    if (i s>= *r8_1)
        int64_t rax_3 = 0
        int32_t* rcx = nullptr
        
        do
            i -= *(rcx + r8_1)
            rax_3 += 1
            rcx = rax_3 << 2
            r9_1 += 1
        while (i s>= *(rcx + r8_1))
    
    r8_3 = sx.q(i) + *(*(arg2 + 0x18) + (sx.q(r9_1) << 3))

uint32_t rax_5 = zx.d(rax[1])
uint8_t r12_1 = (rax_5 u>> 0xf).b
*(arg2 + 0x10) = &rax[2]
int32_t i_1 = rax_5 & 0x7fff
int128_t* r8_8

if ((not.b(r12_1) & 1) == 0)
    r8_8 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t* r8_6 = *(arg2 + 0x20)
    int32_t r9_2 = 0
    
    if (i_1 s>= *r8_6)
        int64_t rax_7 = 0
        int32_t* rcx_2 = nullptr
        
        do
            i_1 -= *(rcx_2 + r8_6)
            rax_7 += 1
            rcx_2 = rax_7 << 2
            r9_2 += 1
        while (i_1 s>= *(rcx_2 + r8_6))
    
    r8_8 = sx.q(i_1) + *(*(arg2 + 0x18) + (sx.q(r9_2) << 3))

uint32_t rax_9 = zx.d(rax[2])
uint8_t r15_1 = (rax_9 u>> 0xf).b
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rax_9 & 0x7fff
int128_t* r13_1

if ((not.b(r15_1) & 1) == 0)
    r13_1 = zx.q(*(arg2 + 0x80) * i_2) + *(arg2 + 0x70)
else
    int32_t* r8_11 = *(arg2 + 0x20)
    int32_t r9_3 = 0
    
    if (i_2 s>= *r8_11)
        int64_t rax_11 = 0
        int32_t* rcx_4 = nullptr
        
        do
            i_2 -= *(rcx_4 + r8_11)
            rax_11 += 1
            rcx_4 = rax_11 << 2
            r9_3 += 1
        while (i_2 s>= *(rcx_4 + r8_11))
    
    r13_1 = sx.q(i_2) + *(*(arg2 + 0x18) + (sx.q(r9_3) << 3))

int32_t rcx_7 = zx.d(rax[3]) & 0x7fff
*(arg2 + 0x10) = &rax[4]
int32_t var_170 = rcx_7
int32_t rax_13
rax_13.b = rcx_7 != 0x7fff
float* rdx_5
void var_168

if (rcx_7 == 0x7fff)
    rdx_5 = &var_168
else
    rdx_5 = zx.q(*(arg2 + 0x80) * rcx_7) + *(arg2 + 0x70)
float* var_160 = rdx_5
int32_t rcx_9 = zx.d(rax[4]) & 0x7fff
*(arg2 + 0x10) = &rax[5]
int32_t var_158 = rcx_9
int32_t rax_14
rax_14.b = rcx_9 != 0x7fff
float* var_148
void var_150

if (rcx_9 == 0x7fff)
    var_148 = &var_150
else
    var_148 = zx.q(rcx_9 * *(arg2 + 0x80)) + *(arg2 + 0x70)
uint32_t rcx_12 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]
int32_t r8_15 = rcx_12 & 0x7fff
int32_t var_140 = r8_15
int64_t result
result.b = r8_15 != 0x7fff
int32_t var_13c = result.d
int64_t result_1

if (r8_15 == 0x7fff)
    void var_138
    result = &var_138
    result_1 = &var_138
else
    result_1 = zx.q(*(arg2 + 0x80) * r8_15) + *(arg2 + 0x70)

void* const rsi = *(arg1 + 0x30)

if (rsi == 0)
    rsi = nullptr
else
    void* rax_16 = sub_1425b89f0()
    void* rdx_6 = *(rsi + 0x10)
    result = sx.q(*(rax_16 + 0x38))
    
    if (result.d s> *(rdx_6 + 0x38))
        rdx_5 = var_160
        rsi = nullptr
    else
        int64_t result_2 = result
        result = *(rdx_6 + 0x30)
        
        if (*(result + (result_2 << 3)) != rax_16 + 0x30)
            rdx_5 = var_160
            rsi = nullptr
        else
            rdx_5 = var_160

if (*(arg1 + 0x30) != 0)
    result = sub_1425ba2e0()
    rdx_5 = var_160

float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm11[0x4]
float var_a8[0x4] = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm13[0x4]
float var_c8[0x4] = zmm13
float zmm14[0x4]
float var_d8[0x4] = zmm14
float zmm15[0x4]
float var_e8[0x4] = zmm15

if (rsi == 0 || *(rsi + 0x54) == 0)
label_14080af42:
    int32_t i_3 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            *rdx_5 = 0f
            i_3 += 1
            *var_148 = 0f
            *result_1 = 0
            rdx_5 = &var_160[sx.q(rax_13)]
            var_160 = rdx_5
            result = result_1
            var_148 = &var_148[sx.q(rax_14)]
            result_1 = result + (sx.q(var_13c) << 2)
        while (i_3 s< *(arg2 + 0x40))
else
    zmm6 = zx.o(0)
    zmm7 = 0x3f800000
    int32_t arg_18
    
    if (*(arg1 + 0x3a) == 0)
        arg_18 = 0
    else
        arg_18 = 0x3f800000
    
    int32_t arg_10
    
    if (*(arg1 + 0x39) == 0)
        arg_10 = 0
    else
        arg_10 = 0x3f800000
    
    int32_t arg_8
    
    if (*(arg1 + 0x38) == 0)
        arg_8 = 0
    else
        arg_8 = 0x3f800000
    
    zmm11 = *(rsi + 0x30)
    zmm12 = zx.o(0)
    zmm13 = *(rsi + 0x2c)
    zmm14 = zx.o(0)
    zmm10 = *(rsi + 0x28)
    zmm15 = zx.o(0)
    uint64_t r9_4 = zx.q(*(rsi + 0x48))
    uint64_t rcx_16 = zx.q(*(rsi + 0x4c))
    uint64_t r8_17 = zx.q(*(rsi + 0x50))
    int64_t r14_1 = *(rsi + 0x80)
    float zmm2[0x4] = *(rsi + 0x3c)
    float zmm3[0x4] = *(rsi + 0x38)
    zmm2[0] = zmm2[0] - zmm11[0]
    float zmm4[0x4] = *(rsi + 0x34)
    zmm3[0] = zmm3[0] - zmm13[0]
    float var_f8_1 = zmm11[0]
    zmm4[0] = zmm4[0] - zmm10[0]
    float var_f4_1 = zmm13[0]
    float var_fc_1 = zmm10[0]
    zmm12[0] = float.s(r9_4)
    zmm14[0] = float.s(rcx_16)
    float var_114_1 = zmm12[0]
    zmm15[0] = float.s(r8_17)
    float var_110_1 = zmm14[0]
    float var_10c_1 = zmm15[0]
    
    if (r14_1 == 0)
        goto label_14080af42
    
    result = zx.q(rcx_16.d)
    
    if (r9_4.d u<= rcx_16.d)
        result = zx.q(r9_4.d)
    
    if (result.d u<= r8_17.d)
        r8_17 = zx.q(result.d)
    
    if (r8_17.d == 0)
        goto label_14080af42
    
    float temp0_1[0x4] = _mm_min_ss(zmm4[0], zmm3[0])
    
    if (_mm_min_ss(zmm2[0], temp0_1[0])[0] <= 9.99999994e-09f)
        goto label_14080af42
    
    float zmm5[0x4] = data_14399f670
    zmm8 = data_14399f66c
    zmm9 = data_14399f668
    zmm5[0] = zmm5[0] / zmm2[0]
    zmm8[0] = zmm8[0] / zmm3[0]
    zmm9[0] = zmm9[0] / zmm4[0]
    float var_108_1 = zmm5[0]
    float var_104_1 = zmm8[0]
    float var_100_1 = zmm9[0]
    
    if (*(arg2 + 0x40) s> 0)
        float zmm0[0x4] = 0x3f800000
        zmm4 = 0x3f000000
        int128_t* r8_18 = r8_8
        zmm14[0] = zmm14[0] - 1f
        zmm0[0] = 1f / zmm12[0]
        float (* r9_5)[0x4] = r8_3
        float var_128_1 = zmm0[0]
        zmm0 = 0x3f800000
        zmm0[0] = 1f / zmm14[0]
        float var_18c_1 = zmm14[0]
        float arg_20 = zmm0[0]
        zmm0 = 0x3f800000
        zmm0[0] = 1f / zmm15[0]
        float var_194_1 = zmm0[0]
        zmm12[0] = zmm12[0] - 1f
        float var_188_1 = zmm12[0]
        zmm15[0] = zmm15[0] - 1f
        float var_190_1 = zmm15[0]
        zmm0 = zx.o(0)
        zmm0[0] = float.s(zx.q(rcx_16.d * r9_4.d))
        float var_124_1 = zmm0[0]
        
        do
            float zmm1[0x4] = *r9_5
            zmm2 = *r8_18
            zmm1[0] = zmm1[0] - zmm10[0]
            zmm3 = *r13_1
            zmm2[0] = zmm2[0] - zmm13[0]
            zmm13 = zmm12
            zmm3[0] = zmm3[0] - zmm11[0]
            zmm9[0] = zmm9[0] * zmm1[0]
            zmm2[0] = zmm2[0] * zmm8[0]
            zmm13[0] = zmm13[0] * zmm9[0]
            zmm14[0] = zmm14[0] * zmm2[0]
            zmm13[0] = zmm13[0] - zmm4[0]
            zmm3[0] = zmm3[0] * zmm5[0]
            zmm14[0] = zmm14[0] - zmm4[0]
            zmm15[0] = zmm15[0] * zmm3[0]
            zmm8 = zmm13
            int32_t rcx_18 = int.d(zmm8[0])
            zmm15[0] = zmm15[0] - zmm4[0]
            
            if (rcx_18 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_18))[0] == zmm8[0]))
                zmm8 = _mm_cvtepi32_ps(zx.o(rcx_18
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm8, zmm8[0].q)) & 1)))
            
            zmm4 = zmm14
            int32_t rcx_20 = int.d(zmm4[0])
            
            if (rcx_20 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_20))[0] == zmm4[0]))
                zmm4 = _mm_cvtepi32_ps(zx.o(rcx_20
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))
            
            zmm5 = zmm15
            int32_t rcx_22 = int.d(zmm5[0])
            
            if (rcx_22 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_22))[0] == zmm5[0]))
                zmm5 = _mm_cvtepi32_ps(zx.o(rcx_22
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))
            
            zmm3 = var_194_1
            zmm14[0] = zmm14[0] - zmm4[0]
            zmm15[0] = zmm15[0] - zmm5[0]
            zmm3[0] = zmm3[0] * zmm5[0]
            zmm10 = zmm8
            zmm13[0] = zmm13[0] - zmm8[0]
            zmm9 = zmm4
            zmm10[0] = zmm10[0] + zmm7[0]
            float (* var_180)[0x4]
            var_180.d = zmm14[0]
            zmm9[0] = zmm9[0] + zmm7[0]
            int128_t* var_178
            var_178.d = zmm15[0]
            zmm11 = zmm5
            zmm2 = arg_20
            zmm11[0] = zmm11[0] + zmm7[0]
            zmm7 = var_128_1
            zmm1 = zmm7
            float var_198_1 = zmm13[0]
            zmm1[0] = zmm1[0] * zmm8[0]
            zmm2[0] = zmm2[0] * zmm4[0]
            int32_t rcx_24 = int.d(zmm1[0])
            
            if (rcx_24 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_24))[0] == zmm1[0]))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_24
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
            
            int32_t rcx_26 = int.d(zmm2[0])
            
            if (rcx_26 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_26))[0] == zmm2[0]))
                zmm2 = _mm_cvtepi32_ps(zx.o(rcx_26
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
            
            int32_t rcx_28 = int.d(zmm3[0])
            
            if (rcx_28 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_28))[0] == zmm3[0]))
                zmm3 = _mm_cvtepi32_ps(zx.o(rcx_28
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))
            
            zmm1[0] = zmm1[0] f* arg_8
            zmm2[0] = zmm2[0] f* arg_10
            zmm3[0] = zmm3[0] f* arg_18
            zmm12[0] = zmm12[0] * zmm1[0]
            zmm14[0] = zmm14[0] * zmm2[0]
            zmm15[0] = zmm15[0] * zmm3[0]
            zmm8[0] = zmm8[0] - zmm12[0]
            zmm3 = var_194_1
            zmm4[0] = zmm4[0] - zmm14[0]
            zmm1 = zmm7
            zmm3[0] = zmm3[0] * zmm11[0]
            zmm5[0] = zmm5[0] - zmm15[0]
            zmm1[0] = zmm1[0] * zmm10[0]
            zmm2 = arg_20
            zmm2[0] = zmm2[0] * zmm9[0]
            int32_t rcx_30 = int.d(zmm1[0])
            
            if (rcx_30 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_30))[0] == zmm1[0]))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_30
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
            
            int32_t rcx_32 = int.d(zmm2[0])
            
            if (rcx_32 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_32))[0] == zmm2[0]))
                zmm2 = _mm_cvtepi32_ps(zx.o(rcx_32
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
            
            int32_t rcx_34 = int.d(zmm3[0])
            
            if (rcx_34 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_34))[0] == zmm3[0]))
                zmm3 = _mm_cvtepi32_ps(zx.o(rcx_34
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))
            
            bool cond:6_1 = zmm5[0] >= zmm6[0]
            zmm2[0] = zmm2[0] f* arg_10
            zmm1[0] = zmm1[0] f* arg_8
            zmm3[0] = zmm3[0] f* arg_18
            zmm12[0] = zmm12[0] * zmm1[0]
            zmm14[0] = zmm14[0] * zmm2[0]
            zmm15[0] = zmm15[0] * zmm3[0]
            zmm10[0] = zmm10[0] - zmm12[0]
            zmm9[0] = zmm9[0] - zmm14[0]
            zmm11[0] = zmm11[0] - zmm15[0]
            zmm2 = var_190_1
            
            if (cond:6_1)
                zmm5 = _mm_min_ss(zmm5[0], zmm2[0])
            else
                zmm5 = zx.o(0)
            
            zmm1 = var_18c_1
            
            if (zmm4[0] >= zmm6[0])
                zmm4 = _mm_min_ss(zmm4[0], zmm1[0])
            else
                zmm4 = zx.o(0)
            
            zmm0 = var_188_1
            
            if (zmm8[0] >= zmm6[0])
                zmm8 = _mm_min_ss(zmm8[0], zmm0[0])
            else
                zmm8 = zx.o(0)
            
            if (zmm11[0] >= zmm6[0])
                zmm11 = _mm_min_ss(zmm11[0], zmm2[0])
            else
                zmm11 = zx.o(0)
            
            if (zmm9[0] >= zmm6[0])
                zmm9 = _mm_min_ss(zmm9[0], zmm1[0])
            else
                zmm9 = zx.o(0)
            
            if (zmm10[0] >= zmm6[0])
                zmm10 = _mm_min_ss(zmm10[0], zmm0[0])
            else
                zmm10 = zx.o(0)
            
            zmm6 = var_124_1
            zmm4[0] = zmm4[0] * zmm12[0]
            zmm9[0] = zmm9[0] * zmm12[0]
            zmm6[0] = zmm6[0] * zmm5[0]
            zmm10[0] = zmm10[0] + zmm4[0]
            zmm8[0] = zmm8[0] + zmm9[0]
            zmm8[0] = zmm8[0] + zmm4[0]
            zmm10[0] = zmm10[0] + zmm9[0]
            zmm6[0] = zmm6[0] + zmm8[0]
            int32_t rax_36 = int.d(zmm6[0])
            zmm10[0] = zmm10[0] + zmm6[0]
            zmm7 = *(r14_1 + sx.q(rax_36) * 0x10)
            int32_t rax_37 = int.d(zmm10[0])
            zmm8[0] = zmm8[0] + zmm6[0]
            zmm5 = *(r14_1 + sx.q(rax_37) * 0x10)
            int32_t rax_38 = int.d(zmm8[0])
            zmm10[0] = zmm10[0] + zmm6[0]
            zmm1 = zmm6
            zmm1[0] = zmm1[0] * zmm11[0]
            zmm14 = *(r14_1 + sx.q(rax_38) * 0x10)
            int32_t rax_39 = int.d(zmm10[0])
            zmm1[0] = zmm1[0] + zmm8[0]
            float temp0_45[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
            zmm9 = *(r14_1 + sx.q(rax_39) * 0x10)
            int32_t rax_40 = int.d(zmm1[0])
            zmm1[0] = zmm1[0] + zmm10[0]
            zmm5[0] = zmm5[0] - zmm7[0]
            zmm6 = *(r14_1 + sx.q(rax_40) * 0x10)
            int32_t rax_41 = int.d(zmm1[0])
            zmm13[0] = zmm13[0] * zmm5[0]
            zmm1[0] = zmm1[0] + zmm8[0]
            zmm1[0] = zmm1[0] + zmm10[0]
            zmm13[0] = zmm13[0] + zmm7[0]
            zmm4 = *(r14_1 + sx.q(rax_41) * 0x10)
            float var_120_1 = zmm13[0]
            int64_t rcx_48 = sx.q(int.d(zmm1[0]))
            int32_t rax_43 = int.d(zmm1[0])
            float temp0_46[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
            zmm15 = *(r14_1 + rcx_48 * 0x10)
            float temp0_47[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            temp0_47[0] = temp0_47[0] - temp0_45[0]
            float temp0_48[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            temp0_48[0] = temp0_48[0] - temp0_46[0]
            zmm13[0] = zmm13[0] * temp0_47[0]
            zmm10 = *(r14_1 + sx.q(rax_43) * 0x10)
            zmm13[0] = zmm13[0] * temp0_48[0]
            zmm13[0] = zmm13[0] + temp0_45[0]
            float var_11c_1 = zmm13[0]
            zmm8 = var_198_1
            zmm13[0] = zmm13[0] + temp0_46[0]
            float temp0_49[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            float temp0_50[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            float temp0_51[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            temp0_49[0] = temp0_49[0] - temp0_51[0]
            float var_118_1 = zmm13[0]
            zmm4[0] = zmm4[0] - zmm6[0]
            float temp0_52[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
            temp0_52[0] = temp0_52[0] - temp0_50[0]
            zmm13[0] = zmm13[0] * temp0_49[0]
            float temp0_53[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
            zmm13[0] = zmm13[0] * zmm4[0]
            zmm9[0] = zmm9[0] - zmm14[0]
            zmm13[0] = zmm13[0] * temp0_52[0]
            zmm13[0] = zmm13[0] + temp0_51[0]
            float temp0_54[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
            zmm13[0] = zmm13[0] + zmm6[0]
            float temp0_55[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            zmm13[0] = zmm13[0] + temp0_50[0]
            temp0_53[0] = temp0_53[0] - temp0_55[0]
            float temp0_56[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
            temp0_54[0] = temp0_54[0] - temp0_56[0]
            zmm8[0] = zmm8[0] * zmm9[0]
            zmm8[0] = zmm8[0] * temp0_53[0]
            zmm10[0] = zmm10[0] - zmm15[0]
            zmm8[0] = zmm8[0] + zmm14[0]
            zmm8[0] = zmm8[0] * temp0_54[0]
            zmm14 = var_198_1
            zmm8[0] = zmm8[0] + temp0_55[0]
            zmm9 = var_11c_1
            float temp0_57[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
            zmm8[0] = zmm8[0] + temp0_56[0]
            float temp0_58[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
            zmm14[0] = zmm14[0] * zmm10[0]
            float temp0_59[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            zmm8[0] = zmm8[0] - zmm9[0]
            temp0_57[0] = temp0_57[0] - temp0_59[0]
            float temp0_60[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm14[0] = zmm14[0] + zmm15[0]
            zmm15 = var_180.d
            temp0_58[0] = temp0_58[0] - temp0_60[0]
            zmm14[0] = zmm14[0] * temp0_57[0]
            zmm15[0] = zmm15[0] * zmm8[0]
            zmm14[0] = zmm14[0] - zmm13[0]
            zmm14[0] = zmm14[0] * temp0_58[0]
            zmm14[0] = zmm14[0] + temp0_59[0]
            zmm10 = var_120_1
            zmm9[0] = zmm9[0] + zmm15[0]
            zmm3 = var_118_1
            zmm8[0] = zmm8[0] - zmm10[0]
            zmm14[0] = zmm14[0] + temp0_60[0]
            zmm8[0] = zmm8[0] - zmm3[0]
            zmm14[0] = zmm14[0] - zmm13[0]
            zmm15[0] = zmm15[0] * zmm8[0]
            zmm15[0] = zmm15[0] * zmm8[0]
            zmm14[0] = zmm14[0] - zmm13[0]
            zmm10[0] = zmm10[0] + zmm15[0]
            zmm3[0] = zmm3[0] + zmm15[0]
            zmm2 = var_178.d
            zmm7 = 0x3f800000
            r9_5 = &(*r9_5)[zx.q(rax_2)]
            zmm8 = var_104_1
            r8_18 += zx.q(r12_1) << 2
            zmm15[0] = zmm15[0] * zmm14[0]
            r13_1 += zx.q(r15_1) << 2
            i_4 += 1
            zmm4 = 0x3f000000
            zmm6 = zx.o(0)
            zmm15[0] = zmm15[0] * zmm14[0]
            zmm5 = var_108_1
            zmm13[0] = zmm13[0] + zmm15[0]
            zmm15[0] = zmm15[0] * zmm14[0]
            zmm14 = var_110_1
            zmm13[0] = zmm13[0] + zmm15[0]
            zmm13[0] = zmm13[0] - zmm10[0]
            zmm13[0] = zmm13[0] + zmm15[0]
            zmm15 = var_10c_1
            zmm13[0] = zmm13[0] - zmm9[0]
            zmm2[0] = zmm2[0] * zmm13[0]
            zmm11 = var_f8_1
            zmm13[0] = zmm13[0] - zmm3[0]
            zmm2[0] = zmm2[0] * zmm13[0]
            zmm12 = var_114_1
            zmm10[0] = zmm10[0] + zmm2[0]
            zmm9[0] = zmm9[0] + zmm2[0]
            zmm2[0] = zmm2[0] * zmm13[0]
            zmm13 = var_f4_1
            *rdx_5 = zmm10[0]
            zmm3[0] = zmm3[0] + zmm2[0]
            zmm10 = var_fc_1
            *var_148 = zmm9[0]
            zmm9 = var_100_1
            *result_1 = zmm3[0]
            rdx_5 = &var_160[sx.q(rax_13)]
            var_160 = rdx_5
            result = result_1
            var_148 = &var_148[sx.q(rax_14)]
            result_1 = result + (sx.q(var_13c) << 2)
        while (i_4 s< *(arg2 + 0x40))

return result
