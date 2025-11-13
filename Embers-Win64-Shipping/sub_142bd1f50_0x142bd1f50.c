// 函数: sub_142bd1f50
// 地址: 0x142bd1f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(arg6)
int32_t r8 = arg5
*arg4 = 0

if ((r8 != 0 || result.b != 0) && arg1 s>= 0x28f)
    if (result.b != 0)
        int32_t rcx = *arg7
        int32_t rbp_1 = arg7[1]
        int32_t rbx_1 = arg7[7]
        int32_t rcx_1 = arg7[2]
        int32_t rcx_2 = arg7[5]
        int32_t r13_1 = arg7[3]
        int32_t r14_1 = arg7[6]
        int32_t r15_1 = arg7[4]
        int32_t rax_1 = sub_142b93e80(arg3 + r8, arg1)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_1)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_reverse(arg2)
        int32_t rcx_6
        
        if (temp0_2 + temp0_1 s< 0x2e)
            rcx_6 = sub_142b93e80(rax_1, arg2)
        else
            rcx_6 = r14_1 << 0x10
        
        int32_t rax_6 = rcx << 0x10
        
        if (rcx_6 s>= rax_6)
            int32_t r8_1 = rcx_1
            int32_t rdx_3 = r8_1 << 0x10
            
            if (rcx_6 s>= rdx_3)
                if (rcx_6 s< r15_1 << 0x10)
                    goto label_142bd20d9
                
                if (rcx_6 s>= r14_1 << 0x10)
                    *arg4 = sub_142b91790(rbx_1 << 0x10, arg2)
                else
                label_142bd2088:
                    int32_t r14_2 = r14_1 - r15_1
                    int32_t r12_2 = rax_1 - sub_142b91790(r15_1 << 0x10, arg2)
                    
                    if (r14_2 == 0)
                        *arg4 = sub_142b91790(rbx_1 << 0x10, arg2)
                    else
                        *arg4 = sub_142b93dd0(r12_2, rbx_1 - rcx_2, r14_2)
                            + sub_142b91790(rcx_2 << 0x10, arg2)
            else
                int32_t r8_2 = r8_1 - rcx
                int32_t rcx_13 = rax_1 - sub_142b91790(rax_6, arg2)
                
                if (r8_2 == 0)
                    r8_1 = rcx_1
                label_142bd20d9:
                    int32_t rbp_5 = r15_1 - r8_1
                    int32_t rcx_18 = rax_1 - sub_142b91790(rdx_3, arg2)
                    
                    if (rbp_5 == 0)
                        goto label_142bd2088
                    
                    *arg4 = sub_142b93dd0(rcx_18, rcx_2 - r13_1, rbp_5)
                        + sub_142b91790(r13_1 << 0x10, arg2)
                else
                    *arg4 = sub_142b93dd0(rcx_13, r13_1 - rbp_1, r8_2)
                        + sub_142b91790(rbp_1 << 0x10, arg2)
        else
            *arg4 = sub_142b91790(rbp_1 << 0x10, arg2)
        
        r8 = arg5
        *arg4 = sub_142b91790(*arg4, arg1 * 2)
    
    int32_t temp0_3
    int32_t temp1_1
    temp0_3:temp1_1 = sx.q(r8)
    result = (temp1_1 - temp0_3) s>> 1
    *arg4 += result

return result
