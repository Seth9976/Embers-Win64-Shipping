// 函数: sub_142bd9900
// 地址: 0x142bd9900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
int32_t arg_18 = arg3
int32_t r12 = arg3
uint64_t r8 = arg1
int32_t* r15 = arg4

if (*(arg1 + 8) != 0)
    return 

if (arg2 u> 1)
    int32_t rax_1
    rax_1.b = arg2 != 0
    arg2 = rax_1

uint64_t rsi_3 = zx.q(arg2) * 0x30 + arg1

if (r12 s<= 0)
    return 

while (true)
    int64_t r10_1 = *r8
    int32_t r13_1 = 0
    int32_t rbp_1 = r15[1]
    int32_t r14_1 = *r15
    int64_t var_48_1 = r10_1
    
    if (rbp_1 s< 0)
        r13_1 = 1
        
        if (rbp_1 == 0xffffffeb)
            r13_1 = rbp_1 + 0x18
            r14_1 -= 0x15
        
        rbp_1 = 0
    
    int32_t rcx = *(rsi_3 + 0x18)
    int32_t rbx_1 = 0
    int32_t* rdx = *(rsi_3 + 0x20)
    int32_t* rax_2 = rdx
    
    if (rcx != 0)
        while (*rax_2 != r14_1 || rax_2[1] != rbp_1)
            rbx_1 += 1
            rax_2 = &rax_2[3]
            
            if (rbx_1 u>= rcx)
                goto label_142bd99ce
    
    if (rcx != 0 && rbx_1 u< rcx)
        goto label_142bd9a75
    
label_142bd99ce:
    int32_t rax_3 = *(rsi_3 + 0x1c)
    uint64_t r15_1 = zx.q(rcx + 1)
    int32_t r8_1 = 0
    
    if (r15_1.d u>= rax_3)
        int32_t var_58 = 0
        
        if (r15_1.d u> rax_3)
            int32_t r12_2 = (r15_1 + 7).d & 0xfffffff8
            int64_t rax_4 = sub_142b99a90(r10_1, 0xc, rax_3, r12_2, rdx, &var_58)
            r8_1 = var_58
            r10_1 = var_48_1
            *(rsi_3 + 0x20) = rax_4
            
            if (r8_1 == 0)
                *(rsi_3 + 0x1c) = r12_2
            
            r12 = arg_18
    
    if (r15_1.d u< rax_3 || r8_1 == 0)
        int64_t rax_5 = *(rsi_3 + 0x20)
        int64_t rdi_2 = (r15_1 - 1) * 3
        *(rax_5 + (rdi_2 << 2)) = 0
        *(rax_5 + (rdi_2 << 2) + 8) = 0
        int32_t* rdi_3 = rax_5 + (rdi_2 << 2)
        *(rsi_3 + 0x18) = r15_1.d
        
        if (r8_1 == 0)
            r15 = arg_20
            *rdi_3 = r14_1
            rdi_3[1] = rbp_1
            rdi_3[2] = r13_1
        label_142bd9a75:
            uint64_t rax_6 = zx.q(*(rsi_3 + 0x28))
            r8_1 = 0
            int32_t* rdi_7
            
            if (rax_6.d != 0)
                rdi_7 = *(rsi_3 + 0x30) + ((rax_6 * 3 - 3) << 3)
            label_142bd9b0b:
                
                if (r8_1 == 0)
                    if (rbx_1 u< *rdi_7)
                        goto label_142bd9b8e
                    
                    uint32_t rax_12 = (rbx_1 + 8) u>> 3
                    uint32_t rdx_3 = (rdi_7[1] + 7) u>> 3
                    int32_t var_50 = r8_1
                    
                    if (rax_12 u<= rdx_3)
                        goto label_142bd9b76
                    
                    uint64_t rbp_4 = zx.q(rax_12 + 7) & 0xfffffff8
                    int64_t rax_14 =
                        sub_142b99a90(var_48_1, 1, rdx_3, rbp_4.d, *(rdi_7 + 8), &var_50)
                    r8_1 = var_50
                    *(rdi_7 + 8) = rax_14
                    
                    if (r8_1 == 0)
                        rdi_7[1] = (rbp_4 << 3).d
                    label_142bd9b76:
                        
                        if (r8_1 == 0)
                            *rdi_7 = rbx_1 + 1
                        label_142bd9b8e:
                            char* rdx_6 = (zx.q(rbx_1) u>> 3) + *(rdi_7 + 8)
                            *rdx_6 |= (0x80 s>> (rbx_1.b & 7)).b
                            
                            if (r8_1 == 0)
                                r8 = arg1
                                r12 -= 1
                                r15 = &r15[2]
                                arg_18 = r12
                                arg_20 = r15
                                
                                if (r12 s<= 0)
                                    break
                                
                                continue
            else
                int32_t rcx_2 = *(rsi_3 + 0x2c)
                uint64_t rbp_2 = zx.q((rax_6 + 1).d)
                
                if (rbp_2.d u<= rcx_2)
                    goto label_142bd9ad1
                
                int32_t var_54 = 0
                int32_t r14_3 = (rbp_2 + 7).d & 0xfffffff8
                int64_t rax_8 = sub_142b99a90(r10_1, 0x18, rcx_2, r14_3, *(rsi_3 + 0x30), &var_54)
                r8_1 = var_54
                *(rsi_3 + 0x30) = rax_8
                
                if (r8_1 == 0)
                    *(rsi_3 + 0x2c) = r14_3
                label_142bd9ad1:
                    int64_t rax_9 = *(rsi_3 + 0x30)
                    *(rax_9 + ((rbp_2 * 3 - 3) << 3)) = 0
                    rdi_7 = rax_9 + ((rbp_2 * 3 - 3) << 3)
                    rdi_7[4] = 0
                    *(rsi_3 + 0x28) = rbp_2.d
                    goto label_142bd9b0b
    
    *(arg1 + 8) = r8_1
    break
