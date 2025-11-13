// 函数: sub_141431ed0
// 地址: 0x141431ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_428
void*** result = __security_cookie ^ &var_428
void*** result_1 = result
int64_t* rsi = arg2[0x53]

if (rsi != 0)
    float zmm4[0x4] = *(arg2 + 0x1c0)
    float zmm1[0x4] = *(arg2 + 0x1d0)
    float zmm2[0x4] = data_143dbb1fc
    float var_304_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
    float zmm0[0x4] = data_143dbb200
    float var_308 = zmm1[0]
    float var_1f8_1[0x4] = zmm1
    float var_198_1[0x4] = zmm1
    float var_300_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    float temp0_3[0x4] = _mm_unpacklo_ps(zmm2, 0)
    float zmm7[0x4] = data_14399f668
    float temp0_4[0x4] = _mm_unpacklo_ps(data_143dbb1f8, zmm0[0].q)
    zmm0 = data_14399f670
    float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
    float temp0_6[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
    float temp0_7[0x4] = _mm_add_ps(zmm4, zmm4)
    float temp0_9[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm0[0].q), temp0_6[0].q)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 4)
    float var_208_1[0x4] = zmm4
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
    float temp0_12[0x4] = _mm_mul_ps(temp0_7, zmm4)
    float temp0_14[0x4] = _mm_mul_ps(temp0_10, _mm_shuffle_ps(temp0_7, temp0_7, 0x29))
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x12)
    float temp0_18[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x1a), _mm_shuffle_ps(temp0_12, temp0_12, 1))
    float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), temp0_15)
    float var_1e8_1[0x4] = temp0_9
    float temp0_21[0x4] = _mm_add_ps(temp0_20, temp0_14)
    float temp0_22[0x4] = _mm_sub_ps(temp0_14, temp0_20)
    zmm4 = data_143ecec90
    zmm4[0].q = temp0_5 u>> 0x40
    float temp0_23[0x4] = _mm_sub_ps(zmm4, temp0_18)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_5, zmm4, 0xc4)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, temp0_9)
    float temp0_26[0x4] = _mm_mul_ps(temp0_11, temp0_22)
    float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_23, temp0_9), data_143ececa0)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0x32)
    float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm3, 0), temp0_29, 0x82)
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0x31)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0x10)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_25, temp0_26, 0x12)
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_32, 0x88)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, zmm3, 0xe8)
    float var_1c8_1[0x4] = temp0_35
    float var_1d8[0x4] = temp0_31
    float var_1b8_1[0x4] = temp0_36
    float var_1a8_1[0x4] = temp0_24
    uint32_t var_2b8[0x4]
    int32_t zmm11_1 = sub_140631b10(&var_1d8, &var_2b8)
    uint32_t zmm2_1[0x4] = var_2b8
    float zmm6_1[0x4] = data_142d4cc00
    float zmm7_1[0x4] = data_142d4cc30
    float zmm8_1[0x4] = data_142d4cc20
    float zmm9_1[0x4] = data_142d3f660
    uint32_t zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    uint32_t zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    uint32_t zmm10_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9_1)
    zmm10_1 = _mm_mul_ps(zmm10_1, zmm6_1)
    int128_t var_188
    __builtin_memcpy(&var_188, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    zmm10_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10_1, zmm0_1), zmm1_1), zmm2_1)
    uint32_t var_2a8[0x4]
    zmm0_1 = _mm_shuffle_ps(var_2a8, var_2a8, 0)
    zmm1_1 = _mm_shuffle_ps(var_2a8, var_2a8, 0xaa)
    uint32_t zmm5_1[0x4] = _mm_shuffle_ps(var_2a8, var_2a8, 0x55)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(var_2a8, var_2a8, 0xff), zmm9_1)
    zmm5_1 = _mm_mul_ps(zmm5_1, zmm6_1)
    uint32_t var_148_1[0x4] = zmm10_1
    var_2b8 = zmm10_1
    zmm5_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm5_1, zmm0_1), zmm1_1), zmm2_1)
    uint32_t var_298[0x4]
    uint32_t zmm4_1[0x4] = _mm_shuffle_ps(var_298, var_298, 0x55)
    zmm0_1 = _mm_shuffle_ps(var_298, var_298, 0)
    zmm1_1 = _mm_shuffle_ps(var_298, var_298, 0xaa)
    zmm4_1 = _mm_mul_ps(zmm4_1, zmm6_1)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
    zmm2_1 = _mm_shuffle_ps(var_298, var_298, 0xff)
    zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
    zmm2_1 = _mm_mul_ps(zmm2_1, zmm9_1)
    uint32_t var_138_1[0x4] = zmm5_1
    uint32_t var_2a8_1[0x4] = zmm5_1
    zmm4_1 = _mm_add_ps(_mm_add_ps(zmm4_1, zmm1_1), zmm2_1)
    uint32_t var_288[0x4]
    uint128_t zmm3_1 = _mm_mul_ps(_mm_shuffle_ps(var_288, var_288, 0x55), zmm6_1)
    zmm6_1 = *(arg2 + 0x28c)
    zmm0_1 = _mm_shuffle_ps(var_288, var_288, 0)
    zmm1_1 = _mm_shuffle_ps(var_288, var_288, 0xaa)
    zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
    zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
    zmm2_1 = _mm_shuffle_ps(var_288, var_288, 0xff)
    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
    zmm2_1 = _mm_mul_ps(zmm2_1, zmm9_1)
    uint32_t var_128_1[0x4] = zmm4_1
    uint32_t var_298_1[0x4] = zmm4_1
    zmm3_1 = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm2_1)
    uint128_t var_118_1 = zmm3_1
    uint128_t var_288_1 = zmm3_1
    int64_t rax_1 = *rsi
    zmm6_1[0] = zmm6_1[0] * 0.00872664619f
    (*(rax_1 + 0x340))(rsi)
    int32_t rbx_1 = int.d(zmm0_1[0])
    (*(*rsi + 0x338))(rsi)
    int32_t var_3ac_1 = rbx_1
    int64_t rbx_2 = int.d(zmm0_1[0]).q
    uint128_t var_248
    
    if (*(arg2 + 0x7fc) == 0)
        if ((*(arg2 + 0x7f4) & 1) == 0)
            zmm0_1 = data_14399fa0c
        else
            zmm0_1 = arg2[0xff].d
        
        sub_141418f50(rbx_2, zx.d(arg2[0x51].b), zmm6_1, arg2[0x52].d, zmm0_1[0], &var_248)
    else
        zmm1_1 = *(arg2 + 0x810)
        var_248 = *(arg2 + 0x800)
        uint32_t var_238_1[0x4] = zmm1_1
        uint32_t var_228_1[0x4] = *(arg2 + 0x820)
        uint32_t var_218_1[0x4] = *(arg2 + 0x830)
    
    char rax_4 = *(arg2 + 0x1f1)
    int64_t r14
    
    if (rax_4 == 2 || rax_4 - 8 u<= 1)
        r14.b = 0
    else
        r14.b = 1
    
    int64_t rax_5 = sub_140cbe180(rsi)
    int64_t r15_1 = rax_5 + 0x48
    
    if (rax_5 == 0)
        r15_1 = 0
    
    int64_t rax_7 = (*(*arg2 + 0x520))(arg2)
    uint32_t var_408
    var_408.q = &var_2b8
    void*** rax_8 = sub_14141b2f0(arg1, arg2, r15_1, rbx_2, var_408, &var_308, &var_248, 
        (*(arg2 + 0x23c))[0], r14.b, &arg2[0x56], arg2[0xfe].d[0], rax_7, zmm11_1)
    void*** r13_1 = rax_8
    int32_t var_3b0_1
    var_3b0_1.q = rax_8
    void* rdx_4 = rax_8[0x14]
    *(rdx_4 + 0x497c) ^= (*(arg2 + 0x85c) << 0xc ^ *(rdx_4 + 0x497c)) & 0x2000
    rax_8[0xb].d = zx.d(*(arg2 + 0x1f1))
    *(rax_8 + 0x5c) = zx.d(arg2[0x54].b)
    sub_14229e040()
    uint128_t var_e8
    sub_1422a13b0(&data_143f53590, &var_e8, arg2)
    int32_t i = 0
    
    if (arg2[0x10e].d s> 0)
        int32_t rdx_6 = 1
        int64_t* r15_2 = nullptr
        int32_t var_3b8_1 = 1
        
        do
            int64_t r8_3 = arg2[0x10d]
            int64_t* rbx_3 = *(r15_2 + r8_3 + 8)
            
            if (rbx_3 == 0)
                goto label_141432434
            
            int32_t rax_9 = 0
            bool z_1
            
            if (0 == rbx_3[1].d)
                rbx_3[1].d = 0
                z_1 = true
            else
                rax_9 = rbx_3[1].d
                z_1 = false
            
            if (z_1)
            label_141432427:
                rbx_3 = nullptr
            label_141432434:
                int64_t r9_3 = sx.q(i) << 4
                int64_t* rcx_14 = *(r9_3 + arg2[0x10d] + 8)
                
                if (rcx_14 != 0)
                    int32_t rax_12 = *(rcx_14 + 0xc)
                    *(rcx_14 + 0xc) -= 1
                    
                    if (rax_12 == 1 && rcx_14 != 0)
                        (*(*rcx_14 + 8))(rcx_14, 1)
                        rdx_6 = var_3b8_1
                
                int32_t rax_15 = arg2[0x10e].d
                int32_t rcx_16 = rax_15 - i
                
                if (rcx_16 != 1)
                    int64_t rax_14 = arg2[0x10d]
                    memmove(rax_14 + r9_3, (sx.q(rdx_6) << 4) + rax_14, (rcx_16 - 1) << 4)
                    rax_15 = arg2[0x10e].d
                
                var_3b8_1 -= 1
                i -= 1
                arg2[0x10e].d = rax_15 - 1
                r15_2 -= 0x10
            else
                while (true)
                    bool z_2
                    
                    if (rax_9 == rbx_3[1].d)
                        rbx_3[1].d = rax_9 + 1
                        z_2 = true
                    else
                        rbx_3[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_9 = 0
                    bool z_3
                    
                    if (0 == rbx_3[1].d)
                        rbx_3[1].d = 0
                        z_3 = true
                    else
                        rax_9 = rbx_3[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141432427
                
                if (rbx_3 == 0)
                    goto label_141432434
                
                int64_t* rcx_19 = *(r15_2 + r8_3)
                
                if (rcx_19 == 0)
                    goto label_141432434
                
                if ((*(*rcx_19 + 0x60))(rcx_19, 0) != 0)
                    rbx_3[1].d += 1
                    int32_t rcx_20 = r13_1[0xf].d
                    r13_1[0xf].d = rcx_20 + 1
                    
                    if (rcx_20 + 1 s> *(r13_1 + 0x7c))
                        sub_1405a4f90(&r13_1[0xe])
                    
                    int64_t* rax_22 = &r13_1[0xe][sx.q(rcx_20) * 2]
                    *rax_22 = rcx_19
                    rax_22[1] = rbx_3
                    rbx_3[1].d += 1
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_25 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_25 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    r13_1 = var_3b0_1.q
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_29 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_29 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            i += 1
            rdx_6 = var_3b8_1 + 1
            r15_2 = &r15_2[2]
            var_3b8_1 = rdx_6
        while (i s< arg2[0x10e].d)
    
    void* rcx_28 = var_3b0_1.q
    int64_t* rbx_4 = *(rcx_28 + 0x70)
    void* r14_3 = &rbx_4[sx.q(*(rcx_28 + 0x78)) * 2]
    
    if (rbx_4 != r14_3)
        do
            int64_t* rcx_27 = *rbx_4
            (*(*rcx_27 + 8))(rcx_27, rcx_28 + 0x10)
            rbx_4 = &rbx_4[2]
        while (rbx_4 != r14_3)
        
        rcx_28 = var_3b0_1.q
    
    uint128_t zmm6_2 = *(arg2 + 0x854)
    uint128_t zmm7_2 = arg2[0x10a].d
    uint128_t zmm8_2 = arg2[0x10b].d
    int32_t rax_32 = *(arg2 + 0x84c)
    uint64_t var_398_3 = *(arg2 + 0x844)
    uint128_t zmm2_2
    zmm2_2.d = zmm7_2.d f* zmm7_2.d
    uint128_t zmm0_2
    zmm0_2.d = zmm6_2.d f* zmm6_2.d
    uint128_t zmm1_2
    zmm1_2.d = zmm8_2.d f* zmm8_2.d
    zmm2_2.d = zmm2_2.d f+ zmm0_2.d
    zmm2_2.d = zmm2_2.d f+ zmm1_2.d
    uint64_t var_3a8
    int32_t var_3a0_1
    uint128_t zmm3_2
    uint128_t zmm4_2
    
    if (zmm2_2.d f!= 1f)
        if (zmm2_2.d f>= 9.99999994e-09f)
            zmm4_2 = _mm_rsqrt_ss(zmm2_2.d, zmm2_2.d)
            zmm3_2.d = zmm2_2.d f* 0.5f
            zmm0_2.d = zmm4_2.d f* zmm4_2.d
            zmm1_2.d = zmm3_2.d f* zmm0_2.d
            zmm2_2.d = 0.5f f- zmm1_2.d
            zmm0_2.d = zmm4_2.d f* zmm2_2.d
            zmm4_2.d = zmm4_2.d f+ zmm0_2.d
            zmm1_2.d = zmm4_2.d f* zmm4_2.d
            zmm3_2.d = zmm3_2.d f* zmm1_2.d
            zmm0_2.d = zmm4_2.d f* (0.5f f- zmm3_2.d)
            zmm4_2.d = zmm4_2.d f+ zmm0_2.d
            zmm3_2 = zmm4_2
            int32_t var_328_1 = zmm4_2.d
            zmm0_2.d = zmm3_2.d f* zmm6_2.d
            zmm4_2.d = zmm3_2.d f* zmm7_2.d
            var_3a8:4.d = zmm0_2.d
            zmm1_2 = zmm0_2
            zmm3_2.d = zmm3_2.d f* zmm8_2.d
        else
            zmm1_2 = data_143dbb1fc
            zmm4_2 = data_143dbb1f8
            zmm3_2 = data_143dbb200
            var_3a8:4.d = zmm1_2.d
        
        var_3a0_1 = zmm3_2.d
        var_3a8.d = zmm4_2.d
    else
        zmm0_2 = zx.o(arg2[0x10a])
        var_3a0_1 = arg2[0x10b].d
        zmm3_2 = var_3a0_1
        var_3a8 = zmm0_2.q
        zmm4_2 = var_3a8.d
        zmm1_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
    
    void* r13_2 = *(rcx_28 + 0xa0)
    zmm2_2.d = var_398_3:4.d.d f* zmm1_2.d
    int32_t var_310_1 = var_3a0_1
    zmm0_2.d = var_398_3.d.d f* zmm4_2.d
    zmm1_2.d = rax_32.d f* zmm3_2.d
    zmm2_2.d = zmm2_2.d f+ zmm0_2.d
    void* rax_37 = sx.q(*(rcx_28 + 0xa8)) * 0x5240 + r13_2
    zmm2_2.d = zmm2_2.d f+ zmm1_2.d
    int32_t var_30c_1 = zmm2_2.d
    
    if (r13_2 != rax_37)
        char* r15_4 = r13_2 + 0x6a0
        
        do
            char var_b8
            
            if (var_b8 != 0 && &var_e8 != &r15_4[-0x30])
                if (*r15_4 != 0)
                    *r15_4 = 0
                
                *(r15_4 - 0x30) = var_e8
                uint128_t var_d8
                *(r15_4 - 0x20) = var_d8
                uint128_t var_c8
                *(r15_4 - 0x10) = var_c8
                *r15_4 = 1
            
            r15_4[0x6c4] = *(arg2 + 0x85c) & 1
            
            if (arg2[0x108].b != 0)
                *(r15_4 + 0x6f0) = var_3a8.o
                r15_4[0x548] = 0
            
            int64_t* rbx_5 = *(rcx_28 + 0x70)
            void* r14_6 = &rbx_5[sx.q(*(rcx_28 + 0x78)) * 2]
            
            if (rbx_5 != r14_6)
                do
                    int64_t* rcx_29 = *rbx_5
                    (*(*rcx_29 + 0x10))(rcx_29, rcx_28 + 0x10, r13_2)
                    rbx_5 = &rbx_5[2]
                while (rbx_5 != r14_6)
                
                rcx_28 = var_3b0_1.q
            
            r13_2 += 0x5240
            r15_4 = &r15_4[0x5240]
        while (r13_2 != rax_37)
    
    *(arg2 + 0x85c) &= 0xfffffffe
    void* rax_41 = sub_140cbe180(rsi)
    bool cond:1_1 = arg2[0x4e].d s<= 1
    int32_t rbx_6 = 0
    int32_t var_378_1 = 0
    uint64_t var_380 = 0
    int32_t var_374_1 = 0
    
    if (cond:1_1)
        void* rax_42 = arg2[0x14]
        
        if (rax_42 != 0)
            int64_t var_2f8 = *(rax_42 + 0x18)
            sub_140b63e00(&var_2f8, &var_380)
            rbx_6 = var_378_1
    else if (&var_380 != &arg2[0x4d])
        rbx_6 = arg2[0x4e].d
        int64_t r15_5 = arg2[0x4d]
        
        if (rbx_6 != 0)
            sub_1405a4c70(&var_380, rbx_6, 0)
            memcpy(var_380, r15_5, rbx_6 * 2)
            rbx_6 = rbx_6
    
    char rcx_35 = *(rsi + 0xdd)
    char r15_6 = *(rsi + 0xdc) & 1
    int64_t* var_338
    
    if (rcx_35 != 0)
        int32_t rax_44
        rax_44.b = rcx_35 == 2
        var_338.d = rax_44 + 1
    else
        var_338.d = 0
    
    char rcx_36 = *(rsi + 0xde)
    
    if (rcx_36 != 0)
        int32_t rax_46
        rax_46.b = rcx_36 == 2
        var_338:4.d = rax_46 + 1
    else
        var_338:4.d = 0
    
    char rcx_37 = *(rsi + 0xdf)
    
    if (rcx_37 != 0)
        int32_t rax_48
        rax_48.b = rcx_37 == 2
        int32_t var_330_2 = rax_48 + 1
    else
        int32_t var_330_1 = 0
    
    int64_t* rax_50 = var_3b0_1.q
    char rdi_1 = arg2[0x10c].b
    uint64_t r14_8 = var_380
    int32_t var_32c_1 = 1
    uint64_t var_360 = 0
    int32_t var_354
    
    if (rbx_6 != 0)
        sub_1405a4c70(&var_360, rbx_6, 0)
        memcpy(var_360, r14_8, rbx_6 * 2)
    else
        var_354 = 0
    
    uint128_t var_34c = var_338.o
    
    if (sub_140a80f40() == 0)
        uint32_t rax_53
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_53.b = GetCurrentThreadId() == data_143de5470
        
        int32_t var_358_1
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_53.b == 0))
            void var_108
            void** rax_61 = sub_14141ba30(&var_108, nullptr, 0xff)
            void* rdx_21 = *rax_61
            *(rdx_21 + 0x10) = rax_50
            *(rdx_21 + 0x18) = rax_41
            *(rdx_21 + 0x20) = 0
            *(rdx_21 + 0x20) = var_360
            var_360 = 0
            *(rdx_21 + 0x28) = rbx_6
            *(rdx_21 + 0x2c) = var_354
            var_358_1.q = 0
            *(rdx_21 + 0x30) = r15_6
            *(rdx_21 + 0x34) = var_34c
            *(rdx_21 + 0x44) = rdi_1
            void* rcx_47 = *rax_61
            int32_t rax_65 = rax_61[2].d
            int64_t* rdx_22 = rax_61[1]
            int64_t* rbx_8 = *(rcx_47 + 0x50)
            int64_t* var_318_2 = rbx_8
            void* rdi_3 = &rbx_8[9]
            
            if (rbx_8 != 0)
                *rdi_3 += 1
                rbx_8 = var_318_2
            
            result = sub_14080ccb0(rcx_47, rdx_22, rax_65, 1)
            
            if (rbx_8 != 0)
                int32_t r12_3 = *rdi_3
                *rdi_3 -= 1
                
                if (r12_3 == 1)
                    result = sub_140a2f6e0(var_318_2)
        else
            zmm0_2 = var_34c
            int64_t* var_2f0 = rax_50
            void* var_2e8_1 = rax_41
            uint64_t rax_56 = var_360
            int32_t var_2d8_1 = rbx_6
            int32_t var_2d4_1 = var_354
            char var_2d0_1 = r15_6
            char var_2bc_1 = rdi_1
            var_360 = 0
            var_358_1.q = 0
            uint128_t var_2cc_1 = zmm0_2
            result = sub_141415240(&var_2f0, &data_143f02b98)
            
            if (rax_56 != 0)
                result = sub_140a74f90(rax_56)
    else
        zmm1_2 = data_142d3f800
        int64_t* rdi_2 = rax_41 + 0x48
        
        if (rax_41 == 0)
            rdi_2 = nullptr
        
        uint128_t var_278 = data_142d57d10
        uint128_t var_268_1 = zmm1_2
        uint128_t var_258_1 = data_142d57920
        int128_t zmm2_3
        int128_t zmm3_3
        zmm2_3, zmm3_3 = sub_142134440()
        int32_t rsi_1
        rsi_1.b = *(rax_50[1] + 8) s>= 3
        uint128_t* var_3f8_1
        uint32_t var_3f0_1
        
        if (rsi_1 == 0)
            char var_3e8_2 = rdi_1
            var_3f0_1.q = &var_34c
            var_3f8_1.b = r15_6
            var_408.q = &var_360
            sub_1412e7c40(&data_143f02b98, rax_50, rdi_2, rax_41, zmm2_3, zmm3_3, var_408, 
                &var_278, var_3f8_1, var_3f0_1.b)
            result = sub_1410e0370(&data_143f02b98)
        else if (rsi_1 != 1)
            result = sub_1410e0370(&data_143f02b98)
        else
            var_3f0_1.q = &var_34c
            var_3f8_1.b = r15_6
            var_408.q = &var_360
            sub_1414318f0(&data_143f02b98, rax_50, rdi_2, rax_41, var_408, &var_278, var_3f8_1)
            result = sub_1410e0370(&data_143f02b98)
    
    uint64_t rcx_49 = var_360
    
    if (rcx_49 != 0)
        result = sub_140a74f90(rcx_49)
    
    uint64_t rcx_50 = var_380
    
    if (rcx_50 != 0)
        result = sub_140a74f90(rcx_50)

__security_check_cookie(result_1 ^ &var_428)
return result
