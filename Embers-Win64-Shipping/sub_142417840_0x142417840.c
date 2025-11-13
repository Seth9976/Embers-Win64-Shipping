// 函数: sub_142417840
// 地址: 0x142417840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg6
int16_t* rsi = nullptr
*result = 0xffffffff
void* rbx = *(arg1 + 0x18)
*(arg1 + 8) = 0

if (rbx != 0)
    int32_t var_a4
    float var_a0
    uint128_t zmm6_1
    int512_t zmm9_1
    int128_t zmm11_1
    zmm6_1, zmm9_1, zmm11_1 = sub_142003d30(rbx, 0x30, &var_a4, &var_a0)
    
    if (not(var_a4 f!= 0f))
        zmm6_1, zmm9_1, zmm11_1 = sub_142003d30(rbx, 0x41, &var_a4, &var_a0)
    
    int16_t* rbx_1 = arg2
    *(arg1 + 0x10)
    zmm9_1.o = *(arg1 + 0x14)
    *(arg1 + 0x20)
    
    if (*arg2 != 0)
        void* i = &arg2[sx.q(arg3)]
        int128_t var_88_1 = zmm11_1
        void* i_1 = i
        uint128_t var_38_1 = zmm6_1
        
        for (; rbx_1 u< i; i = i_1)
            int16_t rbp_1 = *rbx_1
            float var_a8
            float arg_8
            uint128_t zmm7_2
            int32_t zmm8_2
            float zmm9_2[0x4]
            int32_t zmm10_1
            zmm7_2, zmm8_2, zmm9_2, zmm10_1 = sub_142003d30(*(arg1 + 0x18), rbp_1, &arg_8, &var_a8)
            float zmm1_1 = var_a8
            
            if (not(zmm1_1 f!= zmm10_1) && rbp_1 == 0xa)
                zmm1_1 = var_a0
                var_a8 = zmm1_1
            
            zmm6_1 = zmm7_2
            
            if (rsi != 0)
                char rax_1
                int32_t zmm7_3
                rax_1, zmm7_3, zmm8_2, zmm9_2 = sub_142003bb0(*(arg1 + 0x18), *rsi, rbp_1)
                zmm1_1 = var_a8
                zmm6_1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_1))).d f* zmm8_2
                zmm6_1.d = zmm6_1.d f+ zmm7_3
            
            float zmm0_2[0x4] = arg_8
            wint_t _C = rbx_1[1]
            zmm0_2[0] = zmm0_2[0] f* zmm8_2
            zmm1_1 = zmm1_1 * zmm9_2[0]
            arg_8 = zmm0_2[0]
            var_a8 = zmm1_1
            int32_t rax_2 = iswspace(_C)
            
            if (rax_2 != 0 || rbx_1[1] == rax_2.w)
                zmm1_1 = arg_8
            else
                zmm1_1 = arg_8 f+ zmm6_1.d
                arg_8 = zmm1_1
            
            zmm9_2[0] = zmm9_2[0] f* *(arg1 + 0x24)
            float zmm2_1 = zmm1_1 f+ *(arg1 + 8)
            zmm9_2[0] = zmm9_2[0] + var_a8
            *(arg1 + 8) = zmm2_1
            *(arg1 + 0xc) = __maxss_xmmss_memss(zmm9_2[0], *(arg1 + 0xc))[0]
            
            if (arg4 != 0xffffffff)
                if (arg5 == 1)
                    int16_t rax_3
                    rax_3, zmm11_1 = sub_142003a40(*(arg1 + 0x18), rbp_1)
                    float zmm0_3 = *(arg1 + 8)
                    uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(arg4))
                    uint128_t zmm2_2
                    zmm2_2.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_3))).d f+ arg_8
                    zmm2_2.d = zmm2_2.d f* zmm11_1.d
                    
                    if (zmm1_2.d f< zmm0_3 f- zmm2_2.d)
                        break
                else if (arg5 == 0 && _mm_cvtepi32_ps(zx.o(arg4))[0] < zmm2_1 - zmm1_1)
                    rbx_1 -= 2
                    break
            
            bool cond:0_1 = rbx_1[1] == 0
            rsi = rbx_1
            rbx_1 = &rbx_1[1]
            
            if (cond:0_1)
                break
    
    result = arg6
    *result = ((rbx_1 - arg2) s>> 1).d

return result
