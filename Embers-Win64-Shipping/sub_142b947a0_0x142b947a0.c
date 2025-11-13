// 函数: sub_142b947a0
// 地址: 0x142b947a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg1

if (arg1 == 0)
    return zx.q((&arg1[0xa]).d)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t rax_4 = (temp1 - temp0) s>> 1
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg3)
int32_t rax_8 = (temp3 - temp2) s>> 1

if (rax_4 != 0 || rax_8 != 0)
    int32_t rax_9 = sub_142b94cd0(rbx)
    
    if (rax_9 == 2)
        uint32_t rax_10 = zx.d(*rbx)
        int16_t temp4 = rax_10.w
        rax_10.w = neg.w(rax_10.w)
        return zx.q(sbb.d(rax_10, rax_10, temp4 != 0)) & 6
    
    int64_t rdx_2 = *(rbx + 8)
    int32_t r11_1 = 0
    int32_t i = 0
    int64_t rcx_2 = sx.q(rax_9)
    int32_t r15_1 = 0
    int64_t var_68_1 = rdx_2
    int32_t var_98_1 = 0
    int32_t i_1 = 0
    
    if (0 s< *rbx)
        void* rcx_3 = nullptr
        void* var_60_1 = nullptr
        
        do
            int32_t r8 = 0
            int32_t var_80_1 = 0
            int32_t r12_1 = 0
            int64_t var_78_1 = 0
            int32_t r10_1 = 0
            int64_t var_a8_1 = 0
            int32_t r13_1 = r15_1
            int32_t rcx_4 = sx.d(*(rcx_3 + *(rbx + 0x18)))
            int32_t rax_14 = -1
            int32_t var_84_1 = rcx_4
            int32_t rbp_1 = rcx_4
            int32_t var_9c_1 = 0xffffffff
            
            if (r15_1 != rcx_4)
                int64_t rbx_1 = 0
                int64_t rsi_1 = 0
                int64_t rdi_1 = sx.q(r15_1)
                int64_t r14_1 = rdi_1
                
                while (rbp_1 != rax_14)
                    int32_t var_a0_1
                    int64_t var_90
                    int64_t rdi_2
                    
                    if (r13_1 == rax_14)
                        rdi_2 = rsi_1
                        var_90 = rsi_1
                        var_a0_1 = r8
                    label_142b94936:
                        
                        if (r12_1 == 0)
                            rbp_1 = r13_1
                        else
                            if (rax_14 s< 0)
                                var_9c_1 = rbp_1
                                rsi_1 = rbx_1
                                var_78_1 = rbx_1
                                var_80_1 = r12_1
                            
                            int64_t r9_1 = sx.q(var_90:4.d)
                            int64_t r8_1 = sx.q(var_90.d)
                            int64_t rdx_3 = sx.q(r10_1)
                            int64_t rbx_3 = rdx_3 * r9_1
                            int64_t rcx_8 = sx.q(r11_1) * r8_1
                            int32_t rbx_7 = ((rbx_3 - (rbx_3 u>> 0x3f) + 0x8000) s>> 0x10).d
                                + ((rcx_8 - (rcx_8 u>> 0x3f) + 0x8000) s>> 0x10).d
                            uint32_t rdx_21
                            int32_t rbx_9
                            uint32_t r12_2
                            
                            if (rbx_7 s<= 0xffff1000)
                                rdx_21 = 0
                                r12_2 = 0
                                rbx_9 = rax_8
                            else
                                int32_t rcx_12 = r9_1.d + r10_1
                                int32_t r15_2 = r8_1.d + r11_1
                                
                                if (rcx_2 != 0)
                                    r15_2 = neg.d(r15_2)
                                else
                                    rcx_12 = neg.d(rcx_12)
                                
                                int64_t rdx_4 = rdx_3 * r8_1
                                int64_t r11_2 = sx.q(rax_4)
                                int64_t r8_3 = r9_1 * sx.q(r11_1)
                                int32_t rdx_8 = ((rdx_4 - (rdx_4 u>> 0x3f) + 0x8000) s>> 0x10).d
                                    - ((r8_3 - (r8_3 u>> 0x3f) + 0x8000) s>> 0x10).d
                                int32_t r8_8 = neg.d(rdx_8)
                                int32_t r9_3 = var_a0_1
                                
                                if (rcx_2 != 0)
                                    r8_8 = rdx_8
                                
                                int64_t rax_30 = sx.q(r8_8)
                                
                                if (r12_1 s< r9_3)
                                    r9_3 = r12_1
                                
                                int64_t rdx_10 = r11_2 * rax_30
                                int64_t r10_3 = sx.q(r9_3) * sx.q(rbx_7 + 0x10000)
                                int32_t var_70_1 = r8_8
                                int64_t var_a8_2
                                var_a8_2.d = r9_3
                                int32_t r10_6 = ((r10_3 - (r10_3 u>> 0x3f) + 0x8000) s>> 0x10).d
                                int32_t rdx_14
                                
                                if (((rdx_10 - (rdx_10 u>> 0x3f) + 0x8000) s>> 0x10).d s> r10_6)
                                    rdx_14 = r9_3
                                else
                                    r8_8 = rbx_7 + 0x10000
                                    rdx_14 = r11_2.d
                                
                                r12_2 = sub_142b93dd0(rcx_12, rdx_14, r8_8)
                                int64_t rdx_16 = sx.q(rax_8) * rax_30
                                
                                if (((rdx_16 - (rdx_16 u>> 0x3f) + 0x8000) s>> 0x10).d s> r10_6)
                                    r15_1 = var_98_1
                                    rdx_21 = sub_142b93dd0(r15_2, var_a8_2.d, var_70_1)
                                    rbx_9 = rax_8
                                else
                                    rbx_9 = rax_8
                                    r15_1 = var_98_1
                                    rdx_21 = sub_142b93dd0(r15_2, rbx_9, rbx_7 + 0x10000)
                            
                            int64_t rax_41 = sx.q(rbp_1)
                            
                            if (rax_41 != r14_1)
                                do
                                    *(var_68_1 + (rax_41 << 3)) += r12_2 + rax_4
                                    *(var_68_1 + (rax_41 << 3) + 4) += rdx_21 + rbx_9
                                    
                                    if (rax_41 s>= sx.q(var_84_1))
                                        rbp_1 = r15_1
                                        rax_41 = sx.q(r15_1)
                                    else
                                        rbp_1 += 1
                                        rax_41 += 1
                                while (rax_41 != r14_1)
                                
                                rsi_1 = var_78_1
                        
                        r12_1 = var_a0_1
                        rbx_1 = rdi_2
                        var_a8_1 = rbx_1
                        rdi_1 = sx.q(r15_1)
                    else
                        int32_t* rcx_5 = rdx_2 + (sx.q(rbp_1) << 3)
                        var_90.d = *(rdx_2 + (r14_1 << 3)) - *rcx_5
                        var_90:4.d = *(rdx_2 + (r14_1 << 3) + 4) - rcx_5[1]
                        int32_t rax_20 = sub_142b97340(&var_90)
                        var_a0_1 = rax_20
                        
                        if (rax_20 != 0)
                            rdi_2 = var_90
                            r10_1 = var_a8_1:4.d
                            r11_1 = var_a8_1.d
                            rax_14 = var_9c_1
                            goto label_142b94936
                    rcx_4 = var_84_1
                    
                    if (r13_1 s>= rcx_4)
                        r13_1 = r15_1
                        r14_1 = rdi_1
                    else
                        r13_1 += 1
                        r14_1 += 1
                    
                    r10_1 = var_a8_1:4.d
                    r11_1 = var_a8_1.d
                    rdx_2 = var_68_1
                    rax_14 = var_9c_1
                    r8 = var_80_1
                    
                    if (r13_1 == rbp_1)
                        break
                
                rbx = arg1
                i = i_1
            
            r15_1 = rcx_4 + 1
            i += 1
            rcx_3 = var_60_1 + 2
            var_98_1 = r15_1
            i_1 = i
            r11_1 = 0
            var_60_1 = rcx_3
        while (i s< sx.d(*rbx))

return 0
