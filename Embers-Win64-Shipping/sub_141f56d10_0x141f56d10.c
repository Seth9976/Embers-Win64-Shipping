// 函数: sub_141f56d10
// 地址: 0x141f56d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void* rcx = *(arg1 + 0x440)
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]

if (rcx != 0)
    int128_t zmm6 = 0x3f800000
    float zmm7[0x4] = zx.o(0)
    float var_18c_1 = 0f
    int32_t var_130
    sub_1423633d0(rcx, &var_130)
    float zmm13[0x4] = *(arg1 + 0x504)
    int128_t zmm14 = *(arg1 + 0x520)
    zmm13[0] = zmm13[0] f- zmm14.d
    int32_t var_11c
    float zmm10[0x4] = var_11c
    int32_t var_120
    float zmm11[0x4] = var_120
    int32_t var_124
    float zmm12[0x4] = var_124
    int32_t var_128
    zmm3 = var_128
    int32_t var_12c
    float zmm5[0x4] = var_12c
    bool cond:0_1 = _mm_and_ps(zmm13, 0x7fffffff)[0] <= 9.99999994e-09f
    zmm4 = var_130
    float zmm0_1[0x4]
    float zmm1_1[0x4]
    
    if (not(cond:0_1))
        uint32_t rcx_1 = zx.d(*(arg1 + 0x525))
        zmm4[0] = zmm4[0] - zmm12[0]
        zmm5[0] = zmm5[0] - zmm11[0]
        zmm2 = zmm3
        zmm2[0] = zmm2[0] - zmm10[0]
        
        if (rcx_1 == 0)
            zmm2 = zmm4
        else if (rcx_1 == 1)
            zmm2 = zmm5
        
        zmm5[0] = zmm5[0] + zmm11[0]
        zmm4[0] = zmm4[0] + zmm12[0]
        float var_190_1 = zmm5[0]
        zmm1_1 = zmm3
        zmm1_1[0] = zmm1_1[0] + zmm10[0]
        
        if (rcx_1 == 0)
            zmm1_1 = zmm4
        else if (rcx_1 == 1)
            zmm1_1 = var_190_1
        
        zmm14.d = zmm14.d f- zmm13[0]
        zmm0_1 = 0x3f800000
        zmm2[0] = zmm2[0] - zmm13[0]
        zmm1_1[0] = zmm1_1[0] - zmm13[0]
        zmm0_1[0] = 1f f/ zmm14.d
        zmm2[0] = zmm2[0] * zmm0_1[0]
        zmm1_1[0] = zmm1_1[0] * zmm0_1[0]
        
        if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] >= 4f)
                && not(_mm_and_ps(zmm1_1, 0x7fffffff)[0] >= 4f))
            var_18c_1 = zmm2[0]
            zmm7 = zmm2
    
    uint32_t rcx_3 = zx.d(*(arg1 + 0x525))
    zmm14 = data_143dbb200
    zmm13 = data_143dbb1fc
    float zmm9[0x4] = data_143dbb1f8
    
    if (rcx_3 == 0)
        zmm0_1 = zx.o(0)
        zmm1_1 = 0x3f800000
    else if (rcx_3 == 1)
        zmm0_1 = 0x3f800000
        zmm1_1 = zx.o(0)
    else if (rcx_3 == 2)
        zmm0_1 = 0x3f800000
        zmm1_1 = 0x3f800000
        zmm6 = zx.o(0)
    else
        zmm0_1 = zmm9
        zmm1_1 = zmm13
        zmm6 = zmm14
    
    zmm12[0] = zmm12[0] * zmm0_1[0]
    char var_158_1 = 1
    zmm4[0] = zmm4[0] * zmm0_1[0]
    char var_1a0_1 = 0
    zmm11[0] = zmm11[0] * zmm1_1[0]
    zmm5[0] = zmm5[0] * zmm1_1[0]
    zmm12[0] = zmm12[0] + zmm4[0]
    zmm3[0] = zmm3[0] f* zmm6.d
    zmm4[0] = zmm4[0] - zmm12[0]
    zmm10[0] = zmm10[0] f* zmm6.d
    zmm11[0] = zmm11[0] + zmm5[0]
    float var_1ac_1 = zmm9[0]
    zmm5[0] = zmm5[0] - zmm11[0]
    float var_1a8_1 = zmm13[0]
    float var_1a4_1 = zmm14.d
    zmm10[0] = zmm10[0] + zmm3[0]
    float var_1b8 = zmm9[0]
    zmm3[0] = zmm3[0] - zmm10[0]
    float var_1b4_1 = zmm13[0]
    float var_1b0_1 = zmm14.d
    float var_108_1 = zmm10[0]
    int64_t var_170 = (_mm_unpacklo_ps(zmm4, zmm5[0].q)).q
    float var_168_1 = zmm3[0]
    int64_t var_164_1 = (_mm_unpacklo_ps(zmm12, zmm11[0].q)).q
    float var_15c_1 = var_108_1
    float var_f8[0x2][0x4]
    float (* rax_5)[0x4]
    int128_t zmm15_1
    rax_5, zmm15_1 = sub_141f57fa0(arg1, &var_f8, zmm7)
    uint64_t var_150[0x4]
    uint64_t* rax_6 = sub_140ae2c60(&var_170, &var_150, rax_5)
    
    if (var_1a0_1 == 0)
        if (rax_6[3].b != 0)
            var_1b8.o = *rax_6
            var_1a8_1.q = rax_6[2]
            var_1a0_1.d = rax_6[3].d
    else if (rax_6[3].b != 0)
        var_1b8 = __minss_xmmss_memss((*rax_6)[0], var_1b8)[0]
        var_1b4_1 = __minss_xmmss_memss((*(rax_6 + 4)).d, var_1b4_1).d
        var_1b0_1 = __minss_xmmss_memss(rax_6[1].d[0], var_1b0_1)[0]
        var_1ac_1 = __maxss_xmmss_memss((*(rax_6 + 0xc)).d, var_1ac_1).d
        var_1a8_1 = __maxss_xmmss_memss(rax_6[2].d[0], var_1a8_1)[0]
        var_1a4_1 = __maxss_xmmss_memss((*(rax_6 + 0x14)).d, var_1a4_1).d
    
    float (* rax_8)[0x4]
    int32_t zmm15_2
    rax_8, zmm15_2 = sub_141f57fa0(arg1, &var_f8, zmm15_1)
    uint64_t* rax_9 = sub_140ae2c60(&var_170, &var_150, rax_8)
    
    if (var_1a0_1 == 0)
        if (rax_9[3].b != 0)
            var_1b8.o = *rax_9
            var_1a8_1.q = rax_9[2]
            var_1a0_1.d = rax_9[3].d
    else if (rax_9[3].b != 0)
        var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_9)[0]
        var_1b4_1 = __minss_xmmss_memss((*(rax_9 + 4))[0], var_1b4_1)[0]
        var_1b0_1 = __minss_xmmss_memss(rax_9[1].d[0], var_1b0_1)[0]
        var_1ac_1 = __maxss_xmmss_memss((*(rax_9 + 0xc))[0], var_1ac_1)[0]
        var_1a8_1 = __maxss_xmmss_memss(rax_9[2].d[0], var_1a8_1)[0]
        var_1a4_1 = __maxss_xmmss_memss((*(rax_9 + 0x14))[0], var_1a4_1)[0]
    
    float zmm4_1[0x4] = *(arg1 + 0x4e0)
    float zmm2_2[0x4] = *(arg1 + 0x4ac)
    float zmm14_1[0x4] = *(arg1 + 0x4a0)
    zmm4_1[0] = zmm4_1[0] + zmm2_2[0]
    float zmm5_1[0x4] = *(arg1 + 0x4b0)
    zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
    float zmm9_1[0x4] = *(arg1 + 0x4d0)
    float zmm7_1[0x4] = *(arg1 + 0x4e4)
    float zmm6_1 = *(arg1 + 0x4cc)
    int128_t zmm11_1 = *(arg1 + 0x4d4)
    float zmm13_1[0x4] = *(arg1 + 0x4a4)
    float zmm10_1[0x4] = *(arg1 + 0x4e8)
    float zmm8_1[0x4] = *(arg1 + 0x4b4)
    float zmm12_1[0x4] = *(arg1 + 0x4a8)
    int32_t rax_11 = *(arg1 + 0x4b4)
    zmm4_1[0] = zmm4_1[0] * 3f
    zmm9_1[0] = zmm9_1[0] * 6f
    float var_198_1 = zmm4_1[0]
    zmm14_1[0] = zmm14_1[0] * 6f
    zmm6_1 = zmm6_1 * 6f
    zmm11_1.d = zmm11_1.d f* 6f
    float zmm3_1[0x4] = var_198_1
    zmm3_1[0] = zmm3_1[0] + zmm14_1[0]
    zmm3_1[0] = zmm3_1[0] - zmm6_1
    float var_198_2 = zmm3_1[0]
    zmm7_1[0] = zmm7_1[0] + zmm5_1[0]
    zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
    zmm7_1[0] = zmm7_1[0] * 3f
    float var_194_1 = zmm7_1[0]
    zmm13_1[0] = zmm13_1[0] * 6f
    zmm3_1 = var_194_1
    zmm3_1[0] = zmm3_1[0] + zmm13_1[0]
    zmm3_1[0] = zmm3_1[0] - zmm9_1[0]
    zmm2_2[0] = zmm2_2[0] * 4f
    zmm5_1[0] = zmm5_1[0] * 4f
    float var_194_2 = zmm3_1[0]
    zmm10_1[0] = zmm10_1[0] + zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * 4f
    zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
    zmm10_1[0] = zmm10_1[0] * 3f
    float zmm1_3[0x4] = zmm10_1[0]
    zmm12_1[0] = zmm12_1[0] * 6f
    zmm1_3[0] = zmm1_3[0] + zmm12_1[0]
    zmm14_1[0] = zmm14_1[0] * -6f
    zmm13_1[0] = zmm13_1[0] * -6f
    zmm14_1[0] = zmm14_1[0] - zmm2_2[0]
    zmm12_1[0] = zmm12_1[0] * -6f
    zmm2_2 = var_194_2
    zmm1_3[0] = zmm1_3[0] f- zmm11_1.d
    zmm13_1[0] = zmm13_1[0] - zmm5_1[0]
    zmm2_2[0] = zmm2_2[0] * 4f
    zmm5_1 = var_198_2
    zmm12_1[0] = zmm12_1[0] - zmm8_1[0]
    zmm14_1[0] = zmm14_1[0] - zmm4_1[0]
    zmm4_1 = zx.o(*(arg1 + 0x4ac))
    float var_190_3 = zmm1_3[0]
    zmm5_1[0] = zmm5_1[0] * 4f
    zmm13_1[0] = zmm13_1[0] - zmm7_1[0]
    zmm3_1 = var_190_3
    zmm12_1[0] = zmm12_1[0] - zmm10_1[0]
    zmm3_1[0] = zmm3_1[0] * 4f
    zmm14_1[0] = zmm14_1[0] + zmm6_1
    zmm13_1[0] = zmm13_1[0] + zmm9_1[0]
    zmm12_1[0] = zmm12_1[0] f+ zmm11_1.d
    zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
    zmm11_1 = 0x80000000
    zmm8_1 = 0x3f000000
    zmm6_1 = zmm13_1[0]
    zmm10_1 = 0x322bcc77
    zmm7_1 = zx.o(0)
    zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
    zmm6_1 = zmm6_1 * zmm13_1[0]
    zmm14_1[0] = zmm14_1[0] - zmm4_1[0]
    zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
    float temp0_21[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    temp0_21[0] = temp0_21[0] * zmm2_2[0]
    float var_198_3 = zmm14_1[0]
    bool cond:1_1 = zmm14_1[0] <= 0f
    zmm9_1 = 0x7fffffff
    zmm6_1 = zmm6_1 - temp0_21[0]
    float zmm0_3[0x4] = rax_11
    zmm0_3[0] = zmm0_3[0] * zmm3_1[0]
    float var_178_1 = zmm6_1
    zmm6_1 = var_18c_1
    zmm12_1[0] = zmm12_1[0] - zmm0_3[0]
    float var_174_1 = zmm12_1[0]
    
    if (not(cond:1_1))
        zmm0_3 = _mm_and_ps(zmm5_1, 0x7fffffff)
        
        if (not(zmm0_3[0] <= 9.99999994e-09f))
            float temp0_23[0x4] = __sqrtss_xmmss_memss(zmm0_3[0], var_198_3)
            zmm1_3 = 0x3f000000
            zmm1_3[0] = 0.5f / zmm5_1[0]
            temp0_23[0] = temp0_23[0] - zmm14_1[0]
            zmm14_1 ^= 0x80000000
            zmm14_1[0] = zmm14_1[0] - temp0_23[0]
            temp0_23[0] = temp0_23[0] * zmm1_3[0]
            zmm14_1[0] = zmm14_1[0] * zmm1_3[0]
            
            if (not(temp0_23[0] < zmm6_1) && not(temp0_23[0] f> zmm15_2))
                float (* rax_12)[0x4]
                rax_12, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_2 =
                    sub_141f57fa0(arg1, &var_f8, temp0_23)
                uint64_t* rax_13
                rax_13, zmm6_1, zmm7_1 = sub_140ae2c60(&var_170, &var_150, rax_12)
                
                if (var_1a0_1 == 0)
                    if (rax_13[3].b != 0)
                        var_1b8.o = *rax_13
                        var_1a8_1.q = rax_13[2]
                        var_1a0_1.d = rax_13[3].d
                else if (rax_13[3].b != 0)
                    var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_13)[0]
                    var_1b4_1 = __minss_xmmss_memss((*(rax_13 + 4))[0], var_1b4_1)[0]
                    var_1b0_1 = __minss_xmmss_memss(rax_13[1].d[0], var_1b0_1)[0]
                    var_1ac_1 = __maxss_xmmss_memss((*(rax_13 + 0xc))[0], var_1ac_1)[0]
                    var_1a8_1 = __maxss_xmmss_memss(rax_13[2].d[0], var_1a8_1)[0]
                    var_1a4_1 = __maxss_xmmss_memss((*(rax_13 + 0x14))[0], var_1a4_1)[0]
            
            if (not(zmm14_1[0] < zmm6_1) && not(zmm14_1[0] f> zmm15_2))
                float (* rax_15)[0x4]
                rax_15, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_2 =
                    sub_141f57fa0(arg1, &var_f8, zmm14_1)
                uint64_t* rax_16
                rax_16, zmm6_1, zmm7_1 = sub_140ae2c60(&var_170, &var_150, rax_15)
                
                if (var_1a0_1 == 0)
                    if (rax_16[3].b != 0)
                        var_1b8.o = *rax_16
                        var_1a8_1.q = rax_16[2]
                        var_1a0_1.d = rax_16[3].d
                else if (rax_16[3].b != 0)
                    var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_16)[0]
                    var_1b4_1 = __minss_xmmss_memss((*(rax_16 + 4))[0], var_1b4_1)[0]
                    var_1b0_1 = __minss_xmmss_memss(rax_16[1].d[0], var_1b0_1)[0]
                    var_1ac_1 = __maxss_xmmss_memss((*(rax_16 + 0xc))[0], var_1ac_1)[0]
                    var_1a8_1 = __maxss_xmmss_memss(rax_16[2].d[0], var_1a8_1)[0]
                    var_1a4_1 = __maxss_xmmss_memss((*(rax_16 + 0x14))[0], var_1a4_1)[0]
    
    zmm1_3 = var_178_1
    
    if (not(zmm1_3[0] <= zmm7_1[0]))
        zmm2_2 = var_194_2
        
        if (not(_mm_and_ps(zmm2_2, zmm9_1)[0] <= zmm10_1[0]))
            float temp0_37[0x4] = _mm_sqrt_ss(0, zmm1_3[0])
            zmm8_1[0] = zmm8_1[0] / zmm2_2[0]
            temp0_37[0] = temp0_37[0] - zmm13_1[0]
            zmm13_1 ^= zmm11_1
            zmm13_1[0] = zmm13_1[0] - temp0_37[0]
            temp0_37[0] = temp0_37[0] * zmm8_1[0]
            zmm13_1[0] = zmm13_1[0] * zmm8_1[0]
            
            if (not(temp0_37[0] < zmm6_1) && not(temp0_37[0] f> zmm15_2))
                float (* rax_18)[0x4]
                rax_18, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm15_2 =
                    sub_141f57fa0(arg1, &var_f8, temp0_37)
                uint64_t* rax_19
                rax_19, zmm6_1, zmm7_1 = sub_140ae2c60(&var_170, &var_150, rax_18)
                
                if (var_1a0_1 == 0)
                    if (rax_19[3].b != 0)
                        var_1b8.o = *rax_19
                        var_1a8_1.q = rax_19[2]
                        var_1a0_1.d = rax_19[3].d
                else if (rax_19[3].b != 0)
                    var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_19)[0]
                    var_1b4_1 = __minss_xmmss_memss((*(rax_19 + 4))[0], var_1b4_1)[0]
                    var_1b0_1 = __minss_xmmss_memss(rax_19[1].d[0], var_1b0_1)[0]
                    var_1ac_1 = __maxss_xmmss_memss((*(rax_19 + 0xc))[0], var_1ac_1)[0]
                    var_1a8_1 = __maxss_xmmss_memss(rax_19[2].d[0], var_1a8_1)[0]
                    var_1a4_1 = __maxss_xmmss_memss((*(rax_19 + 0x14))[0], var_1a4_1)[0]
            
            if (not(zmm13_1[0] < zmm6_1) && not(zmm13_1[0] f> zmm15_2))
                float (* rax_21)[0x4]
                rax_21, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm15_2 =
                    sub_141f57fa0(arg1, &var_f8, zmm13_1)
                uint64_t* rax_22
                rax_22, zmm6_1, zmm7_1 = sub_140ae2c60(&var_170, &var_150, rax_21)
                
                if (var_1a0_1 == 0)
                    if (rax_22[3].b != 0)
                        var_1b8.o = *rax_22
                        var_1a8_1.q = rax_22[2]
                        var_1a0_1.d = rax_22[3].d
                else if (rax_22[3].b != 0)
                    var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_22)[0]
                    var_1b4_1 = __minss_xmmss_memss((*(rax_22 + 4))[0], var_1b4_1)[0]
                    var_1b0_1 = __minss_xmmss_memss(rax_22[1].d[0], var_1b0_1)[0]
                    var_1ac_1 = __maxss_xmmss_memss((*(rax_22 + 0xc))[0], var_1ac_1)[0]
                    var_1a8_1 = __maxss_xmmss_memss(rax_22[2].d[0], var_1a8_1)[0]
                    var_1a4_1 = __maxss_xmmss_memss((*(rax_22 + 0x14))[0], var_1a4_1)[0]
    
    zmm2_2 = var_174_1
    
    if (not(zmm2_2[0] <= zmm7_1[0]))
        zmm1_3 = var_190_3
        
        if (not(_mm_and_ps(zmm1_3, zmm9_1)[0] <= zmm10_1[0]))
            float temp0_51[0x4] = _mm_sqrt_ss(0, zmm2_2[0])
            zmm8_1[0] = zmm8_1[0] / zmm1_3[0]
            temp0_51[0] = temp0_51[0] - zmm12_1[0]
            zmm12_1 ^= zmm11_1
            zmm12_1[0] = zmm12_1[0] - temp0_51[0]
            temp0_51[0] = temp0_51[0] * zmm8_1[0]
            zmm12_1[0] = zmm12_1[0] * zmm8_1[0]
            
            if (not(temp0_51[0] < zmm6_1) && not(temp0_51[0] f> zmm15_2))
                int128_t* rax_24
                rax_24, zmm12_1, zmm15_2 = sub_141f57fa0(arg1, &var_f8, temp0_51)
                float (* rax_25)[0x4]
                rax_25, zmm6_1 = sub_140ae2c60(&var_170, &var_150, rax_24)
                
                if (var_1a0_1 == 0)
                    if ((*rax_25)[6].b != 0)
                        var_1b8.o = *rax_25
                        var_1a8_1.q = rax_25[1][0].q
                        var_1a0_1.d = (*rax_25)[6]
                else if ((*rax_25)[6].b != 0)
                    var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_25)[0]
                    var_1b4_1 = __minss_xmmss_memss((*rax_25)[1].d, var_1b4_1).d
                    var_1b0_1 = __minss_xmmss_memss((*rax_25)[2][0], var_1b0_1)[0]
                    var_1ac_1 = __maxss_xmmss_memss((*rax_25)[3].d, var_1ac_1).d
                    var_1a8_1 = __maxss_xmmss_memss(rax_25[1][0][0], var_1a8_1)[0]
                    var_1a4_1 = __maxss_xmmss_memss((*rax_25)[5].d, var_1a4_1).d
            
            if (not(zmm12_1[0] < zmm6_1) && not(zmm12_1[0] f> zmm15_2))
                uint64_t* rax_28 =
                    sub_140ae2c60(&var_170, &var_150, sub_141f57fa0(arg1, &var_f8, zmm12_1))
                
                if (var_1a0_1 == 0)
                    if (rax_28[3].b != 0)
                        var_1b8.o = *rax_28
                        var_1a8_1.q = rax_28[2]
                        var_1a0_1.d = rax_28[3].d
                else if (rax_28[3].b != 0)
                    var_1b8 = __minss_xmmss_memss(var_1b8[0], *rax_28)[0]
                    int32_t var_1b4_2 = __minss_xmmss_memss((*(rax_28 + 4)).d, var_1b4_1).d
                    float var_1b0_2 = __minss_xmmss_memss(rax_28[1].d[0], var_1b0_1)[0]
                    int32_t var_1ac_2 = __maxss_xmmss_memss((*(rax_28 + 0xc)).d, var_1ac_1).d
                    float var_1a8_2 = __maxss_xmmss_memss(rax_28[2].d[0], var_1a8_1)[0]
                    int32_t var_1a4_2 = __maxss_xmmss_memss((*(rax_28 + 0x14)).d, var_1a4_1).d
    
    sub_1419ead80(arg2, sub_140ae2c60(&var_1b8, &var_150, arg3))
else
    zmm3 = data_143dbb1f8
    zmm2 = data_143dbb200
    zmm4 = data_143dbb1fc
    *(arg2 + 0xc) = (_mm_unpacklo_ps(zx.o(0), 0)).q
    *(arg2 + 0x14) = rcx.d
    zmm2[0] = zmm2[0] f+ *(arg2 + 0x14)
    zmm3[0] = zmm3[0] f+ *(arg2 + 0xc)
    zmm4[0] = zmm4[0] f+ arg2[2].d
    int32_t var_180 = rcx.d
    float var_180_1 = zmm2[0]
    *arg2 = (_mm_unpacklo_ps(zmm3, zmm4[0].q)).q
    arg2[1].d = var_180_1
    float zmm0[0x4] = arg2[2].d
    zmm2 = *(arg2 + 0xc)
    int32_t zmm1 = *(arg2 + 0x14)
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm2[0] = zmm2[0] * zmm2[0]
    zmm2[0] = zmm2[0] + zmm0[0]
    zmm2[0] = zmm2[0] f+ zmm1 f* zmm1
    arg2[3].d = _mm_sqrt_ss(0, zmm2[0])[0]
__security_check_cookie(rax_1 ^ &var_1d8)
return arg2
