// 函数: sub_142becb50
// 地址: 0x142becb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x14c)
int32_t rax = *(arg1 + 0x114)
int32_t rdi_1 = r9 s>> 8
int32_t r12_1 = arg3 s>> 8

if (rdi_1 s< rax || r12_1 s< rax)
    rax = arg1[0x11].d
    
    if (rdi_1 s>= rax || r12_1 s>= rax)
        int32_t rcx = *(arg1 + 0x148)
        int32_t r8_1 = arg2 - rcx
        int32_t rsi_1 = arg2 s>> 8
        int32_t r15_1 = rcx s>> 8
        int32_t r13_1 = arg3 - r9
        uint32_t r14_1 = rcx - (r15_1 << 8)
        int32_t var_50 = r8_1
        uint32_t rbp_1 = r9 - (rdi_1 << 8)
        
        if (r15_1 != rsi_1 || rdi_1 != r12_1)
            if (r13_1 == 0)
                sub_142beceb0(arg1, rsi_1, rdi_1)
            else if (r8_1 != 0)
                int32_t rsi_4 = r8_1 * rbp_1 - r13_1 * r14_1
                int32_t r10_1
                
                if (r15_1 == rsi_1)
                    r10_1 = 0
                else
                    r10_1 = divs.dp.d(0:0xffffff, r8_1)
                
                int32_t arg_20 = r10_1
                int32_t r9_1
                
                if (rdi_1 == r12_1)
                    r9_1 = 0
                else
                    r9_1 = divs.dp.d(0:0xffffff, r13_1)
                
                int32_t arg_8 = r9_1
                int32_t rdx_6 = r8_1 << 8
                int32_t var_54_1 = rdx_6
                
                while (true)
                    if (rsi_4 s> 0 || rsi_4 - rdx_6 s<= 0)
                        int32_t rcx_8 = rsi_4 - rdx_6
                        
                        if (rcx_8 s> 0 || ((r13_1 - r8_1) << 8) + rsi_4 s<= 0)
                            int32_t rcx_12
                            int32_t rcx_13
                            
                            if (((r13_1 - r8_1) << 8) + rsi_4 s<= 0)
                                rcx_12 = r13_1 << 8
                                rcx_13 = rcx_12 + rsi_4
                            
                            if (((r13_1 - r8_1) << 8) + rsi_4 s> 0 || rcx_12 + rsi_4 s< 0)
                                *(arg1 + 0x11c) -= rbp_1
                                int32_t rcx_18 = r9_1 * rsi_4
                                rsi_4 += rdx_6
                                uint32_t rcx_20 = neg.d(rcx_18) u>> 0x18
                                uint32_t rax_40 = rcx_20 + r14_1
                                r14_1 = rcx_20
                                int32_t rax_41 = rax_40 * rbp_1
                                rbp_1 = 0x100
                                *(arg1 + 0x118) -= rax_41
                                rdi_1 -= 1
                            else
                                rsi_4 = rcx_13
                                uint32_t rdx_13 = (r10_1 * rcx_13) u>> 0x18
                                uint32_t rcx_15 = rdx_13 - rbp_1
                                *(arg1 + 0x11c) += rdx_13 - rbp_1
                                rbp_1 = rdx_13
                                int32_t rax_39 = r14_1 + 0x100
                                r14_1 = 0
                                *(arg1 + 0x118) += rcx_15 * rax_39
                                r15_1 += 1
                        else
                            rsi_4 = rcx_8
                            *(arg1 + 0x11c) += 0x100 - rbp_1
                            int32_t rax_32 = 0x100 - rbp_1
                            rbp_1 = 0
                            uint32_t rdx_10 = neg.d(r9_1 * rcx_8) u>> 0x18
                            uint32_t rcx_9 = rdx_10 + r14_1
                            r14_1 = rdx_10
                            *(arg1 + 0x118) += rcx_9 * rax_32
                            rdi_1 += 1
                    else
                        int32_t rcx_5 = r10_1 * rsi_4
                        rsi_4 += neg.d(r13_1) << 8
                        uint32_t rcx_6 = rcx_5 u>> 0x18
                        *(arg1 + 0x11c) += rcx_6 - rbp_1
                        uint32_t rax_25 = rcx_6 - rbp_1
                        rbp_1 = rcx_6
                        int32_t rax_26 = rax_25 * r14_1
                        r14_1 = 0x100
                        *(arg1 + 0x118) += rax_26
                        r15_1 -= 1
                    
                    sub_142beceb0(arg1, r15_1, rdi_1)
                    rdx_6 = var_54_1
                    r8_1 = var_50
                    r9_1 = arg_8
                    r10_1 = arg_20
                    
                    if (r15_1 == rsi_1)
                        if (rdi_1 == r12_1)
                            break
            else if (r13_1 s<= 0)
                do
                    *(arg1 + 0x11c) -= rbp_1
                    int32_t rax_10 = r14_1 * rbp_1
                    rdi_1 -= 1
                    rbp_1 = 0x100
                    *(arg1 + 0x118) += neg.d(rax_10) * 2
                    sub_142beceb0(arg1, r15_1, rdi_1)
                while (rdi_1 != r12_1)
            else
                do
                    rdi_1 += 1
                    *(arg1 + 0x11c) += 0x100 - rbp_1
                    int32_t rax_6 = 0x100 - rbp_1
                    rbp_1 = 0
                    *(arg1 + 0x118) += rax_6 * r14_1 * 2
                    sub_142beceb0(arg1, r15_1, rdi_1)
                while (rdi_1 != r12_1)
        
        int32_t rcx_23 = arg3 - (r12_1 << 8)
        *(arg1 + 0x14c) = arg3
        *(arg1 + 0x11c) += rcx_23 - rbp_1
        *(arg1 + 0x148) = arg2
        *(arg1 + 0x118) += (r14_1 - (rsi_1 << 8) + arg2) * (rcx_23 - rbp_1)
        return arg2

*(arg1 + 0x148) = arg2
*(arg1 + 0x14c) = arg3
return rax
