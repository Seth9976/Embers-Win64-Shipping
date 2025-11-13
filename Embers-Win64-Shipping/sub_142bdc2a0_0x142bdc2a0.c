// 函数: sub_142bdc2a0
// 地址: 0x142bdc2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *arg1
void* rbp = arg4
int32_t* rbx = *(arg1 + 8)
int32_t i_1 = i

if (i == 0)
    return 

void* rax = arg2 + 8 + sx.q(arg3) * 0xcc
void* var_60_1 = rax

do
    int32_t r13_1 = *(rax + 0xc4)
    
    if ((rbx[4].b & 8) == 0)
        int32_t r14_1 = *(rax + 0xc8) + sub_142b93e80(*rbx, r13_1)
        int32_t r8 = arg3
        int32_t rsi_1 = sub_142b93e80(rbx[1], r13_1)
        int32_t arg_8
        
        if (r8 == 0)
            if (*(rbp + 0xcc) != r8.b)
                if (*(rbp + 0xce) == r8.b)
                    goto label_142bdc35d
                
            label_142bdc491:
                arg_8 = 1
                goto label_142bdc370
            
            rbx[2] = r14_1
            rbx[3] = rsi_1
        else if (r8 != 1)
        label_142bdc35d:
            arg_8 = 0
        label_142bdc370:
            int32_t rbp_1 = 0
            int32_t rdx_2 = 0
            rbx[3] = rsi_1
            int32_t r12_1 = 0
            int64_t var_58 = 0
            int32_t var_50_1 = 0
            
            if (r8 == 1)
                int32_t r8_1 = *rbx
                sub_142bda910(arg2 + 0x1a0, rbx[1] + r8_1, r8_1, &var_58)
                rdx_2 = var_50_1
                r8 = arg3
                r12_1 = var_58:4.d
                rbp_1 = var_58.d
            
            if (rbp_1 == 1)
                rbx[2] = r12_1 - rsi_1
            else if (rbp_1 == 2)
                rbx[2] = rdx_2
            else if (rbp_1 == 3)
                rbx[2] = rdx_2
                rbx[3] = r12_1 - rdx_2
            else
                int32_t* r15 = *(rbx + 0x18)
                
                if (r15 != 0)
                    if ((r15[4].b & 8) == 0)
                        sub_142bdbe40(r15, arg2, r8, arg4)
                    
                    r14_1 = sub_142b93e80((rbx[1] s>> 1) + *rbx - ((r15[1] s>> 1) + *r15), r13_1)
                        + (r15[3] s>> 1) + r15[2] - (rsi_1 s>> 1)
                
                rbx[2] = r14_1
                rbx[3] = rsi_1
                
                if (*(arg4 + 0xd0) != 0)
                    if (rsi_1 s> 0x40)
                        int32_t rdx_10 = *(var_60_1 + 8)
                        int32_t rcx_15 = rsi_1 - rdx_10
                        int32_t rax_20 = neg.d(rcx_15)
                        
                        if (rcx_15 s>= 0)
                            rax_20 = rcx_15
                        
                        if (rax_20 s< 0x28)
                            rsi_1 = rdx_10
                        
                        if (rax_20 s>= 0x28 || rdx_10 s>= 0x30)
                            if (rsi_1 s< 0xc0)
                                goto label_142bdc513
                            
                            rsi_1 = (rsi_1 + 0x20) & 0xffffffc0
                        else
                            rsi_1 = 0x30
                        label_142bdc513:
                            int32_t rsi_3 = rsi_1 & 0xffffffc0
                            int32_t rax_22 = rsi_1 & 0x3f
                            
                            if (rax_22 u< 0xa)
                                rsi_1 = rsi_3 + rax_22
                            else if (rax_22 u>= 0x20)
                                if (rax_22 u< 0x36)
                                    rax_22 = 0x36
                                
                                rsi_1 = rsi_3 + rax_22
                            else
                                rsi_1 = rsi_3 + 0xa
                    else if (rsi_1 s< 0x20)
                        if (rsi_1 s> 0)
                            int32_t r8_2 = rsi_1 + r14_1
                            int32_t rdx_9 = ((r14_1 + 0x20) & 0xffffffc0) - r14_1
                            int32_t rax_15 = ((r8_2 + 0x20) & 0xffffffc0) - rsi_1 - r14_1
                            int32_t rcx_13 = neg.d(rax_15)
                            
                            if (rax_15 s>= 0)
                                rcx_13 = rax_15
                            
                            int32_t rax_17 = neg.d(rdx_9)
                            
                            if (rdx_9 s>= 0)
                                rax_17 = rdx_9
                            
                            if (rax_17 s> rcx_13)
                                r14_1 = r8_2
                        
                        r14_1 = (r14_1 + 0x20) & 0xffffffc0
                    else
                        int32_t r14_3 = r14_1 + (rsi_1 s>> 1)
                        rsi_1 = 0x40
                        r14_1 = r14_3 & 0xffffffc0
                
                i = i_1
                rbx[3] = rsi_1
                int32_t r8_7 = ((r14_1 + 0x20 + rsi_1) & 0xffffffc0) - rsi_1 - r14_1
                int32_t r9_4 = ((r14_1 + 0x20) & 0xffffffc0) - r14_1
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r8_7)
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r9_4)
                
                if ((temp5_1 ^ temp4_1) - temp4_1 s<= (temp3_1 ^ temp2_1) - temp2_1)
                    r8_7 = r9_4
                
                rbx[2] = r14_1 + r8_7
            
            if (arg_8 != 0)
                int32_t rcx_19 = rbx[3]
                int32_t r8_8 = rbx[2]
                int32_t rcx_20
                
                if (rcx_19 s>= 0x40)
                    rcx_20 = (rcx_19 + 0x20) & 0xffffffc0
                else
                    rcx_20 = 0x40
                
                if (rbp_1 == 1)
                    rbx[2] = r12_1 - rcx_20
                    rbx[3] = rcx_20
                else if (rbp_1 == 2)
                    rbx[3] = rcx_20
                else if (rbp_1 != 3)
                    rbx[3] = rcx_20
                    int32_t rdx_14 = rcx_20 s>> 1
                    
                    if ((rcx_20.b & 0x40) == 0)
                        rbx[2] = ((r8_8 + 0x20 + rdx_14) & 0xffffffc0) - rdx_14
                    else
                        rbx[2] = ((rdx_14 + r8_8) & 0xffffffc0) + 0x20 - rdx_14
                    
                    rbx[3] = rcx_20
            
            rbp = arg4
        else
            if (*(rbp + 0xcd) != 0)
                if (*(rbp + 0xcf) == 0)
                    goto label_142bdc35d
                
                goto label_142bdc491
            
            rbx[2] = r14_1
            rbx[3] = rsi_1
        rax = var_60_1
        rbx[4] |= 8
    
    i -= 1
    rbx = &rbx[0xa]
    i_1 = i
while (i != 0)
