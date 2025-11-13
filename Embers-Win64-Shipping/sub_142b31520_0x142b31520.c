// 函数: sub_142b31520
// 地址: 0x142b31520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int32_t* result = __security_cookie ^ &var_2b8
int32_t* result_2 = result

if (*arg2 s<= 0)
    void var_f8
    sub_142b802b0(&var_f8)
    void var_1a8
    sub_142b802b0(&var_1a8)
    void var_258
    result = sub_142b802b0(&var_258)
    void* r9_1 = arg1
    int32_t i = 0
    int32_t i_1 = 0
    int64_t r15_1 = *(r9_1 + 0x260)
    
    if (*(r9_1 + 0x230) s> 0)
        int64_t rcx_3 = 0
        uint64_t rbp
        uint64_t var_8_1 = rbp
        uint64_t var_10_1 = arg3
        int64_t r14
        int64_t var_30_1 = r14
        int64_t var_260_1 = 0
        
        do
            int32_t rax_1
            
            if (rcx_3 s>= 0)
                rax_1 = *(r9_1 + 0x230)
            
            int32_t rcx_4
            
            if (rcx_3 s< 0 || rax_1 s<= 0 || rax_1 - i s<= 0)
                rcx_4 = 0
            else
                rcx_4 = *(*(r9_1 + 0x240) + (rcx_3 << 2))
            
            int64_t rdx = *(r15_1 + (sx.q(rcx_4) << 3))
            int64_t r10_2 = rdx s>> 0x20
            int32_t rax_5 = r10_2.d
            int64_t var_280_1 = r10_2
            result = zx.q(neg.d(rax_5))
            char r8_1 = 0
            arg3 = zx.q(sbb.d(arg3.d, arg3.d, rax_5 != 0)) & 0x500
            char var_298_1 = 0
            int32_t rbx_1 = 0
            r14.b = 0
            rbp.b = 0
            void* rdi_1 = zx.q(arg3.d)
            int32_t var_288_1
            int32_t r11_1
            
            if (r10_2.d != 0)
                result = j_sub_142b790c0(r9_1 + 0x30, r10_2.d)
                r9_1 = arg1
                r11_1 = result.d
                r8_1 = 0
                r10_2 = var_280_1
                var_288_1 = result.d
            else
                r11_1 = 0
                var_288_1 = 0
            
            uint64_t j_1 = zx.q(rdx.d s>> 8) & 0xfffff
            
            if (j_1.d != 0)
                int32_t j
                
                do
                    int32_t result_1 = j_1.d
                    int64_t r12_1 = *(r15_1 + (zx.q(j_1.d) << 3))
                    result = zx.q(r12_1.d) & 3
                    j = r12_1.d s>> 8 & 0xfffff
                    j_1 = zx.q(j)
                    
                    if (result.d == 3)
                        if (rbx_1 == result.d)
                            *arg2 = 0xf
                            result = "quaternary tailoring gap too small"
                            *(r9_1 + 0x120) = "quaternary tailoring gap too small"
                            goto label_142b31acc
                        
                        rbx_1 += 1
                    else if (result.d != 2)
                        if (result.d != 1)
                            if (r8_1 == 0)
                                int32_t rsi_5 = 0
                                int32_t k = j_1.d
                                
                                if (j != 0)
                                    do
                                        int32_t rax_32 = (*(r15_1 + (zx.q(k) << 3))).d
                                        
                                        if ((rax_32.b & 3) == 0)
                                            if ((rax_32.b u>> 3 & 1) == 0)
                                                break
                                            
                                            rsi_5 += 1
                                        
                                        k = rax_32 s>> 8 & 0xfffff
                                    while (k != 0)
                                
                                rdi_1 = zx.q(*((zx.q(r10_2.d) u>> 0x18) + *(*(r9_1 + 0x28) + 0x48)))
                                int32_t rax_35 = sub_142b79200(r9_1 + 0x30, r10_2.d, r11_1, rdi_1.b)
                                sub_142b80d00(&var_f8, rdi_1.b)
                                
                                if (sub_142b802f0(&var_f8, var_280_1.d, rax_35, rsi_5 + 1) == 0)
                                    *arg2 = 0xf
                                    result = "primary tailoring gap too small"
                                    *(arg1 + 0x120) = result
                                    goto label_142b31acc
                                
                                var_298_1 = 1
                            
                            var_280_1 = sub_142b80dc0(&var_f8)
                            arg3 = 0x500
                            r14.b = 0
                        else if ((r12_1.b u>> 3 & 1) == 0)
                            arg3 = zx.q((r12_1 s>> 0x30).w)
                            r14.b = 0
                        else
                            if (r14.b == 0)
                                int32_t k_1 = j_1.d
                                int32_t rdx_6 = 0
                                
                                if (j != 0)
                                    do
                                        int32_t rcx_14 = (*(r15_1 + (zx.q(k_1) << 3))).d
                                        int32_t rax_21 = rcx_14 & 3
                                        
                                        if (rax_21 u< 1)
                                            break
                                        
                                        if (rax_21 == 1)
                                            if ((rcx_14.b u>> 3 & 1) == 0)
                                                break
                                            
                                            rdx_6 += 1
                                        
                                        k_1 = rcx_14 s>> 8 & 0xfffff
                                    while (k_1 != 0)
                                
                                uint32_t rbx_5
                                
                                if (arg3.d != 0)
                                    if (r8_1 == 0)
                                        rdi_1 = r9_1 + 0x30
                                        rbx_5 = sub_142b792f0(rdi_1, r11_1, arg3.d)
                                        goto label_142b31885
                                    
                                    if (arg3.d != 0x100)
                                        rdi_1 = r9_1 + 0x30
                                        rbx_5 = *(*(r9_1 + 0x30) + 0x10) u>> 8 & 0xff00
                                        goto label_142b31885
                                    
                                    rbx_5 = 0x500
                                else
                                    void* rax_23 = *(r9_1 + 0x30)
                                    rdi_1 = r9_1 + 0x30
                                    arg3 = zx.q((*(rax_23 + 0x10) u>> 8 & 0xff00) - 0x100)
                                    rbx_5 = zx.d(*(rax_23 + (zx.q(*(rax_23 + 4)) << 2) + 2))
                                label_142b31885:
                                    
                                    if (arg3.d == 0x500)
                                        arg3 = zx.q(*(*rdi_1 + 0x12)) & 0xff00
                                
                                sub_142b80d60(&var_1a8)
                                
                                if (sub_142b802f0(&var_1a8, arg3.d, rbx_5, rdx_6 + 1) == 0)
                                    *arg2 = 0xf
                                    result = "secondary tailoring gap too small"
                                    *(arg1 + 0x120) = result
                                    goto label_142b31acc
                                
                                r14.b = 1
                            
                            arg3 = zx.q(sub_142b80dc0(&var_1a8))
                        
                        int32_t rax_38 = arg3.d
                        result = zx.q(neg.d(rax_38))
                        rdi_1 = zx.q(sbb.d(rdi_1.d, rdi_1.d, rax_38 != 0)) & 0x500
                        rbp.b = 0
                        rbx_1 = 0
                    else if ((r12_1.b u>> 3 & 1) == 0)
                        result = r12_1 s>> 0x30
                        rdi_1 = zx.q(result.w)
                        rbp.b = 0
                        rbx_1 = 0
                    else
                        if (rbp.b == 0)
                            int32_t k_2 = j_1.d
                            int32_t rdx_3 = 0
                            
                            if (j != 0)
                                do
                                    int32_t rcx_7 = (*(r15_1 + (zx.q(k_2) << 3))).d
                                    int32_t rax_10 = rcx_7 & 3
                                    
                                    if (rax_10 u< 2)
                                        break
                                    
                                    if (rax_10 == 2)
                                        if ((rcx_7.b u>> 3 & 1) == 0)
                                            break
                                        
                                        rdx_3 += 1
                                    
                                    k_2 = rcx_7 s>> 8 & 0xfffff
                                while (k_2 != 0)
                            
                            uint32_t rbx_3
                            
                            if (rdi_1.d == 0)
                                int32_t* rax_12 = *(r9_1 + 0x30)
                                rdi_1 = zx.q((zx.d(rax_12[4].b) << 8) - 0x100)
                                rbx_3 = rax_12[zx.q(*rax_12)] & 0x3f3f
                            else if (r8_1 == 0 && r14.b == 0)
                                rbx_3 = sub_142b79410(r9_1 + 0x30, r11_1, arg3.d, rdi_1.d)
                            else if (rdi_1.d != 0x100)
                                rbx_3 = zx.d(*(*(r9_1 + 0x30) + 0x10)) << 8
                            else
                                rbx_3 = 0x500
                            
                            sub_142b80d90(&var_258)
                            
                            if (sub_142b802f0(&var_258, rdi_1.d, rbx_3, rdx_3 + 1) == 0)
                                *arg2 = 0xf
                                result = "tertiary tailoring gap too small"
                                *(arg1 + 0x120) = result
                                goto label_142b31acc
                            
                            rbp.b = 1
                        
                        result = sub_142b80dc0(&var_258)
                        rdi_1 = zx.q(result.d)
                        rbx_1 = 0
                    
                    r10_2 = var_280_1
                    r12_1.b u>>= 3
                    
                    if ((r12_1.b & 1) != 0)
                        result = zx.q(result_1)
                        *(r15_1 + (result << 3)) = zx.q((arg3.d << 0xa | rbx_1) << 6)
                            | zx.q(rdi_1.d) | zx.q(r10_2.d) << 0x20
                    
                    r8_1 = var_298_1
                    r9_1 = arg1
                    r11_1 = var_288_1
                while (j != 0)
            
            i = i_1 + 1
            rcx_3 = var_260_1 + 1
            i_1 = i
            var_260_1 = rcx_3
        while (i s< *(r9_1 + 0x230))

label_142b31acc:
__security_check_cookie(result_2 ^ &var_2b8)
return result
