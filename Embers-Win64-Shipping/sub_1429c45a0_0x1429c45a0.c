// 函数: sub_1429c45a0
// 地址: 0x1429c45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t result = __CheckForDebuggerJustMyCode(&data_14427d007)
int64_t result_2 = sx.q(arg5)
int64_t rbp = sx.q(arg6)
int64_t result_3 = result_2

if (result_2 s< rbp)
    result = result_3 * 0x58
    void* rsi_2 = arg2 + 0x50 + result
    int64_t rbp_1 = rbp - result_2
    int32_t* rdi_2 = arg3 + ((result_2 + ((result_2 + 1) << 1)) << 2)
    
    while (true)
        if ((*(rsi_2 - 4) & 2) == 0)
            int32_t r11_1 = rdi_2[-2]
            int32_t r10_1 = (result_2 * 3).d
            int32_t r9 = 0
            int32_t rdx = 1
            int64_t r8 = 0
            
            while (true)
                int32_t rax_2 = rdx
                
                if (r9 s< r10_1)
                    rdx = 0
                    int32_t temp1_1 = *(arg3 + (r8 << 2))
                    
                    if (r11_1 != temp1_1)
                        rdx = rax_2
                    
                    if (r11_1 != temp1_1)
                        r9 += 1
                    
                    if (r11_1 != temp1_1)
                        r8 += 1
                    
                    if (rdx != 0)
                        continue
                else if (rdx != 0)
                    break
                
                uint64_t rdx_2 = zx.q(r9 s/ 3)
                int64_t r8_1 = sx.q(rdx_2.d) * 0x58
                int64_t rdx_3 = sx.q(zx.d(*(sx.q(r9 - (rdx_2 * 3).d) + arg2 + r8_1 + 0x54))
                    + *(arg2 + r8_1 + 0x50)) * 5
                int64_t rcx = sx.q(zx.d(*(rsi_2 + 4)) + *rsi_2) * 5
                *(arg1 + (rcx << 3)) = *(arg1 + (rdx_3 << 3))
                *(arg1 + (rcx << 3) + 0x10) = *(arg1 + (rdx_3 << 3) + 0x10)
                *(arg1 + (rcx << 3) + 0x20) = *(arg1 + (rdx_3 << 3) + 0x20)
                break
            
            int32_t r11_2 = rdi_2[-1]
            int32_t r9_2 = 0
            int64_t r8_2 = 0
            int32_t rdx_4 = 1
            
            while (true)
                int32_t rax_17 = rdx_4
                
                if (r9_2 s< r10_1)
                    rdx_4 = 0
                    int32_t temp4_1 = *(arg3 + (r8_2 << 2))
                    
                    if (r11_2 != temp4_1)
                        rdx_4 = rax_17
                    
                    if (r11_2 != temp4_1)
                        r9_2 += 1
                    
                    if (r11_2 != temp4_1)
                        r8_2 += 1
                    
                    if (rdx_4 != 0)
                        continue
                else if (rdx_4 != 0)
                    break
                
                uint64_t rdx_6 = zx.q(r9_2 s/ 3)
                int64_t r8_3 = sx.q(rdx_6.d) * 0x58
                int64_t rdx_7 = sx.q(zx.d(*(sx.q(r9_2 - (rdx_6 * 3).d) + arg2 + r8_3 + 0x54))
                    + *(arg2 + r8_3 + 0x50)) * 5
                int64_t rcx_1 = sx.q(zx.d(*(rsi_2 + 5)) + *rsi_2) * 5
                *(arg1 + (rcx_1 << 3)) = *(arg1 + (rdx_7 << 3))
                *(arg1 + (rcx_1 << 3) + 0x10) = *(arg1 + (rdx_7 << 3) + 0x10)
                *(arg1 + (rcx_1 << 3) + 0x20) = *(arg1 + (rdx_7 << 3) + 0x20)
                break
            
            int32_t r11_3 = *rdi_2
            int32_t r9_4 = 0
            int64_t r8_4 = 0
            int32_t result_1 = 1
            
            while (true)
                result = zx.q(result_1)
                
                if (r9_4 s< r10_1)
                    result_1 = 0
                    int32_t temp7_1 = *(arg3 + (r8_4 << 2))
                    
                    if (r11_3 != temp7_1)
                        result_1 = result.d
                    
                    if (r11_3 != temp7_1)
                        r9_4 += 1
                    
                    if (r11_3 != temp7_1)
                        r8_4 += 1
                    
                    if (result_1 != 0)
                        continue
                else if (result_1 != 0)
                    break
                
                uint64_t rdx_9 = zx.q(r9_4 s/ 3)
                int64_t r8_5 = sx.q(rdx_9.d) * 0x58
                int64_t rdx_10 = sx.q(zx.d(*(sx.q(r9_4 - (rdx_9 * 3).d) + arg2 + r8_5 + 0x54))
                    + *(arg2 + r8_5 + 0x50)) * 5
                result = sx.q(zx.d(*(rsi_2 + 6)) + *rsi_2)
                int64_t rcx_2 = result * 5
                *(arg1 + (rcx_2 << 3)) = *(arg1 + (rdx_10 << 3))
                *(arg1 + (rcx_2 << 3) + 0x10) = *(arg1 + (rdx_10 << 3) + 0x10)
                *(arg1 + (rcx_2 << 3) + 0x20) = *(arg1 + (rdx_10 << 3) + 0x20)
                break
        
        rdi_2 = &rdi_2[3]
        rsi_2 += 0x58
        int64_t temp0_1 = rbp_1
        rbp_1 -= 1
        
        if (temp0_1 == 1)
            break
    
    result_3 = result_2

