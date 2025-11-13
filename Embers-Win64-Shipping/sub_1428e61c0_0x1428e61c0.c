// 函数: sub_1428e61c0
// 地址: 0x1428e61c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
int32_t r13 = 0
*arg1 = 0
int32_t* rdi = arg4
*arg2 = 0
int64_t* var_40 = nullptr
int32_t* rbp = nullptr
int32_t* var_48 = nullptr
int32_t result = sub_1428e69e0(&var_40, arg3, arg5)

if (result s<= 0)
    return result

int32_t rsi_2 = result & 4
int32_t rax_1 = result & 2

if (rsi_2 == 0)
    if (rax_1 == 0)
        goto label_1428e625c
    
    sub_1428e6540(var_40)
    return rsi_2 + 1

*arg2 = 1

if (rax_1 == 0)
label_1428e625c:
    int64_t* r15_1 = var_40
    int32_t rax_2 = sub_1428e6760(r15_1)
    
    if (rax_2 s<= 0)
        sub_1428e6540(r15_1)
        return 0
    
    if (rax_2 != 2)
        int64_t rcx_4 = sx.q(r15_1[1].d)
        int32_t** rbx_1 = &r15_1[3]
        void* r14_1 = *r15_1
        int64_t rdx_1 = *((rcx_4 << 5) + r14_1 - 0x10)
        int32_t** rsi_3
        
        if (rdx_1 == 0)
            rsi_3 = rbx_1
        else
            if (sub_1428e6640(rbx_1, rdx_1) == 0)
                sub_1428e6540(r15_1)
                return 0
            
            r14_1 = *r15_1
            rsi_3 = &var_48
            rcx_4 = zx.q(r15_1[1].d)
        
        int32_t r12_1 = 1
        
        if (rcx_4.d s> 1)
            int64_t* r14_2 = r14_1 + 8
            
            while (true)
                int64_t rbp_1 = r14_2[1]
                
                if (rbp_1 != 0)
                    int32_t* rcx_6 = r14_2[4]
                    r14_2 = &r14_2[4]
                    int32_t rbx_2 = 0
                    
                    if (sub_142898c70(rcx_6) s> 0)
                        while (true)
                            void* rax_7 = sub_142898ea0(*r14_2, rbx_2)
                            
                            if (*(rax_7 + 8) == rbp_1)
                                int32_t* rax_8 = *rsi_3
                                
                                if (rax_8 == 0)
                                    rax_8 = sub_14292b8b0()
                                    *rsi_3 = rax_8
                                    
                                    if (rax_8 != 0)
                                        goto label_1428e634e
                                    
                                label_1428e63a5:
                                    
                                    if (rsi_3 != &var_48)
                                        break
                                    
                                    sub_142898a10(var_48)
                                    break
                                
                            label_1428e634e:
                                
                                if (sub_1428989f0(rax_8, rax_7) s< 0
                                        && sub_142898d50(*rsi_3, rax_7) == 0)
                                    goto label_1428e63a5
                            
                            rbx_2 += 1
                            
                            if (rbx_2 s>= sub_142898c70(*r14_2))
                                goto label_1428e6374
                        
                        break
                    
                label_1428e6374:
                    r12_1 += 1
                    
                    if (r12_1 s< r15_1[1].d)
                        continue
                
                rbp = var_48
                rbx_1 = &r15_1[3]
                rdi = arg4
                goto label_1428e6393
            
            sub_1428e6540(r15_1)
            return 0
        
    label_1428e6393:
        int32_t r12_2
        
        if (rsi_3 != &var_48)
            rbp = *rbx_1
            r12_2 = 1
        else
            r12_2 = 2
        
        if (sub_142898c70(rdi) s<= 0)
        label_1428e64e3:
            r13 = 1
        else
            int32_t rbx_3 = 0
            int64_t* r14_3 = *((sx.q(r15_1[1].d) << 5) + *r15_1 - 0x10)
            
            if (sub_142898c70(rdi) s<= 0)
            label_1428e642e:
                int32_t rbx_4 = 0
                
                if (sub_142898c70(rdi) s<= 0)
                label_1428e64e3_1:
                    r13 = 1
                else
                    while (true)
                        int64_t* rax_19 = sub_142898ea0(rdi, rbx_4)
                        int64_t* rax_20 = sub_14292b9a0(rbp)
                        int64_t* rdi_2 = rax_20
                        
                        if (rax_20 != 0)
                        label_1428e64a3:
                            int32_t* rax_23 = r15_1[4]
                            
                            if (rax_23 == 0)
                                rax_23 = sub_142898ba0()
                                r15_1[4] = rax_23
                                
                                if (rax_23 == 0)
                                    goto label_1428e64e3_2
                            
                            if (sub_142898d50(rax_23, rdi_2) == 0)
                                break
                        else if (r14_3 != 0)
                            int32_t* rax_21 = sub_14292b530(nullptr, rax_19, **r14_3 & 0x10)
                            
                            if (rax_21 == 0)
                                break
                            
                            *(rax_21 + 0x10) = *(*r14_3 + 0x10)
                            *rax_21 = 0xc
                            rdi_2 = sub_14292b660(nullptr, rax_21, r14_3[1], r15_1)
                            goto label_1428e64a3
                        
                        rdi = arg4
                        rbx_4 += 1
                        
                        if (rbx_4 s>= sub_142898c70(rdi))
                            goto label_1428e64e3_2
            else
                while (true)
                    if (sub_1428a96d0(sub_142898ea0(rdi, rbx_3)) == 0x2ea)
                        r15_1[5].d |= 2
                        break
                    
                    rbx_3 += 1
                    
                    if (rbx_3 s>= sub_142898c70(rdi))
                        goto label_1428e642e
                
            label_1428e64e3_2:
                r13 = 1
        
        if (r12_2 == 2)
            sub_142898a10(rbp)
        
        if (r13 == 0)
            sub_1428e6540(r15_1)
            return 0
        
        *arg1 = r15_1
        
        if (rsi_2 == 0)
            return 1
        
        if (sub_142898c70(sub_14292b4b0(r15_1)) s> 0)
            return 1
    else
        sub_1428e6540(r15_1)
        
        if (rsi_2 == 0)
            return 1

return -2
