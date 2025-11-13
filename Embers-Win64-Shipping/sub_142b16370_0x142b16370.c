// 函数: sub_142b16370
// 地址: 0x142b16370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r14 = arg3
void* rdi = arg2
int32_t result

if (arg4 != 0)
    result = sub_142aa0950(arg1, arg2, arg3, 1)
    int32_t result_2 = result
    
    if (result != 0)
        uint32_t rsi_2 = r14 - result
        uint32_t var_a8_1 = rsi_2
        void var_54
        void* var_68_1 = &var_54
        int16_t* r15_1 = nullptr
        int32_t rbx_1 = 0
        int32_t var_60_1 = 0
        int64_t var_5c_1 = 0
        int32_t r10_1 = arg4
        
        if (r10_1 == 1)
            int64_t rbx_2 = sx.q(*(arg1 + 0xf4))
            
            if (rbx_2.d s> 0x10)
                void* rax_2 = sub_142a7dd00(rbx_2)
                
                if (rax_2 == 0)
                    rbx_2 = zx.q(var_60_1)
                else
                    var_68_1 = rax_2
                    var_60_1 = rbx_2.d
            else
                rbx_2 = 0x10
                var_60_1 = 0x10
            
            memset(var_68_1, 0, sx.q(rbx_2.d))
            rbx_1 = var_60_1
            r10_1 = arg4
        
        void* r8_1 = arg1
        int64_t rcx_2 = sx.q(*(*(r8_1 + 0xd0) + 8))
        int64_t r9 = *(r8_1 + 0xe0)
        int64_t var_90_1 = r9
        
        if (*(r8_1 + 0xfc) != 0)
            r9 += rcx_2
            var_90_1 = r9
        
        int64_t rdx = rcx_2
        int32_t result_1
        
        while (true)
            if (r10_1 == 1)
                int32_t rdi_1 = 0
                int32_t var_9c_1 = 0
                void* r14_1 = nullptr
                void* var_78_1 = nullptr
                
                if (rdx s> 0)
                    while (true)
                        uint32_t r14_3 = zx.d(*(r14_1 + r9))
                        
                        if (r14_3 != 0xff)
                            void* rax_4 = sub_142ae72d0(*(r8_1 + 0xd0), rdi_1)
                            int16_t rcx_4 = *(rax_4 + 8)
                            int16_t* r12_1
                            
                            if ((rcx_4.b & 0x11) == 0)
                                r12_1 = rax_4 + 0xa
                                
                                if ((rcx_4.b & 2) == 0)
                                    r12_1 = *(rax_4 + 0x18)
                            else
                                r12_1 = nullptr
                            
                            int32_t r15_3
                            
                            if (rcx_4 s< 0)
                                r15_3 = *(rax_4 + 0xc)
                            else
                                r15_3 = sx.d(rcx_4) s>> 5
                            
                            if (r14_3 u>= 0xfe)
                                int32_t rcx_5 = 1
                                
                                if ((zx.d(*r12_1) & 0xfffffc00) == 0xd800 && r15_3 != 1
                                        && (zx.d(r12_1[1]) & 0xfffffc00) == 0xdc00)
                                    rcx_5 = 2
                                
                                r14_3 = r15_3 - rcx_5
                            
                            if (r14_3 s> rsi_2)
                                r14_3 = rsi_2
                            
                            int32_t rsi_4 = r15_3 - r14_3
                            rbx_1 = var_60_1
                            
                            if (rsi_4 s<= result_2)
                                int32_t rdx_3 = result_2 - rsi_4
                                
                                while (true)
                                    int32_t rdi_3 = var_5c_1:4.d + rsi_4
                                    int32_t rax_9 = rdi_3
                                    
                                    if (rdi_3 s>= rbx_1)
                                        rax_9 -= rbx_1
                                    
                                    if (*(sx.q(rax_9) + var_68_1) == 0
                                            && sub_142b15d90(arg2, rdx_3, arg3, r12_1, r15_3) != 0)
                                        if (rsi_4 == result_2)
                                            goto label_142b1684f
                                        
                                        if (rdi_3 s>= rbx_1)
                                            rdi_3 -= rbx_1
                                        
                                        *(sx.q(rdi_3) + var_68_1) = 1
                                        var_5c_1.d += 1
                                        rbx_1 = var_60_1
                                    
                                    if (r14_3 != 0)
                                        r14_3 -= 1
                                        rsi_4 += 1
                                        rdx_3 -= 1
                                        
                                        if (rsi_4 s<= result_2)
                                            continue
                                    
                                    rdi_1 = var_9c_1
                                    break
                            
                            rsi_2 = var_a8_1
                            rdx = rcx_2
                            r8_1 = arg1
                            r9 = var_90_1
                        
                        rdi_1 += 1
                        var_9c_1 = rdi_1
                        r14_1 = var_78_1 + 1
                        var_78_1 = r14_1
                        
                        if (r14_1 s>= rdx)
                            break
                
                goto label_142b16707
            
            uint32_t r12_2 = 0
            uint32_t rsi_5 = 0
            int32_t rcx_9 = 0
            int32_t var_9c_2 = 0
            void* rax_13 = nullptr
            void* var_78_2 = nullptr
            
            if (rdx s<= 0)
                goto label_142b1670f
            
            do
                uint32_t rdi_4 = zx.d(*(rax_13 + r9))
                void* rax_14 = sub_142ae72d0(*(r8_1 + 0xd0), rcx_9)
                int16_t rcx_11 = *(rax_14 + 8)
                
                if ((rcx_11.b & 0x11) == 0)
                    r15_1 = rax_14 + 0xa
                    
                    if ((rcx_11.b & 2) == 0)
                        r15_1 = *(rax_14 + 0x18)
                
                uint32_t r14_6
                
                if (rcx_11 s< 0)
                    r14_6 = *(rax_14 + 0xc)
                else
                    r14_6 = sx.d(rcx_11) s>> 5
                
                if (rdi_4 u>= 0xfe)
                    rdi_4 = r14_6
                
                if (rdi_4 s> var_a8_1)
                    rdi_4 = var_a8_1
                
                uint32_t rbx_4 = r14_6 - rdi_4
                
                if (rbx_4 s<= result_2)
                    int32_t rdx_6 = result_2 - rbx_4
                    
                    while (rdi_4 s>= rsi_5)
                        if ((rdi_4 s> rsi_5 || rbx_4 s> r12_2)
                                && sub_142b15d90(arg2, rdx_6, arg3, r15_1, r14_6) != 0)
                            r12_2 = rbx_4
                            rsi_5 = rdi_4
                            break
                        
                        rdi_4 -= 1
                        rbx_4 += 1
                        rdx_6 -= 1
                        
                        if (rbx_4 s> result_2)
                            break
                
                rcx_9 = var_9c_2 + 1
                var_9c_2 = rcx_9
                rax_13 = var_78_2 + 1
                var_78_2 = rax_13
                r15_1 = nullptr
                r8_1 = arg1
                r9 = var_90_1
            while (rax_13 s< rcx_2)
            
            int32_t result_4
            
            if (r12_2 != 0 || rsi_5 != 0)
                int32_t result_6 = result_2
                result_2 -= r12_2
                
                if (result_6 == r12_2)
                label_142b1684f:
                    result_4 = 0
                else
                    rsi_2 = 0
                    var_a8_1 = 0
                    rbx_1 = var_60_1
                    rdi = arg2
                    r14 = arg3
                    rdx = rcx_2
                    r10_1 = arg4
                    continue
            else
                rbx_1 = var_60_1
            label_142b16707:
                rdi = arg2
                r14 = arg3
            label_142b1670f:
                
                if (var_a8_1 != 0 || result_2 == r14)
                    if (var_5c_1.d != 0)
                        goto label_142b167ce
                    
                    result_4 = result_2
                else
                    if (var_5c_1.d == 0)
                        int32_t result_5 = result_2
                        int32_t result_3 = sub_142aa0950(arg1, rdi, result_2, 1)
                        result_2 = result_3
                        rsi_2 = result_5 - result_3
                        var_a8_1 = rsi_2
                        
                        if (result_3 == 0 || rsi_2 == 0)
                            result_1 = result_2
                            break
                            break
                        
                        r15_1 = nullptr
                    label_142b1675b:
                        rbx_1 = var_60_1
                    label_142b1675e:
                        rdx = rcx_2
                        r8_1 = arg1
                        r9 = var_90_1
                        r10_1 = arg4
                        continue
                        continue
                    
                    int32_t rax_17 = sub_142b17570(arg1, rdi, result_2)
                    
                    if (rax_17 s> 0)
                        if (rax_17 == result_2)
                            result_1 = 0
                            break
                        
                        result_2 -= rax_17
                        int32_t rdx_9 = var_5c_1:4.d + rax_17
                        rbx_1 = var_60_1
                        
                        if (rdx_9 s>= rbx_1)
                            rdx_9 -= rbx_1
                        
                        char* rcx_15 = sx.q(rdx_9)
                        
                        if (*(rcx_15 + var_68_1) != 0)
                            *(rcx_15 + var_68_1) = 0
                            var_5c_1.d -= 1
                            rbx_1 = var_60_1
                        
                        var_5c_1:4.d = rdx_9
                        r15_1 = nullptr
                        rsi_2 = 0
                        var_a8_1 = 0
                        goto label_142b1675e
                    
                    rbx_1 = var_60_1
                label_142b167ce:
                    int32_t rdx_11 = var_5c_1:4.d + 1
                    int32_t rax_21
                    
                    if (rdx_11 s>= rbx_1)
                    label_142b16809:
                        int32_t rbx_5 = rbx_1 - var_5c_1:4.d
                        r15_1 = nullptr
                        rdx_11 = 0
                        char* rcx_17 = nullptr
                        
                        if (*var_68_1 == 0)
                            do
                                rdx_11 += 1
                                rcx_17 = &rcx_17[1]
                            while (*(rcx_17 + var_68_1) == 0)
                        
                        *(rcx_17 + var_68_1) = 0
                        var_5c_1.d -= 1
                        rax_21 = rbx_5 + rdx_11
                    else
                        void* r8_6 = sx.q(rdx_11) + var_68_1
                        
                        while (*r8_6 == 0)
                            rdx_11 += 1
                            r8_6 += 1
                            
                            if (rdx_11 s>= rbx_1)
                                goto label_142b16809
                        
                        *(sx.q(rdx_11) + var_68_1) = 0
                        var_5c_1.d -= 1
                        rax_21 = rdx_11 - var_5c_1:4.d
                        r15_1 = nullptr
                    
                    var_5c_1:4.d = rdx_11
                    result_2 -= rax_21
                    rsi_2 = 0
                    var_a8_1 = 0
                    goto label_142b1675b
            
            result_1 = result_4
            break
        
        if (var_68_1 != &var_54)
            sub_142a7dcd0(var_68_1)
        
        result = result_1
else
    result = sub_142b170c0(arg1, arg2, arg3)

__security_check_cookie(rax_1 ^ &var_d8)
return result
