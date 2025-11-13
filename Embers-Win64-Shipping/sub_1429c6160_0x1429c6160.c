// 函数: sub_1429c6160
// 地址: 0x1429c6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t i_2 = zx.q(arg3)
int32_t* result = __CheckForDebuggerJustMyCode(&data_14427d007)

if (i_2.d s> 0)
    int64_t rsi_1 = 0
    result = nullptr
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    int128_t zmm13
    int128_t var_b8_1 = zmm13
    int64_t var_118_1 = 0
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        int32_t* result_1 = result
        int64_t j_1 = 3
        int64_t j
        
        do
            int32_t rdi_1 = *(result + arg1)
            int32_t rbx_1 = rdi_1 & 3
            int32_t rdi_2 = rdi_1 s>> 2
            int32_t var_108
            (*(*arg2 + 0x10))(arg2, &var_108, zx.q(rdi_2), zx.q(rbx_1))
            int32_t var_f8
            (*(*arg2 + 0x18))(arg2, &var_f8, zx.q(rdi_2), zx.q(rbx_1))
            int32_t var_138
            (*(*arg2 + 0x20))(arg2, &var_138, zx.q(rdi_2), zx.q(rbx_1))
            int32_t var_100
            zmm6 = var_100
            int32_t r14_1 = 0
            int32_t var_104
            zmm7 = var_104
            int32_t r13_1 = 0
            zmm13 = var_108
            int64_t rbp_1 = 0
            int32_t var_f0
            zmm8 = var_f0
            int32_t var_f4
            zmm9 = var_f4
            zmm10 = var_f8
            int32_t var_134
            zmm11 = var_134
            zmm12 = var_138
            
            while (rbp_1 s<= rsi_1)
                int64_t k = 0
                
                if (r14_1 == 0)
                    for (; k s< 3; k += 1)
                        int32_t rdi_3 = *(arg1 + ((rbp_1 * 3 + k) << 2))
                        int32_t rbx_3 = rdi_3 & 3
                        int32_t rdi_4 = rdi_3 s>> 2
                        float var_e8
                        (*(*arg2 + 0x10))(arg2, &var_e8, zx.q(rdi_4), zx.q(rbx_3))
                        float var_d8
                        (*(*arg2 + 0x18))(arg2, &var_d8, zx.q(rdi_4), zx.q(rbx_3))
                        float var_130
                        (*(*arg2 + 0x20))(arg2, &var_130, zx.q(rdi_4), zx.q(rbx_3))
                        float temp3_1 = var_e8
                        zmm13.d f- temp3_1
                        
                        if (not(is_unordered.d(zmm13.d, temp3_1)) && not(zmm13.d f!= temp3_1))
                            float var_e4
                            zmm7.d f- var_e4
                            
                            if (not(is_unordered.d(zmm7.d, var_e4)) && not(zmm7.d f!= var_e4))
                                float var_e0
                                zmm6.d f- var_e0
                                
                                if (not(is_unordered.d(zmm6.d, var_e0)) && not(zmm6.d f!= var_e0))
                                    float temp6_1 = var_d8
                                    zmm10.d f- temp6_1
                                    
                                    if (not(is_unordered.d(zmm10.d, temp6_1))
                                            && not(zmm10.d f!= temp6_1))
                                        float var_d4
                                        zmm9.d f- var_d4
                                        
                                        if (not(is_unordered.d(zmm9.d, var_d4))
                                                && not(zmm9.d f!= var_d4))
                                            float var_d0
                                            zmm8.d f- var_d0
                                            
                                            if (not(is_unordered.d(zmm8.d, var_d0))
                                                    && not(zmm8.d f!= var_d0))
                                                float temp9_1 = var_130
                                                zmm12.d f- temp9_1
                                                
                                                if (not(is_unordered.d(zmm12.d, temp9_1))
                                                        && not(zmm12.d f!= temp9_1))
                                                    float var_12c
                                                    zmm11.d f- var_12c
                                                    
                                                    if (not(is_unordered.d(zmm11.d, var_12c))
                                                            && zmm11.d f== var_12c)
                                                        r14_1 = 1
                                                        break
                
                rsi_1 = var_118_1
                int32_t rax_8 = r13_1 + 1
                
                if (r14_1 != 0)
                    rax_8 = r13_1
                
                r13_1 = rax_8
                int64_t rax_9 = rbp_1 + 1
                
                if (r14_1 != 0)
                    rax_9 = rbp_1
                
                rbp_1 = rax_9
                
                if (r14_1 != 0)
                    break
            
            *(result_1 + arg1) = 0xffffffff
            result = &result_1[1]
            j = j_1
            j_1 -= 1
            result_1 = result
        while (j != 1)
        rsi_1 += 1
        i = i_1
        i_1 -= 1
        var_118_1 = rsi_1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_158)
return result
