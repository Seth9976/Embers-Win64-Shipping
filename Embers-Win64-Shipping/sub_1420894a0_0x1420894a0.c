// 函数: sub_1420894a0
// 地址: 0x1420894a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x78))

if (rcx.d == 0)
    int512_t zmm0
    zmm0.o = zx.o(0)
    return zmm0

void arg_8
float arg_20

if (rcx.d s>= 2)
    int32_t* r9_1 = *(arg1 + 0x70)
    
    if (not(arg3.d f<= *r9_1))
        int32_t r8_1 = (rcx - 1).d
        
        if (not(arg3.d f< r9_1[rcx * 5 - 5]))
            sub_142093920(arg1, arg2, r8_1, &arg_8, &arg_20, nullptr, nullptr)
            return arg_20
        
        int32_t rdi_1 = 1
        
        if (rcx.d s> 1)
            int64_t rcx_2 = 1
            void* rax_2 = &r9_1[5]
            
            do
                if (arg3.d f< *rax_2)
                    int64_t rax_3 = sx.q(rdi_1)
                    int64_t rcx_4 = rax_3 * 5
                    int32_t zmm1 = r9_1[rcx_4 - 5]
                    int128_t zmm8
                    zmm8.d = r9_1[rax_3 * 5].d f- zmm1
                    
                    if (not(zmm8.d f<= 0f))
                        char rax_5 = r9_1[rcx_4 - 1].b
                        
                        if (rax_5 != 2)
                            int128_t zmm7
                            zmm7.d = arg3.d f- zmm1
                            int32_t* r9_4 = &arg_8
                            zmm7.d = zmm7.d f/ zmm8.d
                            float var_58
                            
                            if (rax_5 == 0)
                                sub_142093920(arg1, arg2, rdi_1 - 1, r9_4, &var_58, nullptr, 
                                    nullptr)
                                float zmm7_1 = sub_142093920(arg1, arg2, rdi_1, &arg_8, &arg_20, 
                                    nullptr, nullptr)
                                return (arg_20 - var_58) * zmm7_1 + var_58
                            
                            sub_142093920(arg1, arg2, rdi_1 - 1, r9_4, &var_58, nullptr, &arg_20)
                            float var_54
                            float var_50
                            float zmm7_2
                            float zmm8_1
                            zmm7_2, zmm8_1 =
                                sub_142093920(arg1, arg2, rdi_1, &arg_8, &var_50, &var_54, nullptr)
                            float zmm3_1 = zmm7_2 * zmm7_2
                            float zmm6_1 = zmm3_1 * zmm7_2
                            float zmm5_1 = zmm3_1 * 3f
                            float zmm4_1 = zmm6_1 + zmm6_1
                            return (zmm6_1 - (zmm3_1 + zmm3_1) + zmm7_2) * arg_20 * zmm8_1
                                + (zmm4_1 - zmm5_1 + 1f) * var_58
                                + (zmm6_1 - zmm3_1) * var_54 * zmm8_1 + (zmm5_1 - zmm4_1) * var_50
                    
                    sub_142093920(arg1, arg2, rdi_1 - 1, &arg_8, &arg_20, nullptr, nullptr)
                    return arg_20
                
                rdi_1 += 1
                rcx_2 += 1
                rax_2 += 0x14
            while (rcx_2 s< rcx)
        
        sub_142093920(arg1, arg2, r8_1, &arg_8, &arg_20, nullptr, nullptr)
        return arg_20

sub_142093920(arg1, arg2, 0, &arg_8, &arg_20, nullptr, nullptr)
return arg_20
