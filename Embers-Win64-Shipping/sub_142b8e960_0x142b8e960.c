// 函数: sub_142b8e960
// 地址: 0x142b8e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

int16_t rbp_1 = 0
void* r14_1 = arg1 + 0x20

while (true)
    if (rbp_1 == 0x180)
        rbp_1 = 0x2000
    else if (rbp_1 == 0x2040)
        break
    
    uint32_t rdi_1 = zx.d(rbp_1)
    int32_t rax_1 = sub_142aa3ce0(arg2, rdi_1)
    int64_t* rbx_1
    
    if (rax_1 != 0xc0)
        rbx_1 = arg2
    else
        rbx_1 = arg2[4]
        rax_1 = sub_142aa3ce0(rbx_1, rdi_1)
    
    if (sub_142b8ec20(arg1, rbx_1, rdi_1, rax_1, arg3) == 0)
        *(arg1 + 8) = 0x101000100
        *(r14_1 - 8) = 0x101000100
        *(arg1 + 0x10) = 0
        *r14_1 = 0
    else
        *(r14_1 - 8) = *(arg1 + 8)
        *r14_1 = *(arg1 + 0x10)
        int64_t r10_1 = *(arg1 + 8)
        
        if (*arg3 s<= 0 && r10_1 != 0 && (r10_1 s>> 0x20).d != 1)
            int32_t r9_2 = *(arg1 + 0x1c40)
            int64_t r10_2 = r10_1 & 0xffffffffffff3fff
            
            if (r9_2 != 0)
                int32_t r8_1 = 0
                int32_t rax_7
                
                while (true)
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(r8_1 + r9_2)
                    rax_7 = (temp2_1 - temp1_1) s>> 1
                    int64_t rdx_4 = *(*(arg1 + 0x1c50) + (sx.q(rax_7) << 3))
                    int32_t rax_11
                    
                    if (r10_2 u>= rdx_4)
                        if (r10_2 u<= rdx_4)
                            break
                        
                        if (rax_7 == r8_1)
                            rax_11 = r8_1 + 1
                        else
                            r8_1 = rax_7
                            continue
                    else if (rax_7 == r8_1)
                        rax_11 = r8_1
                    else
                        r9_2 = rax_7
                        continue
                    
                    rax_7 = not.d(rax_11)
                    break
                
                if (rax_7 s< 0)
                    sub_142aeb330(arg1 + 0x1c38, r10_2, not.d(rax_7), arg3)
            else
                sub_142aeb330(arg1 + 0x1c38, r10_2, not.d(-1), arg3)
        
        int64_t r10_3 = *(arg1 + 0x10)
        
        if (*arg3 s<= 0 && r10_3 != 0 && (r10_3 s>> 0x20).d != 1)
            int32_t r9_4 = *(arg1 + 0x1c40)
            int64_t r10_4 = r10_3 & 0xffffffffffff3fff
            
            if (r9_4 != 0)
                int32_t r8_3 = 0
                int32_t rax_15
                
                while (true)
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r8_3 + r9_4)
                    rax_15 = (temp4_1 - temp3_1) s>> 1
                    int64_t rdx_7 = *(*(arg1 + 0x1c50) + (sx.q(rax_15) << 3))
                    int32_t rax_19
                    
                    if (r10_4 u>= rdx_7)
                        if (r10_4 u<= rdx_7)
                            break
                        
                        if (rax_15 == r8_3)
                            rax_19 = r8_3 + 1
                        else
                            r8_3 = rax_15
                            continue
                    else if (rax_15 == r8_3)
                        rax_19 = r8_3
                    else
                        r9_4 = rax_15
                        continue
                    
                    rax_15 = not.d(rax_19)
                    break
                
                if (rax_15 s< 0)
                    sub_142aeb330(arg1 + 0x1c38, r10_4, not.d(rax_15), arg3)
            else
                sub_142aeb330(arg1 + 0x1c38, r10_4, not.d(-1), arg3)
    
    if (rbp_1 == 0)
        int64_t r8_5 = *(arg1 + 8)
        
        if ((r8_5 s>> 0x20).d != 1 || r8_5 == 0x101000100)
            sub_142b8dd50(arg1, 0x1ff, r8_5, *(arg1 + 0x10), arg3)
            *(arg1 + 0x20) = 0
            *(arg1 + 0x18) = 0x180000000
    
    r14_1 += 0x10
    rbp_1 += 1

int32_t rdx_9 = *(arg1 + 0x1c20)
void* rax

if (rdx_9 + 1 s< 0 || *(arg1 + 0x1c24) s< rdx_9 + 1)
    rax = sub_142aeb240(arg1 + 0x1c18, rdx_9 + 1, arg3)

if ((rdx_9 + 1 s>= 0 && *(arg1 + 0x1c24) s>= rdx_9 + 1) || rax.b != 0)
    *(*(arg1 + 0x1c30) + (sx.q(*(arg1 + 0x1c20)) << 3)) = 0x1ff
    *(arg1 + 0x1c20) += 1
