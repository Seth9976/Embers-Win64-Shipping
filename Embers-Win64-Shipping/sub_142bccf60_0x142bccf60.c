// 函数: sub_142bccf60
// 地址: 0x142bccf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x98)
int32_t result_2 = sub_142b97060(arg1, 0, arg3)
int32_t result_1 = result_2

if (result_2 == 0)
    int32_t result_3 = sub_142b96aa0(arg1, &data_143687ff0, arg2 + 0x138)
    result_1 = result_3
    
    if (result_3 == 0)
        if (*(arg2 + 0x138) == 0x70636601)
            int32_t rax = *(arg2 + 0x13c)
            
            if (rax != 0)
                int32_t rcx_1 = arg1[1].d
                
                if (rcx_1 u>= 0x10)
                    uint32_t rcx_2 = rcx_1 u>> 4
                    
                    if (rax u> rcx_2 || rax u> 9)
                        uint32_t rax_1 = 9
                        
                        if (rcx_2 u< 9)
                            rax_1 = rcx_2
                        
                        *(arg2 + 0x13c) = rax_1
                    
                    int64_t rax_2 = sub_142b99a90(r15, 0x10, 0, *(arg2 + 0x13c), 0, &result_1)
                    int64_t rsi = rax_2
                    *(arg2 + 0x140) = rax_2
                    int32_t result = result_1
                    
                    if (result == 0)
                        int32_t rdi_1 = 0
                        
                        if (*(arg2 + 0x13c) u<= 0)
                        label_142bcd069:
                            int64_t r11_1 = *(arg2 + 0x140)
                            int32_t r10_1 = 0
                            
                            if (*(arg2 + 0x13c) != 1)
                                while (true)
                                    int32_t rdi_2 = 0
                                    uint64_t rcx_5 = 0
                                    
                                    if (*(arg2 + 0x13c) - r10_1 == 1)
                                        break
                                    
                                    while (true)
                                        int32_t r9_1 = (rcx_5 + 1).d
                                        int128_t* rcx_7 = (rcx_5 << 4) + r11_1
                                        int128_t* rdx_2 = (zx.q(r9_1) << 4) + r11_1
                                        
                                        if (*(rcx_7 + 0xc) u> *(rdx_2 + 0xc))
                                            arg3.o = *rcx_7
                                            rdi_2 = 1
                                            int128_t zmm0_1 = *rdx_2
                                            *rdx_2 = arg3.o
                                            *rcx_7 = zmm0_1
                                        
                                        int32_t r8_3 = *(rcx_7 + 8)
                                        int32_t rax_6 = *(rdx_2 + 0xc)
                                        
                                        if (r8_3 u> rax_6 || *(rcx_7 + 0xc) u> rax_6 - r8_3)
                                            result_1 = 9
                                            goto label_142bcd14a
                                        
                                        rcx_5 = zx.q(r9_1)
                                        
                                        if (r9_1 u>= *(arg2 + 0x13c) - r10_1 - 1)
                                            break
                                        
                                        continue
                                    
                                    if (rdi_2 == 0)
                                        break
                                    
                                    r10_1 += 1
                                    
                                    if (r10_1 u>= *(arg2 + 0x13c) - 1)
                                        break
                            
                            int32_t r10_2 = *(arg2 + 0x13c)
                            int32_t r8_4 = 0
                            void* rcx_8 = *(arg2 + 0x140)
                            int32_t rdx_3 = arg1[1].d
                            
                            if (r10_2 == 1)
                            label_142bcd131:
                                int32_t rax_15 = *(rcx_8 + 0xc)
                                
                                if (rax_15 u<= rdx_3)
                                    int32_t rdx_5 = rdx_3 - rax_15
                                    
                                    if (*(rcx_8 + 8) u> rdx_5)
                                        *(rcx_8 + 8) = rdx_5
                                    
                                    return 0
                            else
                                while (true)
                                    int32_t r9_2 = *(rcx_8 + 8)
                                    
                                    if (r9_2 u> rdx_3)
                                        break
                                    
                                    if (*(rcx_8 + 0xc) u> rdx_3 - r9_2)
                                        break
                                    
                                    rcx_8 += 0x10
                                    r8_4 += 1
                                    
                                    if (r8_4 u>= r10_2 - 1)
                                        goto label_142bcd131
                            
                            result_1 = 8
                        else
                            while (true)
                                int32_t result_4 = sub_142b96aa0(arg1, &data_143688000, rsi)
                                result_1 = result_4
                                
                                if (result_4 != 0)
                                    break
                                
                                rsi += 0x10
                                rdi_1 += 1
                                
                                if (rdi_1 u>= *(arg2 + 0x13c))
                                    goto label_142bcd069
                        
                    label_142bcd14a:
                        sub_142b99980(r15, *(arg2 + 0x140))
                        result = result_1
                        *(arg2 + 0x140) = 0
                    
                    return result
        
        return 3

return 1
