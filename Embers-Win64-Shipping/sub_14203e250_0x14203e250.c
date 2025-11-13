// 函数: sub_14203e250
// 地址: 0x14203e250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* result

if (arg2 == 0)
    result = nullptr
else
    int64_t* rax_3 = sub_141fe6490(arg2, arg3)
    
    if (rax_3 == 0)
        result = nullptr
    else
        int64_t* rcx_1 = data_143f5b298
        
        if (rcx_1 == 0)
            result = nullptr
        else
            int64_t r8 = *rcx_1
            
            if ((*(r8 + 0x388))(rcx_1, arg5, r8) == 0)
                result = nullptr
            else
                void* rax_5 = sub_1423de540(data_143f5b298, arg1, 1)
                
                if (rax_5 == 0 || (*(rax_5 + 0x11e) & 2) == 0)
                    result = nullptr
                else
                    char rax_6 = sub_14243ade0(rax_5)
                    int64_t var_108
                    sub_141e714a0(&var_108, rax_5, 0)
                    int32_t var_120_1 = arg4[1].d
                    int64_t var_128 = *arg4
                    float zmm0_2[0x4] = sub_141e86f40(&var_108, &var_128)
                    var_108 = arg10
                    int64_t* result_1 = sub_141e78140(rax_3, &var_108, zmm0_2)
                    
                    if (result_1 != 0)
                        int32_t rax_7 = arg6[1].d
                        var_128 = *arg6
                        char rbx_2 = 0
                        int32_t var_120_2 = rax_7
                        int32_t rax_8 = arg4[1].d
                        char var_130_1 = 0
                        int64_t var_118 = *arg4
                        int32_t var_110_1 = rax_8
                        char r8_2
                        int128_t zmm6_1
                        int128_t zmm8_1
                        r8_2, zmm6_1, zmm8_1 =
                            sub_141f4a260(result_1, &var_118, &var_128, 0, 0, var_130_1)
                        char r8_3
                        int128_t zmm7_1
                        r8_3, zmm7_1 = sub_141ef78b0(result_1, zmm6_1, r8_2)
                        int32_t zmm0_4
                        int512_t zmm1_2
                        zmm0_4, zmm1_2 = sub_141ef68b0(result_1, zmm7_1, r8_3)
                        result_1[0x42].b &= 0xb7
                        
                        if (rax_6 == 0)
                            rbx_2 = 0x40
                        
                        result_1[0x42].b =
                            ((rbx_2 | result_1[0x42].b) & 0xfe) | (rax_6 & 0xf7) << 3 | arg11
                        (*(*rax_3 + 0x2a8))(rax_3)
                        zmm1_2.o = zmm8_1
                        result_1[0x48].d = zmm0_4
                        (*(*result_1 + 0x530))(result_1, zmm1_2)
                    
                    sub_141afcf50(&var_108)
                    result = result_1

__security_check_cookie(rax_1 ^ &var_158)
return result
