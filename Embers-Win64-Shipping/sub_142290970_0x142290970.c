// 函数: sub_142290970
// 地址: 0x142290970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
uint64_t result = __security_cookie ^ &var_318
uint64_t result_2 = result
int64_t r12 = 0
uint64_t r14 = zx.q(arg6)
uint128_t zmm7 = arg4
float zmm9[0x4] = arg1
float zmm10[0x4] = arg2
int32_t var_2b4 = r14.d
int64_t var_2b0 = 0
int32_t var_2a4 = 0
int32_t var_2a8 = r14.d

if (r14.d s> 0)
    result = sub_140638a00(&var_2b0)
    r12 = var_2b0

float zmm8[0x4] = 0x3f800000
int32_t i = 0
float zmm6[0x4]
float var_48[0x4] = zmm6
int32_t var_2e8
float zmm11[0x4]
int128_t zmm12
int128_t zmm13

if (r14.d != 0)
    zmm6 = 0x3f800000
    arg1 = zx.o(0)
    zmm8 = 0x40c90fdb
    arg1[0] = float.s(r14)
    zmm6[0] = 1f / arg1[0]
    
    do
        arg4 = zx.o(0)
        arg4[0] = float.s(zx.q(i))
        arg4[0] = arg4[0] * zmm6[0]
        arg4[0] = arg4[0] * zmm8[0]
        float* rax_2
        float zmm15_1[0x4]
        rax_2, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, arg5, zmm15_1 =
            sub_142292f10(&var_2e8, zmm9[0], zmm10, arg4)
        zmm15_1[0] = zmm15_1[0] * rax_2[2]
        zmm15_1[0] = zmm15_1[0] * *rax_2
        zmm15_1[0] = zmm15_1[0] * rax_2[1]
        int64_t i_2 = sx.q(i)
        i += 1
        float result_1 = zmm15_1[0]
        zmm15_1[0] = zmm15_1[0] f+ zmm7.d
        int64_t rcx_3 = i_2 * 3
        result = zx.q(result_1)
        *(r12 + (rcx_3 << 2)) = (_mm_unpacklo_ps(zmm15_1, zmm15_1[0].q)).q
        *(r12 + (rcx_3 << 2) + 8) = result.d
    while (i u< r14.d)
    
    zmm8 = 0x3f800000

int32_t i_1 = 0

