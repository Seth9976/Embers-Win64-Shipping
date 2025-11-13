// 函数: sub_142c44ba0
// 地址: 0x142c44ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result

if ((*(arg3 + 0x18) & 0x10) == 0)
    int32_t r8 = *(arg3 + 0x60)
    uint32_t rbp_1 = 0
    int32_t rdx = 0
    
    if (r8 != 0)
        char* rcx_1 = *(arg3 + 0x70) + 0xf
        
        do
            result.b = *rcx_1 & 0xf
            
            if (result.b == 6)
                void* r10_1 = *(arg2 + 0x40)
                int64_t rdx_1 = *(arg2 + 0x48)
                int32_t var_40
                __builtin_memset(&var_40, 0, 0x14)
                result = (*(r10_1 + 0x130))(arg2, rdx_1, 0x25cc, &var_40, *(r10_1 + 0x20))
                
                if (result.d != 0)
                    int64_t var_34
                    var_34:6.b = sub_142c47d60(0x25cc)
                    sub_142bf4e80(arg3)
                    *(arg3 + 0x5c) = 0
                    
                    if (*(arg3 + 0x60) u> 0)
                        while (*(arg3 + 0x58) != 0)
                            uint64_t rcx_4 = zx.q(*(arg3 + 0x5c))
                            int64_t r8_1 = *(arg3 + 0x70)
                            uint64_t rax_3 = rcx_4 * 5
                            uint32_t rdi_1 = zx.d(*(r8_1 + (rax_3 << 2) + 0xf))
                            void* rdx_2 = r8_1 + (rax_3 << 2)
                            
                            if (rbp_1 != rdi_1 && (rdi_1.b & 0xf) == 6)
                                rbp_1 = rdi_1
                                int128_t var_58_1 = var_40.o
                                var_58_1:8.d = *(rdx_2 + 8)
                                var_58_1:4.d = *(rdx_2 + 4)
                                var_58_1:0xf.b = rdi_1.b
                                
                                if (rcx_4.d u< *(arg3 + 0x60))
                                    while (*(arg3 + 0x58) != 0)
                                        uint64_t rcx_5 = zx.q(*(arg3 + 0x5c))
                                        int64_t r8_2 = *(arg3 + 0x70)
                                        uint64_t rax_8 = rcx_5 * 5
                                        
                                        if (rdi_1 != zx.d(*(r8_2 + (rax_8 << 2) + 0xf)))
                                            break
                                        
                                        if (*(r8_2 + (rax_8 << 2) + 0x12) != 0x12)
                                            break
                                        
                                        if (*(arg3 + 0x59) == 0)
                                            *(arg3 + 0x5c) += 1
                                        else if (*(arg3 + 0x78) != r8_2
                                                || *(arg3 + 0x64) != rcx_5.d)
                                            if (sub_142bf50b0(arg3, 1, 1) != 0)
                                                int64_t rdx_4 = *(arg3 + 0x70)
                                                uint64_t r9_2 = zx.q(*(arg3 + 0x5c)) * 5
                                                uint64_t rcx_7 = zx.q(*(arg3 + 0x64)) * 5
                                                int64_t rax_13 = *(arg3 + 0x78)
                                                *(rax_13 + (rcx_7 << 2)) = *(rdx_4 + (r9_2 << 2))
                                                *(rax_13 + (rcx_7 << 2) + 0x10) =
                                                    *(rdx_4 + (r9_2 << 2) + 0x10)
                                                *(arg3 + 0x64) += 1
                                                *(arg3 + 0x5c) += 1
                                        else
                                            *(arg3 + 0x64) += 1
                                            *(arg3 + 0x5c) += 1
                                        
                                        if (*(arg3 + 0x5c) u>= *(arg3 + 0x60))
                                            break
                                
                                if (sub_142bf50b0(arg3, 0, 1) != 0)
                                    uint64_t rcx_9 = zx.q(*(arg3 + 0x64)) * 5
                                    int64_t rax_18 = *(arg3 + 0x78)
                                    *(rax_18 + (rcx_9 << 2)) = var_58_1
                                    *(rax_18 + (rcx_9 << 2) + 0x10) = var_34:4.d
                                    *(arg3 + 0x64) += 1
                            else if (*(arg3 + 0x59) == 0)
                                *(arg3 + 0x5c) += 1
                            else if (*(arg3 + 0x78) != r8_1 || *(arg3 + 0x64) != rcx_4.d)
                                if (sub_142bf50b0(arg3, 1, 1) != 0)
                                    int64_t rdx_5 = *(arg3 + 0x70)
                                    uint64_t r9_3 = zx.q(*(arg3 + 0x5c)) * 5
                                    uint64_t rcx_11 = zx.q(*(arg3 + 0x64)) * 5
                                    int64_t rax_22 = *(arg3 + 0x78)
                                    *(rax_22 + (rcx_11 << 2)) = *(rdx_5 + (r9_3 << 2))
                                    *(rax_22 + (rcx_11 << 2) + 0x10) = *(rdx_5 + (r9_3 << 2) + 0x10)
                                    *(arg3 + 0x64) += 1
                                    *(arg3 + 0x5c) += 1
                            else
                                *(arg3 + 0x64) += 1
                                *(arg3 + 0x5c) += 1
                            
                            if (*(arg3 + 0x5c) u>= *(arg3 + 0x60))
                                break
                    
                    result = sub_142bf5b20(arg3)
                
                break
            
            rdx += 1
            rcx_1 = &rcx_1[0x14]
        while (rdx u< r8)

__security_check_cookie(result_1 ^ &var_88)
return result