if (result_3 s> 0)
    result = result_2
    void* rdi_3 = arg2 + 0x55
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int64_t r14 = 0
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    
    do
        if ((*(rdi_3 - 9) & 2) != 0)
            char rdx_13 = (1 << *(rdi_3 + 1)).b | (1 << (zx.d(*rdi_3) u% 0x20)).b
                | (1 << (zx.d(*(rdi_3 - 1)) u% 0x20)).b
            int32_t rsi_3
            
            if ((rdx_13 & 2) == 0)
                rsi_3 = 1
            else if ((rdx_13 & 4) != 0)
                rsi_3 = 0
                
                if ((rdx_13 & 8) == 0)
                    rsi_3 = 3
            else
                rsi_3 = 2
            
            uint32_t r15_1 = *(rdi_3 - 0xd) << 2
            int32_t r8_7 = r15_1 | rsi_3
            int32_t var_90
            (*(*arg4 + 0x10))(arg4, &var_90, zx.q(r8_7 s>> 2), zx.q(r8_7) & 3, result_2)
            int32_t var_88
            zmm6 = var_88
            int64_t i = 0
            int32_t var_8c
            zmm7 = var_8c
            zmm8 = var_90
            
            for (; i s< 3; i += 1)
                uint32_t rbp_2 = zx.d(*(rdi_3 + i - 1))
                int32_t r8_11 = (rbp_2 & 3) | r15_1
                int32_t var_80
                (*(*arg4 + 0x10))(arg4, &var_80, zx.q(r8_11 s>> 2), zx.q(r8_11) & 3)
                uint128_t zmm0 = var_80
                zmm0.d f- zmm8.d
                
                if (not(is_unordered.d(zmm0.d, zmm8.d)) && not(zmm0.d f!= zmm8.d))
                    int32_t var_7c
                    zmm0 = var_7c
                    zmm0.d f- zmm7.d
                    
                    if (not(is_unordered.d(zmm0.d, zmm7.d)) && not(zmm0.d f!= zmm7.d))
                        int32_t var_78
                        zmm0 = var_78
                        zmm0.d f- zmm6.d
                        
                        if (not(is_unordered.d(zmm0.d, zmm6.d)) && zmm0.d f== zmm6.d)
                            int32_t rdx_16 = *(rdi_3 - 5)
                            int64_t r8_13 = sx.q(rdx_16 + rbp_2) * 5
                            int64_t rax_52 = sx.q(rdx_16 + rsi_3) * 5
                            *(arg1 + (rax_52 << 3)) = *(arg1 + (r8_13 << 3))
                            *(arg1 + (rax_52 << 3) + 0x10) = *(arg1 + (r8_13 << 3) + 0x10)
                            *(arg1 + (rax_52 << 3) + 0x20) = *(arg1 + (r8_13 << 3) + 0x20)
                            break
            
            result = result_2
        
        r14 += 1
        rdi_3 += 0x58
    while (r14 s< result)

__security_check_cookie(rax_1 ^ &var_b8)
return result