if (r14.d != 0)
    int32_t rax_3 = (r14 - 1).d
    int64_t var_2e4_1 = 0
    int32_t rcx_4 = 0
    char var_2f5_1 = 0x7f
    char var_2f1_1 = 0x7f
    char var_2ed_1 = 0x7f
    float var_98_1[0x4] = zmm11
    int128_t var_a8_1 = zmm12
    zmm12 = 0x3f000000
    int128_t var_b8_1 = zmm13
    zmm13 = 0x42fe0000
    int32_t r11_2 = int.d(-253.5f) s>> 1
    int32_t var_298_1 = r11_2
    int32_t var_294_1 = 0
    float var_228[0x4]
    __builtin_memcpy(&var_228, 
        "\x7f\x00\x00\x00\x7f\x00\x00\x00\x7f\x00\x00\x00\x7f\x00\x00\x00\x80\xff\xff\xff\x80\xff\xff\x"
    "ff\x80\xff\xff\xff\x80\xff\xff\xff", 
        0x20)
    float var_278_1[0x4] = data_142dd3fb0
    arg1 = zx.o(0)
    arg1[0] = float.s(r14)
    int32_t rsi_1 = int.d(0.5f) s>> 1
    var_2e8 = zmm7.d
    zmm7 = zx.o(var_2e8.q)
    zmm8[0] = zmm8[0] / arg1[0]
    uint64_t var_280_1 = zmm7.q
    float var_2c0_1 = zmm8[0]
    int512_t zmm14_2
    
    do
        uint64_t var_208_1 = zmm7.q
        int64_t var_15c_1 = 0
        int64_t var_fc_1 = 0
        int64_t r13_1 = sx.q(i_1) * 3
        int32_t var_200_1 = rcx_4
        float zmm4[0x4] = *(r12 + (r13_1 << 2) + 4)
        float zmm2[0x4] = *(r12 + (r13_1 << 2))
        int32_t var_1fc_1 = 0
        int64_t rax_6 = sx.q(modu.dp.d(0:(i_1 + 1), r14.d))
        int32_t var_29c_1 = rax_6.d
        int64_t rax_7 = rax_6 * 3
        float zmm5[0x4] = *(r12 + (rax_7 << 2) + 4)
        arg2 = *(r12 + (rax_7 << 2) + 8)
        zmm10 = zmm5
        zmm9 = *(r12 + (rax_7 << 2))
        zmm10[0] = zmm10[0] f* *(r12 + (r13_1 << 2) + 8)
        int32_t rax_8 = *(r12 + (r13_1 << 2) + 8)
        arg2[0] = arg2[0] * zmm4[0]
        var_2e4_1:4.d = rax_8
        zmm6 = var_2e4_1:4.d
        zmm2[0] = zmm2[0] * arg2[0]
        zmm10[0] = zmm10[0] - arg2[0]
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm9[0] = zmm9[0] * zmm4[0]
        zmm9[0] = zmm9[0] f* *(r12 + (r13_1 << 2) + 8)
        zmm9[0] = zmm9[0] - zmm2[0]
        zmm7.d = float.s(zx.q(i_1))
        zmm2[0] = zmm2[0] - zmm9[0]
        arg1 = zx.o(*(r12 + (r13_1 << 2)))
        var_2e8.q = arg1.q
        zmm5 = var_2e8
        zmm7.d = zmm7.d f* var_2c0_1
        zmm6[0] = zmm6[0] * zmm2[0]
        float temp0_2[0x4] = _mm_shuffle_ps(arg1, arg1, 0x55)
        zmm5[0] = zmm5[0] * zmm9[0]
        temp0_2[0] = temp0_2[0] * zmm9[0]
        zmm10[0] = zmm10[0] * temp0_2[0]
        zmm6[0] = zmm6[0] - temp0_2[0]
        int32_t var_1f8_1 = zmm7.d
        zmm10[0] = zmm10[0] * zmm6[0]
        var_2b0.d = zmm6[0]
        zmm6[0] = zmm6[0] f* zmm13.d
        zmm5[0] = zmm5[0] - zmm10[0]
        zmm2[0] = zmm2[0] * zmm5[0]
        zmm6[0] = zmm6[0] + zmm6[0]
        var_2b0:4.d = zmm5[0]
        zmm10[0] = zmm10[0] - zmm2[0]
        zmm6[0] = zmm6[0] f+ zmm12.d
        float var_2a8_1 = zmm10[0]
        int32_t r10_2 = int.d(zmm6[0]) s>> 1
        char rax_10
        
        if (r10_2 s>= 0xffffff80)
            rax_10 = 0x7f
            
            if (r10_2 s< 0x7f)
                rax_10 = r10_2.b
        else
            rax_10 = -0x80
        
        zmm5[0] = zmm5[0] f* zmm13.d
        char var_1bc_1 = rax_10
        zmm5[0] = zmm5[0] + zmm5[0]
        zmm5[0] = zmm5[0] f+ zmm12.d
        int32_t r9_2 = int.d(zmm5[0]) s>> 1
        char rax_11
        
        if (r9_2 s>= 0xffffff80)
            rax_11 = 0x7f
            
            if (r9_2 s< 0x7f)
                rax_11 = r9_2.b
        else
            rax_11 = -0x80
        
        zmm10[0] = zmm10[0] f* zmm13.d
        char var_1bb_1 = rax_11
        zmm10[0] = zmm10[0] + zmm10[0]
        zmm10[0] = zmm10[0] f+ zmm12.d
        int32_t r8_1 = int.d(zmm10[0]) s>> 1
        char rax_12
        
        if (r8_1 s>= 0xffffff80)
            rax_12 = 0x7f
            
            if (r8_1 s< 0x7f)
                rax_12 = r8_1.b
        else
            rax_12 = -0x80
        
        char var_1ba_1 = rax_12
        char var_1b9_1 = 0x7f
        char rax_13
        
        if (r11_2 s>= 0xffffff80)
            rax_13 = 0x7f
            
            if (r11_2 s< 0x7f)
                rax_13 = r11_2.b
        else
            rax_13 = -0x80
        
        char rax_14
        
        if (rsi_1 s>= 0xffffff80)
            rax_14 = 0x7f
            
            if (rsi_1 s< 0x7f)
                rax_14 = rsi_1.b
        else
            rax_14 = -0x80
        
        char var_1b7_1 = rax_14
        char rax_15
        
        if (rsi_1 s>= 0xffffff80)
            rax_15 = 0x7f
            
            if (rsi_1 s< 0x7f)
                rax_15 = rsi_1.b
        else
            rax_15 = -0x80
        
        char var_1b6_1 = rax_15
        char var_2f8_1
        
        if (r11_2 s>= 0xffffff80)
            char rcx_5 = 0x7f
            
            if (r11_2 s< 0x7f)
                rcx_5 = r11_2.b
            
            var_2f8_1 = rcx_5
        else
            var_2f8_1 = 0x80
        
        if (rsi_1 s>= 0xffffff80)
            char rcx_6 = 0x7f
            
            if (rsi_1 s< 0x7f)
                rcx_6 = rsi_1.b
            
            char var_2f7_2 = rcx_6
        else
            char var_2f7_1 = 0x80
        
        if (rsi_1 s>= 0xffffff80)
            char rcx_7 = 0x7f
            
            if (rsi_1 s< 0x7f)
                rcx_7 = rsi_1.b
            
            char var_2f6_2 = rcx_7
        else
            char var_2f6_1 = 0x80
        
        zmm5[0] = zmm5[0] f* zmm13.d
        zmm5[0] = zmm5[0] + zmm5[0]
        zmm5[0] = zmm5[0] f+ zmm12.d
        int32_t rdx_4 = int.d(zmm5[0]) s>> 1
        char var_2f4_1
        
        if (rdx_4 s>= 0xffffff80)
            char rcx_8 = 0x7f
            
            if (rdx_4 s< 0x7f)
                rcx_8 = rdx_4.b
            
            var_2f4_1 = rcx_8
        else
            var_2f4_1 = 0x80
        
        temp0_2[0] = temp0_2[0] f* zmm13.d
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        temp0_2[0] = temp0_2[0] f+ zmm12.d
        int32_t rdx_6 = int.d(temp0_2[0]) s>> 1
        
        if (rdx_6 s>= 0xffffff80)
            char rcx_9 = 0x7f
            
            if (rdx_6 s< 0x7f)
                rcx_9 = rdx_6.b
            
            char var_2f3_2 = rcx_9
        else
            char var_2f3_1 = 0x80
        
        zmm6[0] = zmm6[0] f* zmm13.d
        zmm6[0] = zmm6[0] + zmm6[0]
        zmm6[0] = zmm6[0] f+ zmm12.d
        int32_t rdx_8 = int.d(zmm6[0]) s>> 1
        
        if (rdx_8 s>= 0xffffff80)
            char rcx_10 = 0x7f
            
            if (rdx_8 s< 0x7f)
                rcx_10 = rdx_8.b
            
            char var_2f2_2 = rcx_10
        else
            char var_2f2_1 = 0x80
        
        char var_2f0_1
        
        if (r10_2 s>= 0xffffff80)
            char rcx_11 = 0x7f
            
            if (r10_2 s< 0x7f)
                rcx_11 = r10_2.b
            
            var_2f0_1 = rcx_11
        else
            var_2f0_1 = 0x80
        
        if (r9_2 s>= 0xffffff80)
            char rcx_12 = 0x7f
            
            if (r9_2 s< 0x7f)
                rcx_12 = r9_2.b
            
            char var_2ef_2 = rcx_12
        else
            char var_2ef_1 = 0x80
        
        if (r8_1 s>= 0xffffff80)
            char rcx_13 = 0x7f
            
            if (r8_1 s< 0x7f)
                rcx_13 = r8_1.b
            
            char var_2ee_2 = rcx_13
        else
            char var_2ee_1 = 0x80
        
        zmm5 = var_228
        arg2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(var_2f8_1.d), 0), 0)
        int32_t var_25c_1 = 0
        int32_t var_24c_1 = 0
        int32_t var_23c_1 = 0
        float var_218[0x4]
        float temp0_6[0x4] = _mm_cvtepi32_ps((_mm_cmpgt_epi32(arg2, zmm5) & var_218) | arg2)
        arg2 = _mm_unpacklo_epi8(zx.o(var_2f4_1.d), 0)
        float temp0_8[0x4] = __mulps_xmmps_memps(temp0_6, var_278_1)
        arg2 = _mm_unpacklo_epi16(arg2, 0)
        arg1 = _mm_cmpgt_epi32(arg2, zmm5) & var_218
        float var_248_1 = temp0_8[0]
        float temp0_11[0x4] = _mm_cvtepi32_ps(arg1 | arg2)
        arg2 = _mm_unpacklo_epi8(zx.o(var_2f0_1.d), 0)
        float temp0_13[0x4] = __mulps_xmmps_memps(temp0_11, var_278_1)
        arg2 = _mm_unpacklo_epi16(arg2, 0)
        arg1 = _mm_cmpgt_epi32(arg2, zmm5) & var_218
        float var_258_1 = temp0_13[0]
        float temp0_17[0x4] = __mulps_xmmps_memps(_mm_cvtepi32_ps(arg1 | arg2), var_278_1)
        float var_268 = temp0_17[0]
        float var_264_1 = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)[0]
        float var_254_1 = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)[0]
        float var_244_1 = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)[0]
        arg1 = data_142d3f660
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
        float var_238_1[0x4] = arg1
        float var_260_1 = temp0_21[0]
        float var_250_1 = temp0_22[0]
        float var_240_1 = temp0_23[0]
        uint128_t zmm0
        uint128_t zmm7_1
        uint128_t zmm8_1
        int32_t zmm9_1
        int32_t zmm10_1
        int32_t zmm11_1
        uint128_t zmm14
        zmm0, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm14 = sub_14062b8d0(&var_268)
        
        zmm0 = zmm0.d f>= 0f ? zmm8_1 : 0xbf800000
        
        int64_t r14_1 = sx.q(arg7[1].d)
        char rax_26 = 0x7f
        int32_t var_2bc_1 = r14_1.d
        
        if (zmm0.d f< 0f)
            rax_26 = -0x7f
        
        char var_1b5_1 = rax_26
        int32_t rax_27 = (r14_1 + 1).d
        arg7[1].d = rax_27
        
        if (rax_27 s> *(arg7 + 0xc))
            sub_1407755b0(arg7)
        
        int64_t rax_28 = *arg7
        uint128_t* rcx_16 = r14_1 * 0x58
        int32_t var_198_1 = zmm7_1.d
        int32_t var_19c_1 = 0x3f800000
        *(rcx_16 + rax_28) = var_208_1.o
        *(rcx_16 + rax_28 + 0x10) = var_1f8_1.o
        uint128_t var_1e8
        *(rcx_16 + rax_28 + 0x20) = var_1e8
        uint128_t var_1d8
        *(rcx_16 + rax_28 + 0x30) = var_1d8
        uint128_t var_1c8
        *(rcx_16 + rax_28 + 0x40) = var_1c8
        *(rcx_16 + rax_28 + 0x50) = rax_13.q
        int32_t rax_29 = *(r12 + (r13_1 << 2) + 8)
        uint128_t zmm6_1 = *(r12 + (r13_1 << 2))
        int32_t rcx_17 = rax_3
        uint64_t var_1a8 = *(r12 + (r13_1 << 2))
        int32_t var_1a0_1 = rax_29
        
        if (i_1 != 0)
            rcx_17 = i_1 - 1
        
        int64_t rcx_18 = sx.q(rcx_17) * 3
        uint128_t zmm2_1 = *(r12 + (rcx_18 << 2) + 8)
        uint128_t zmm3 = *(r12 + (rcx_18 << 2) + 4)
        zmm7_1.d = zmm2_1.d f* *(r12 + (r13_1 << 2) + 4)
        zmm0.d = zmm3.d f* *(r12 + (r13_1 << 2) + 8)
        uint128_t zmm4_1 = *(r12 + (rcx_18 << 2))
        zmm8_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(r12 + (r13_1 << 2) + 4)
        zmm8_1.d = zmm8_1.d f* *(r12 + (r13_1 << 2) + 8)
        zmm7_1.d = zmm7_1.d f- zmm0.d
        zmm0 = zmm6_1
        zmm6_1.d = zmm6_1.d f* zmm3.d
        zmm0.d = zmm0.d f* zmm2_1.d
        zmm7_1.d = zmm7_1.d f+ zmm10_1
        zmm6_1.d = zmm6_1.d f- zmm4_1.d
        zmm8_1.d = zmm8_1.d f- zmm0.d
        zmm6_1.d = zmm6_1.d f+ zmm9_1
        zmm0.d = zmm7_1.d f* zmm7_1.d
        zmm8_1.d = zmm8_1.d f+ zmm11_1
        uint128_t zmm1
        zmm1.d = zmm6_1.d f* zmm6_1.d
        zmm2_1.d = zmm8_1.d f* zmm8_1.d
        zmm2_1.d = zmm2_1.d f+ zmm0.d
        zmm2_1.d = zmm2_1.d f+ zmm1.d
        float var_2d8
        
        if (zmm2_1.d f!= 1f)
            if (zmm2_1.d f>= 9.99999994e-09f)
                zmm4_1 = _mm_rsqrt_ss(zmm2_1.d, zmm2_1.d)
                zmm3.d = zmm2_1.d f* zmm14.d
                zmm0.d = zmm4_1.d f* zmm4_1.d
                zmm1.d = zmm3.d f* zmm0.d
                zmm2_1.d = zmm14.d f- zmm1.d
                zmm0.d = zmm4_1.d f* zmm2_1.d
                zmm4_1.d = zmm4_1.d f+ zmm0.d
                zmm1.d = zmm4_1.d f* zmm4_1.d
                zmm3.d = zmm3.d f* zmm1.d
                zmm0.d = zmm14.d f- zmm3.d
                zmm1.d = zmm4_1.d f* zmm0.d
                zmm4_1.d = zmm4_1.d f+ zmm1.d
                zmm1 = zmm4_1
                zmm0.d = zmm4_1.d f* zmm7_1.d
                zmm4_1.d = zmm4_1.d f* zmm6_1.d
                var_2d8 = zmm0.d
                zmm1.d = zmm1.d f* zmm8_1.d
                int32_t var_2d0_3 = zmm4_1.d
            else
                zmm1 = data_143dbb1fc
                var_2d8 = data_143dbb1f8.d
                int32_t var_2d0_2 = data_143dbb200.d
            
            int32_t var_2d4_2 = zmm1.d
        else
            var_2d8 = zmm7_1.d
            int32_t var_2d4_1 = zmm8_1.d
            int32_t var_2d0_1 = zmm6_1.d
        
        uint128_t zmm9_2
        uint128_t zmm10_2
        uint128_t zmm11_2
        uint128_t zmm14_1
        zmm9_2, zmm10_2, zmm11_2, zmm14_1 = sub_142252cf0(&var_1a8, &var_2b0, &var_2e8, &var_2d8)
        int64_t r13_2 = sx.q(arg7[1].d)
        int32_t rax_32 = (r13_2 + 1).d
        arg7[1].d = rax_32
        
        if (rax_32 s> *(arg7 + 0xc))
            sub_1407755b0(arg7)
        
        int64_t rax_33 = *arg7
        int128_t* rcx_21 = r13_2 * 0x58
        int32_t var_13c_1 = 0x3f800000
        *(rcx_21 + rax_33) = var_1a8.o
        *(rcx_21 + rax_33 + 0x10) = var_198_1.o
        uint128_t var_188
        *(rcx_21 + rax_33 + 0x20) = var_188
        uint128_t var_178
        *(rcx_21 + rax_33 + 0x30) = var_178
        uint128_t var_168
        *(rcx_21 + rax_33 + 0x40) = var_168
        *(rcx_21 + rax_33 + 0x50) = var_15c_1
        int32_t rax_34 = *(r12 + (rax_7 << 2) + 8)
        uint128_t zmm2_2 = *(r12 + (rax_7 << 2))
        uint64_t var_148 = *(r12 + (rax_7 << 2))
        float zmm5_1 = zmm2_2.d
        int32_t var_140_1 = rax_34
        uint128_t zmm0_1
        zmm0_1.d = float.s(zx.q(var_29c_1))
        zmm0_1.d = zmm0_1.d f* var_2c0_1
        int32_t var_138_1 = zmm0_1.d
        int64_t rcx_22 = sx.q(modu.dp.d(0:(i_1 + 2), var_2b4)) * 3
        uint128_t zmm1_1 = *(r12 + (rcx_22 << 2) + 8)
        uint128_t zmm8_2 = *(r12 + (rcx_22 << 2))
        zmm0_1.d = zmm1_1.d f* *(r12 + (rax_7 << 2) + 4)
        float zmm6_2 = *(r12 + (rcx_22 << 2) + 4)
        zmm2_2.d = zmm2_2.d f* zmm6_2
        float zmm7_2 = zmm6_2 f* *(r12 + (rax_7 << 2) + 8) f- zmm0_1.d
        zmm0_1.d = zmm8_2.d f* *(r12 + (rax_7 << 2) + 8)
        zmm8_2.d = zmm8_2.d f* *(r12 + (rax_7 << 2) + 4)
        zmm10_2.d = zmm10_2.d f+ zmm7_2
        zmm8_2.d = zmm8_2.d f- zmm2_2.d
        zmm11_2.d = zmm11_2.d f+ zmm5_1 f* zmm1_1.d f- zmm0_1.d
        zmm9_2.d = zmm9_2.d f+ zmm8_2.d
        zmm0_1.d = zmm10_2.d f* zmm10_2.d
        zmm2_2.d = zmm11_2.d f* zmm11_2.d
        zmm1_1.d = zmm9_2.d f* zmm9_2.d
        zmm2_2.d = zmm2_2.d f+ zmm0_1.d
        zmm2_2.d = zmm2_2.d f+ zmm1_1.d
        float var_2cc
        
        if (zmm2_2.d f!= 1f)
            if (zmm2_2.d f>= 9.99999994e-09f)
                float temp0_25[0x4] = _mm_rsqrt_ss(zmm2_2[0], zmm2_2.d)
                uint128_t zmm3_1
                zmm3_1.d = zmm2_2.d f* zmm14_1.d
                zmm0_1.d = temp0_25.d f* temp0_25[0]
                zmm1_1.d = zmm3_1.d f* zmm0_1.d
                zmm2_2.d = zmm14_1.d f- zmm1_1.d
                zmm0_1.d = temp0_25.d f* zmm2_2.d
                temp0_25[0] = temp0_25[0] f+ zmm0_1.d
                zmm1_1.d = temp0_25.d f* temp0_25[0]
                zmm3_1.d = zmm3_1.d f* zmm1_1.d
                zmm0_1.d = zmm14_1.d f- zmm3_1.d
                zmm1_1.d = temp0_25.d f* zmm0_1.d
                temp0_25[0] = temp0_25[0] f+ zmm1_1.d
                zmm0_1.d = temp0_25.d f* zmm10_2.d
                temp0_25[0] = temp0_25[0] f* zmm9_2.d
                var_2cc = zmm0_1.d
                zmm1_1.d = temp0_25.d f* zmm11_2.d
                float var_2c4_3 = temp0_25[0]
            else
                zmm1_1 = data_143dbb1fc
                var_2cc = data_143dbb1f8.d
                int32_t var_2c4_2 = data_143dbb200.d
            
            int32_t var_2c8_2 = zmm1_1.d
        else
            var_2cc = zmm10_2.d
            int32_t var_2c8_1 = zmm11_2.d
            int32_t var_2c4_1 = zmm9_2.d
        
        float zmm15_2
        zmm12, zmm13, zmm14_2, zmm15_2 = sub_142252cf0(&var_148, &var_2b0, &var_2e8, &var_2cc)
        int64_t r15 = sx.q(arg7[1].d)
        int32_t rax_38 = (r15 + 1).d
        arg7[1].d = rax_38
        
        if (rax_38 s> *(arg7 + 0xc))
            sub_1407755b0(arg7)
        
        int64_t rax_39 = *arg7
        float (* rcx_25)[0x4] = r15 * 0x58
        *(rcx_25 + rax_39) = var_148.o
        *(rcx_25 + rax_39 + 0x10) = var_138_1.o
        float var_128[0x4]
        *(rcx_25 + rax_39 + 0x20) = var_128
        float var_118[0x4]
        *(rcx_25 + rax_39 + 0x30) = var_118
        float var_108[0x4]
        *(rcx_25 + rax_39 + 0x40) = var_108
        *(rcx_25 + rax_39 + 0x50) = var_fc_1
        int64_t r14_3 = sx.q(arg8[1].d)
        int32_t rcx_26 = *(arg8 + 0xc)
        int32_t rax_40 = (r14_3 + 1).d
        arg8[1].d = rax_40
        
        if (zmm15_2 < 0f)
            if (rax_40 s> rcx_26)
                sub_1405a4cf0(arg8)
            
            *(*arg8 + (r14_3 << 2)) = var_2bc_1
            int64_t r14_6 = sx.q(arg8[1].d)
            int32_t rax_46 = (r14_6 + 1).d
            arg8[1].d = rax_46
            
            if (rax_46 s> *(arg8 + 0xc))
                sub_1405a4cf0(arg8)
            
            *(*arg8 + (r14_6 << 2)) = r15.d
            int64_t r14_7 = sx.q(arg8[1].d)
            int32_t rax_48 = (r14_7 + 1).d
            arg8[1].d = rax_48
            
            if (rax_48 s> *(arg8 + 0xc))
                sub_1405a4cf0(arg8)
            
            result = *arg8
            *(result + (r14_7 << 2)) = r13_2.d
        else
            if (rax_40 s> rcx_26)
                sub_1405a4cf0(arg8)
            
            *(*arg8 + (r14_3 << 2)) = var_2bc_1
            int64_t r14_4 = sx.q(arg8[1].d)
            int32_t rax_42 = (r14_4 + 1).d
            arg8[1].d = rax_42
            
            if (rax_42 s> *(arg8 + 0xc))
                sub_1405a4cf0(arg8)
            
            *(*arg8 + (r14_4 << 2)) = r13_2.d
            int64_t r14_5 = sx.q(arg8[1].d)
            int32_t rax_44 = (r14_5 + 1).d
            arg8[1].d = rax_44
            
            if (rax_44 s> *(arg8 + 0xc))
                sub_1405a4cf0(arg8)
            
            result = *arg8
            *(result + (r14_5 << 2)) = r15.d
        
        i_1 += 1
        r14 = zx.q(var_2b4)
        zmm7 = zx.o(var_280_1)
        r11_2 = var_298_1
        rcx_4 = var_294_1
    while (i_1 u< r14.d)
    
    zmm14_2.o = arg5

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(result_2 ^ &var_318)
return result
