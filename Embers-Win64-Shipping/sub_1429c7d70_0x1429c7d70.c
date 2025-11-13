// 函数: sub_1429c7d70
// 地址: 0x1429c7d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t rbx = sx.q(arg4)
int64_t rdi = arg3
int64_t result = __CheckForDebuggerJustMyCode(&data_14427d007)

if (rbx.d s> 0)
    int64_t r14_1 = 0
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
    
    while (true)
        int64_t result_1 = sx.q(*(rdi + (r14_1 << 2)))
        int32_t rdi_1 = *(arg1 + (result_1 << 2))
        int32_t rbx_2 = rdi_1 & 3
        int32_t rdi_2 = rdi_1 s>> 2
        int32_t var_100
        (*(*arg2 + 0x10))(arg2, &var_100, zx.q(rdi_2), zx.q(rbx_2))
        int32_t var_f0
        (*(*arg2 + 0x18))(arg2, &var_f0, zx.q(rdi_2), zx.q(rbx_2))
        int32_t var_128
        result = (*(*arg2 + 0x20))(arg2, &var_128, zx.q(rdi_2), zx.q(rbx_2))
        int32_t rbp_1 = 1
        int64_t rsi_1 = 0
        int64_t r13_1 = 0xffffffff
        
        if (r14_1 s> 0)
            int32_t var_f8
            zmm6 = var_f8
            int32_t var_fc
            zmm7 = var_fc
            zmm13 = var_100
            int32_t var_e8
            zmm8 = var_e8
            int32_t var_ec
            zmm9 = var_ec
            zmm10 = var_f0
            int32_t var_124
            zmm11 = var_124
            zmm12 = var_128
            
            while (true)
                if (rbp_1 != 0)
                    r13_1 = sx.q(*(arg3 + (rsi_1 << 2)))
                    int32_t rdi_3 = *(arg1 + (r13_1 << 2))
                    int32_t rbx_4 = rdi_3 & 3
                    int32_t rdi_4 = rdi_3 s>> 2
                    float var_e0
                    (*(*arg2 + 0x10))(arg2, &var_e0, zx.q(rdi_4), zx.q(rbx_4))
                    float var_d0
                    (*(*arg2 + 0x18))(arg2, &var_d0, zx.q(rdi_4), zx.q(rbx_4))
                    float var_120
                    result = (*(*arg2 + 0x20))(arg2, &var_120, zx.q(rdi_4), zx.q(rbx_4))
                    float temp0_1 = var_e0
                    zmm13.d f- temp0_1
                    
                    if (is_unordered.d(zmm13.d, temp0_1) || zmm13.d f!= temp0_1)
                        rsi_1 += 1
                    else
                        float var_dc
                        zmm7.d f- var_dc
                        
                        if (is_unordered.d(zmm7.d, var_dc) || zmm7.d f!= var_dc)
                            rsi_1 += 1
                        else
                            float var_d8
                            zmm6.d f- var_d8
                            
                            if (is_unordered.d(zmm6.d, var_d8) || zmm6.d f!= var_d8)
                                rsi_1 += 1
                            else
                                float temp3_1 = var_d0
                                zmm10.d f- temp3_1
                                
                                if (is_unordered.d(zmm10.d, temp3_1) || zmm10.d f!= temp3_1)
                                    rsi_1 += 1
                                else
                                    float var_cc
                                    zmm9.d f- var_cc
                                    
                                    if (is_unordered.d(zmm9.d, var_cc) || zmm9.d f!= var_cc)
                                        rsi_1 += 1
                                    else
                                        float var_c8
                                        zmm8.d f- var_c8
                                        
                                        if (is_unordered.d(zmm8.d, var_c8) || zmm8.d f!= var_c8)
                                            rsi_1 += 1
                                        else
                                            float temp6_1 = var_120
                                            zmm12.d f- temp6_1
                                            
                                            if (is_unordered.d(zmm12.d, temp6_1)
                                                    || zmm12.d f!= temp6_1)
                                                rsi_1 += 1
                                            else
                                                float var_11c
                                                zmm11.d f- var_11c
                                                
                                                if (is_unordered.d(zmm11.d, var_11c)
                                                        || zmm11.d f!= var_11c)
                                                    rsi_1 += 1
                                                else
                                                    rbp_1 = 0
                    
                    if (rsi_1 s< r14_1)
                        continue
                    else if (rbp_1 != 0)
                        break
                
                result = result_1
                *(arg1 + (result << 2)) = *(arg1 + (sx.q(r13_1.d) << 2))
                break
        
        rdi = arg3
        r14_1 += 1
        
        if (r14_1 s>= rbx)
            break

__security_check_cookie(rax_1 ^ &var_148)
return result
