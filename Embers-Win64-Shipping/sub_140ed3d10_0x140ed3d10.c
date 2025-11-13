// 函数: sub_140ed3d10
// 地址: 0x140ed3d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
int32_t zmm0 = sub_140f6be50(arg1)
void* r12 = arg1[0xdc]

if (r12 == 0 || *(r12 + 8) s<= 0)
    __builtin_memset(result, 0, 0x19)
else
    int128_t zmm0_1
    int512_t zmm6_1
    zmm0_1, zmm6_1 = sub_140f75d80(arg1, zmm0)
    zmm6_1.o = zmm0_1
    int32_t zmm0_2
    int64_t zmm6_2
    zmm0_2, zmm6_2 = sub_140f76110(arg1, zmm0_1.d)
    void var_b8
    sub_140f66450(&var_b8, arg1[0x9b].d, zmm0_2, zmm6_2.d)
    void var_c8
    sub_140f66410(&var_c8, arg1[0x9b].d, arg3)
    int32_t r13_1 = *(r12 + 8)
    int32_t rax_2 = (*(*arg1 + 0x268))(arg1)
    double zmm2_2 = arg1[0x7d]
    int32_t r8_1 = r13_1
    int64_t* rdi_1 = zx.q(rax_2)
    zmm6_2 = (zx.o(0)).q
    int32_t temp1_1 = mods.dp.d(sx.q(r13_1), rdi_1.d)
    uint64_t zmm7_1 = _mm_cvtepi32_pd(zx.q(rdi_1.d)).q
    
    if (temp1_1 != 0)
        r8_1 = rdi_1.d - temp1_1 + r13_1
    
    int32_t var_c4
    int32_t var_b4
    double zmm1_1
    double zmm8_1[0x2]
    
    if (zmm2_2 >= 0.0)
        double zmm0_3[0x2] = var_c4
        zmm0_3[0].d = zmm0_3[0].d f/ var_b4
        zmm8_1 = _mm_cvtepi32_pd(zx.o(r8_1)[0])
        zmm1_1 = _mm_cvtps_pd(zmm0_3[0]).q f* zmm7_1
        zmm8_1[0] = zmm8_1[0] - zmm1_1
        zmm8_1 = _mm_min_sd(zmm8_1[0], zmm2_2)
    else
        zmm8_1 = zx.o(0)
    
    int128_t zmm12 = arg3[2]
    void var_d8
    sub_140f66400(&var_d8, arg1[0x9b].d)
    zmm8_1[0] = zmm8_1[0] f/ zmm7_1
    int128_t zmm9 = _mm_cvtpd_ps(zmm8_1)
    zmm1_1.d = zmm9.q.d f+ zmm9.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t rcx_11 = (int.d(zmm1_1.d) s>> 1) * rdi_1.d
    
    if (rcx_11 s<= 0)
        rcx_11 = 0
    
    sub_140e997c0(&arg1[0xb6], &arg1[0xb3])
    sub_14095cd40(&arg1[0xb3], 0)
    int32_t rax_7 = rcx_11
    rdi_1.b = 0
    zmm7_1 = 0x3f800000
    int64_t rsi
    rsi.b = 1
    int64_t rbp
    rbp.b = 0
    zmm2_2 = var_c4
    char r14 = 1
    int32_t rbx_1 = rax_7
    
    while (rbx_1 s< r13_1)
        rdi_1 = (sx.q(rbx_1) << 4) + *r12
        int32_t var_d4
        
        if (rsi.b != 0)
            rsi.b = 0
            double zmm0_4 = zmm7_1
            
            if (r14 != 0)
                r14 = 0
                zmm0_4 = zmm9.q
                truncf(zmm0_4.d)
                zmm2_2 = var_c4
                rax_7 = rcx_11
                zmm1_1.d = zmm9.q.d f- zmm0_4.d
                zmm0_4.d = zmm7_1.d f- zmm1_1.d
            
            zmm1_1.d = zmm0_4.d f* var_b4
            zmm1_1.d = zmm1_1.d f+ var_d4
            var_d4 = zmm1_1.d
            
            if (not(zmm1_1.d f<= zmm2_2.d))
                zmm1_1.d = zmm1_1.d f- zmm2_2.d
                zmm1_1.d = zmm1_1.d f/ var_b4
                zmm0_4.d = zmm7_1.d f- zmm1_1.d
                _mm_max_ss(zmm0_4.d, 0)
        
        zmm6_2, zmm7_1 = sub_140ebd2a0(arg1, rdi_1, rbx_1, rax_7, zmm12.d)
        int32_t var_d0
        int32_t var_b0
        zmm1_1.d = var_d0.d f+ var_b0
        rdi_1.b = rbx_1 s>= r13_1 - 1
        var_d0 = zmm1_1.d
        zmm1_1.d = zmm1_1.d f+ var_b0
        int32_t var_c0
        
        if (not(zmm1_1.d f<= var_c0))
            var_d0 = 0
            rsi.b = 1
        
        zmm2_2 = var_c4
        
        if (rbx_1 s>= r13_1 - 1 || rsi.b != 0)
            zmm1_1.d = zmm2_2.d f+ 0.00100000005f
            rbp.b = var_d4.d f> zmm1_1.d
        
        rax_7 = rcx_11
        rbx_1 += 1
        
        if (rbp.b != 0)
            break
    
    sub_140ed3350(&arg1[0x9e])
    sub_140edf010(&arg1[0x9e])
    float zmm1_2[0x4] = zx.o(0)
    result = arg2
    zmm1_2[0] = fconvert.s(zmm6_2)
    int32_t rcx_17 = int.d(zmm1_2[0])
    
    if (rcx_17 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_17)).d f== zmm1_2[0]))
        zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_17
            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1) ^ 1)))
    
    zmm1_2[0] = zmm1_2[0] f* var_b4
    uint128_t zmm0_5 = _mm_cvtps_pd(zmm1_2[0].q)
    *result = zmm8_1.q
    result[2] = zmm6_2
    result[1] = zmm0_5.q

return result
