// 函数: sub_141770e20
// 地址: 0x141770e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa) = 1
int32_t r8 = *(arg1 + 0x2c)
int32_t r12 = 1
int32_t rdi = *(arg1 + 0x30)
int32_t rbx_1 = *(arg1 + 0x2c) * *(arg1 + 0x30)
int32_t* r11 = *arg2
char arg_8 = 1
int32_t arg_10 = rbx_1
int32_t r9_2 = r8 * rdi * *(arg1 + 0x28)
int64_t result = &r11[sx.q(arg2[1].d) * 3]
int64_t result_1 = result

if (r11 != result)
    int64_t r10_1 = *(arg1 + 0x50)
    int128_t zmm1 = zx.o(0)
    float zmm5 = 4f
    int128_t zmm6 = 0x3f000000
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int128_t zmm10
    int128_t var_98_1 = zmm10
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    int128_t zmm12
    int128_t var_b8_1 = zmm12
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    int128_t zmm15
    int128_t var_e8_1 = zmm15
    
    while (true)
        int32_t result_2 = (r8 * *r11 + r11[1]) * rdi + r11[2]
        result = sx.q(result_2)
        float zmm2 = *(r10_1 + (result << 2))
        
        if (not(zmm2 f> zmm1.d))
            int128_t zmm4 = *(arg1 + 0x34)
            int32_t result_23 = result_2 + rbx_1
            zmm11 = *(arg1 + 0x38)
            zmm2 = zmm2 + zmm2
            zmm13 = *(arg1 + 0x3c)
            int32_t result_3 = result_2
            
            if (result_23 s< r9_2)
                result_3 = result_23
            
            int32_t result_25 = result_2 - rbx_1
            int32_t rbx_2 = *(arg1 + 0x30)
            int32_t result_18 = result_2
            int32_t result_22 = result_2 + rbx_2
            zmm1 = *(r10_1 + (sx.q(result_3) << 2))
            int32_t result_4 = result_2
            
            if (result_2 - rbx_1 s>= 0)
                result_4 = result_25
            
            zmm14 = *(r10_1 + (sx.q(result_4) << 2))
            int32_t result_5 = result_2
            
            if (result_22 s< r9_2)
                result_5 = result_22
            
            zmm8.d = zmm1.d f- zmm14.d
            zmm14.d = zmm14.d f+ zmm1.d
            int32_t result_24 = result_2 - rbx_2
            zmm1 = *(r10_1 + (sx.q(result_5) << 2))
            int32_t result_6 = result_2
            
            if (result_2 - rbx_2 s>= 0)
                result_6 = result_24
            
            zmm8.d = zmm8.d f* zmm6.d f/ zmm4.d
            zmm14.d = zmm14.d f- zmm2
            zmm15 = *(r10_1 + (sx.q(result_6) << 2))
            int32_t result_7 = result_2
            
            if (result_2 + 1 s< r9_2)
                result_7 = result_2 + 1
            
            zmm9.d = zmm1.d f- zmm15.d
            zmm14.d = zmm14.d f/ (zmm4.d f* zmm4.d)
            int32_t result_9 = result_2
            zmm15.d = zmm15.d f+ zmm1.d
            zmm1 = *(r10_1 + (sx.q(result_7) << 2))
            int32_t result_8 = result_2
            
            if (result_2 - 1 s>= 0)
                result_8 = result_2 - 1
            
            float zmm3 = *(r10_1 + (sx.q(result_8) << 2))
            zmm15.d = zmm15.d f- zmm2
            zmm9.d = zmm9.d f* zmm6.d f/ zmm11.d
            int32_t result_21 = result_23 + rbx_2
            zmm12.d = zmm1.d f- zmm3
            
            if (result_21 s< r9_2)
                result_9 = result_21
            
            zmm15.d = zmm15.d f/ (zmm11.d f* zmm11.d)
            
            if (result_25 - rbx_2 s>= 0)
                result_18 = result_25 - rbx_2
            
            int32_t result_15 = rbx_2 + result_25
            zmm12.d = zmm12.d f* zmm6.d f/ zmm13.d
            float arg_18 = (zmm3 f+ zmm1.d - zmm2) / (zmm13.d f* zmm13.d)
            
            if (rbx_2 + result_25 s< 0 || r9_2 s<= result_15)
                result_15 = result_2
            
            int32_t result_12 = arg_10 + result_24
            
            if (arg_10 + result_24 s< 0 || r9_2 s<= result_12)
                result_12 = result_2
            
            int32_t result_19 = result_2
            zmm4.d = zmm4.d f* zmm5
            zmm7.d = (*(r10_1 + (sx.q(result_18) << 2))).d f+ *(r10_1 + (sx.q(result_9) << 2))
            int32_t result_10 = result_2
            zmm7.d = zmm7.d f- *(r10_1 + (sx.q(result_15) << 2))
            int32_t result_13 = result_25 + 1
            zmm7.d = zmm7.d f- *(r10_1 + (sx.q(result_12) << 2))
            
            if (result_23 + 1 s< r9_2)
                result_10 = result_23 + 1
            
            zmm7.d = zmm7.d f/ (zmm11.d f* zmm4.d)
            
            if (result_25 - 1 s>= 0)
                result_19 = result_25 - 1
            
            if (result_13 s< 0 || r9_2 s<= result_13)
                result_13 = result_2
            
            int32_t result_16 = result_23 - 1
            
            if (result_23 s<= 0 || r9_2 s<= result_16)
                result_16 = result_2
            
            int32_t result_20 = result_2
            int32_t result_11 = result_2
            int32_t result_14 = result_24 + 1
            
            if (result_22 + 1 s< r9_2)
                result_11 = result_22 + 1
            
            result = zx.q(result_24 - 1)
            zmm3 = (*(r10_1 + (sx.q(result_19) << 2)) f+ *(r10_1 + (sx.q(result_10) << 2)) f-
                *(r10_1 + (sx.q(result_13) << 2)) f- *(r10_1 + (sx.q(result_16) << 2)))
                / (zmm13.d f* zmm4.d)
            
            if (result.d s>= 0)
                result_20 = result.d
            
            if (result_14 s< 0 || r9_2 s<= result_14)
                result_14 = result_2
            
            int32_t result_17 = result_22 - 1
            
            if (result_22 s<= 0 || r9_2 s<= result_17)
                result_17 = result_2
            
            zmm4.d = zmm8.d f* zmm8.d
            zmm5 = zmm9.d f* zmm9.d
            zmm6.d = zmm12.d f* zmm12.d
            zmm2 = zmm4.d + zmm5 f+ zmm6.d
            zmm10 = _mm_sqrt_ss(zx.o(0).d, zmm2)
            
            if (zmm10.d f<= 9.99999994e-09f)
                zmm5 = 4f
            else
                zmm8.d = zmm8.d f+ zmm8.d
                zmm1 = zmm4
                zmm4.d = zmm4.d f* arg_18
                zmm1.d = zmm1.d f* zmm15.d
                float zmm0 = zmm8.d f* zmm9.d
                zmm9.d = zmm9.d f+ zmm9.d
                zmm8.d = zmm8.d f* zmm12.d
                zmm8.d = zmm8.d f* zmm3
                zmm1.d = zmm1.d f- zmm0 f* zmm7.d
                zmm9.d = zmm9.d f* zmm12.d
                zmm1.d = zmm1.d f+ zmm5 f* zmm14.d
                zmm0 = zmm6.d f* zmm14.d
                zmm6.d = zmm6.d f* zmm15.d
                zmm1.d = zmm1.d f+ zmm4.d
                zmm1.d = zmm1.d f- zmm8.d
                zmm1.d = zmm1.d f+ zmm0
                zmm1.d = zmm1.d f+ zmm5 * arg_18
                zmm5 = 4f
                zmm11.d = zmm11.d f* 4f
                zmm11.d = zmm11.d f* zmm13.d
                zmm0 = (*(r10_1 + (sx.q(result_20) << 2)) f+ *(r10_1 + (sx.q(result_11) << 2)) f-
                    *(r10_1 + (sx.q(result_14) << 2)) f- *(r10_1 + (sx.q(result_17) << 2))) f/ zmm11.d
                zmm1.d = zmm1.d f- zmm0 f* zmm9.d
                zmm1.d = zmm1.d f+ zmm6.d
                zmm1.d = zmm1.d f/ (zmm2 f* zmm10.d)
                
                if (zmm1.d f>= -9.99999975e-05f)
                    int32_t rax_21
                    rax_21.b = zmm1.d f<= 9.99999975e-05f
                    result = zx.q(rax_21 - 1)
                else
                    result = 1
                
                if (arg_8 != 0)
                    r12 = result.d
                    arg_8 = 0
                else if (result.d != 0 && r12 != result.d)
                    *(arg1 + 0xa) = 0
                    break
            
            rdi = *(arg1 + 0x30)
            zmm1 = zx.o(0)
            rbx_1 = arg_10
            zmm6 = 0x3f000000
        
        r11 = &r11[3]
        
        if (r11 == result_1)
            break
        
        r8 = *(arg1 + 0x2c)

return result
