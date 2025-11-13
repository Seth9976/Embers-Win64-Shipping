// 函数: sub_1424235b0
// 地址: 0x1424235b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* i = arg4
int64_t rdi = -1

do
    rdi += 1
while (arg4[rdi] != 0)

int128_t zmm9 = zx.o(0)
int128_t zmm8 = zx.o(0)

if (arg1 != 0)
    float var_88
    int32_t arg_18
    uint128_t zmm6_1
    int32_t zmm7_1
    zmm6_1, zmm7_1, zmm8, zmm9 = sub_142003d30(arg1, 0x30, &arg_18, &var_88)
    
    if (not(arg_18 f!= zmm7_1))
        zmm6_1, zmm8, zmm9 = sub_142003d30(arg1, 0x41, &arg_18, &var_88)
    
    int16_t* i_1 = nullptr
    
    if (*i != 0)
        uint128_t var_48_1 = zmm6_1
        
        while (i u< &i[sx.q(rdi.d)])
            int16_t rdi_1 = *i
            float arg_8
            float arg_10
            uint128_t zmm7_2
            zmm7_2, zmm8, zmm9 = sub_142003d30(arg1, rdi_1, &arg_8, &arg_10)
            
            if (not(arg_10 f!= zmm7_2.d) && rdi_1 == 0xa)
                arg_10 = var_88
            
            zmm6_1 = zmm7_2
            
            if (i_1 != 0)
                char rax_2
                rax_2, zmm8, zmm9 = sub_142003bb0(arg1, *i_1, rdi_1)
                zmm6_1 = _mm_cvtepi32_ps(zx.o(sx.d(rax_2)))
            
            int32_t rax_3 = iswspace(i[1])
            float zmm0_2
            
            if (rax_3 != 0 || i[1] == rax_3.w)
                zmm0_2 = arg_8
            else
                zmm0_2 = arg_8 f+ zmm6_1.d
                arg_8 = zmm0_2
            
            int128_t zmm1_1 = arg_10
            zmm9.d = zmm9.d f+ zmm0_2
            
            if (not(zmm8.d f>= zmm1_1.d))
                zmm8 = zmm1_1
            
            bool cond:0_1 = i[1] != 0
            i_1 = i
            i = &i[1]
            
            if (not(cond:0_1))
                break

*arg2 = int.d(zmm9.d)
int32_t result = int.d(zmm8.d)
*arg3 = result
return result
