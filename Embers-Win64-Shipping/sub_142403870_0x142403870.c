// 函数: sub_142403870
// 地址: 0x142403870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t* r12 = arg5
int16_t* i_1 = nullptr
*arg4 = 0
*r12 = 0

if (arg1 != 0)
    int16_t* i = arg6
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (i[rdi_1] != 0)
    
    float var_98
    int32_t arg_20
    uint128_t zmm6_1
    float zmm7_1
    float zmm8_1
    int32_t zmm9_1
    zmm6_1, zmm7_1, zmm8_1, zmm9_1 = sub_142003d30(arg1, 0x30, &arg_20, &var_98)
    
    if (not(arg_20 f!= zmm9_1))
        zmm6_1, zmm7_1, zmm8_1 = sub_142003d30(arg1, 0x41, &arg_20, &var_98)
    
    if (*i != 0)
        uint128_t var_38_1 = zmm6_1
        
        while (i u< &i[sx.q(rdi_1.d)])
            int16_t rdi_2 = *i
            float arg_8
            uint128_t zmm9_2
            float zmm10_1
            float zmm11_1
            zmm7_1, zmm8_1, zmm9_2, zmm10_1, zmm11_1 = sub_142003d30(arg1, rdi_2, &arg5, &arg_8)
            float zmm1_1 = arg_8
            
            if (not(zmm1_1 f!= zmm9_2.d) && rdi_2 == 0xa)
                zmm1_1 = var_98
                arg_8 = zmm1_1
            
            zmm6_1 = zmm9_2
            
            if (i_1 != 0)
                char rax_1
                rax_1, zmm7_1, zmm8_1, zmm10_1, zmm11_1 = sub_142003bb0(arg1, *i_1, rdi_2)
                zmm1_1 = arg_8
                zmm6_1.d = _mm_cvtepi32_ps(zx.o(sx.d(rax_1))).d f* zmm10_1
            
            wint_t _C = i[1]
            arg5.d = arg5.d * zmm10_1
            arg_8 = zmm1_1 * zmm11_1
            int32_t rax_2 = iswspace(_C)
            float zmm0_2
            
            if (rax_2 != 0 || i[1] == rax_2.w)
                zmm0_2 = arg5.d
            else
                zmm0_2 = arg5.d f+ zmm6_1.d
                arg5.d = zmm0_2
            
            zmm1_1 = arg_8
            zmm8_1 = zmm8_1 + zmm0_2
            
            if (not(zmm7_1 >= zmm1_1))
                zmm7_1 = zmm1_1
            
            bool cond:0_1 = i[1] != 0
            i_1 = i
            i = &i[1]
            
            if (not(cond:0_1))
                break
    
    *arg4 = int.d(zmm8_1)
    result = int.d(zmm7_1)
    *r12 = result

return result
