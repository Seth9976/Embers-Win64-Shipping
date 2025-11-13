// 函数: sub_142b15e50
// 地址: 0x142b15e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rsi = arg4
int32_t result_1 = arg3
uint64_t result

if (arg4 != 0)
    uint32_t rax_2 = sub_142aa0780(arg1, arg2, arg3, 1)
    uint32_t r14_1 = rax_2
    uint32_t var_a0_1 = rax_2
    
    if (rax_2 != result_1)
        void var_54
        void* var_68_1 = &var_54
        int32_t rbx_1 = 0
        int32_t var_60_1 = 0
        int32_t var_58_1 = 0
        
        if (rsi == 1)
            int64_t rbx_2 = sx.q(*(arg1 + 0xf4))
            
            if (rbx_2.d s> 0x10)
                void* rax_3 = sub_142a7dd00(rbx_2)
                
                if (rax_3 == 0)
                    rbx_2 = zx.q(var_60_1)
                else
                    var_68_1 = rax_3
                    var_60_1 = rbx_2.d
            else
                rbx_2 = 0x10
                var_60_1 = 0x10
            
            memset(var_68_1, 0, sx.q(rbx_2.d))
            rbx_1 = var_60_1
        
        uint32_t var_a4_1 = r14_1
        uint32_t r13_2 = result_1 - r14_1
        uint32_t var_a8_1 = r13_2
        void* r8_1 = arg1
        int64_t rax_5 = sx.q(*(*(r8_1 + 0xd0) + 8))
        int64_t var_78_1 = rax_5
    label_142b15f41:
        int16_t* r15_1 = arg2
        
        while (true)
            int32_t var_80
            int32_t var_5c
            
            if (rsi == 1)
                int32_t rdi = 0
                int32_t var_a8_2 = 0
                int64_t rsi_1 = 0
                var_80.q = 0
                
                if (rax_5 s> 0)
                    while (true)
                        uint32_t rsi_2 = zx.d(*(*(r8_1 + 0xe0) + rsi_1))
                        
                        if (rsi_2 != 0xff)
                            void* rax_7 = sub_142ae72d0(*(r8_1 + 0xd0), rdi)
                            int16_t rcx_3 = *(rax_7 + 8)
                            int16_t* r12_1
                            
                            if ((rcx_3.b & 0x11) == 0)
                                r12_1 = rax_7 + 0xa
                                
                                if ((rcx_3.b & 2) == 0)
                                    r12_1 = *(rax_7 + 0x18)
                            else
                                r12_1 = nullptr
                            
                            int32_t r15_3
                            
                            if (rcx_3 s< 0)
                                r15_3 = *(rax_7 + 0xc)
                            else
                                r15_3 = sx.d(rcx_3) s>> 5
                            
                            if (rsi_2 u>= 0xfe)
                                rsi_2 = r15_3 - 1
                                
                                if ((zx.d(r12_1[sx.q(rsi_2)]) & 0xfffffc00) == 0xdc00 && rsi_2 s> 0
                                        && (zx.d(r12_1[sx.q(rsi_2 - 1)]) & 0xfffffc00) == 0xd800)
                                    rsi_2 -= 1
                            
                            if (rsi_2 s> r14_1)
                                rsi_2 = r14_1
                            
                            int32_t r14_3 = r15_3 - rsi_2
                            rbx_1 = var_60_1
                            
                            if (r14_3 s<= r13_2)
                                uint32_t rdx_3 = var_a4_1 - rsi_2
                                
                                while (true)
                                    int32_t rdi_2 = var_58_1 + r14_3
                                    int32_t rax_10 = rdi_2
                                    
                                    if (rdi_2 s>= rbx_1)
                                        rax_10 -= rbx_1
                                    
                                    if (*(sx.q(rax_10) + var_68_1) == 0
                                            && sub_142b15d90(arg2, rdx_3, arg3, r12_1, r15_3) != 0)
                                        if (r14_3 == r13_2)
                                            goto label_142b16326_1
                                        
                                        if (rdi_2 s>= rbx_1)
                                            rdi_2 -= rbx_1
                                        
                                        *(sx.q(rdi_2) + var_68_1) = 1
                                        var_5c += 1
                                        rbx_1 = var_60_1
                                    
                                    if (rsi_2 != 0)
                                        rsi_2 -= 1
                                        rdx_3 += 1
                                        r14_3 += 1
                                        
                                        if (r14_3 s<= r13_2)
                                            continue
                                    
                                    rdi = var_a8_2
                                    break
                            
                            r14_1 = var_a0_1
                            r8_1 = arg1
                        
                        rdi += 1
                        var_a8_2 = rdi
                        rsi_1 = var_80.q + 1
                        var_80.q = rsi_1
                        
                        if (rsi_1 s>= var_78_1)
                            break
                    
                    r15_1 = arg2
                
                goto label_142b161c1
            
            uint32_t r12_2 = 0
            uint32_t rsi_4 = 0
            int32_t rcx_11 = 0
            var_80 = 0
            int64_t r13_3 = 0
            
            if (rax_5 s<= 0)
                goto label_142b161bd
            
            do
                uint32_t rbx_3 = zx.d(*(*(r8_1 + 0xe0) + r13_3))
                void* rax_15 = sub_142ae72d0(*(r8_1 + 0xd0), rcx_11)
                int16_t rcx_13 = *(rax_15 + 8)
                int16_t* r15_4
                
                if ((rcx_13.b & 0x11) == 0)
                    r15_4 = rax_15 + 0xa
                    
                    if ((rcx_13.b & 2) == 0)
                        r15_4 = *(rax_15 + 0x18)
                else
                    r15_4 = nullptr
                
                uint32_t r14_5
                
                if (rcx_13 s< 0)
                    r14_5 = *(rax_15 + 0xc)
                else
                    r14_5 = sx.d(rcx_13) s>> 5
                
                if (rbx_3 u>= 0xfe)
                    rbx_3 = r14_5
                
                if (rbx_3 s> var_a0_1)
                    rbx_3 = var_a0_1
                
                uint32_t rdi_4 = r14_5 - rbx_3
                uint32_t rax_16 = var_a8_1
                
                if (rdi_4 s<= rax_16)
                    uint32_t rdx_6 = var_a4_1 - rbx_3
                    
                    while (rbx_3 s>= rsi_4)
                        if (rbx_3 s> rsi_4 || rdi_4 s> r12_2)
                            if (sub_142b15d90(arg2, rdx_6, arg3, r15_4, r14_5) != 0)
                                r12_2 = rdi_4
                                rsi_4 = rbx_3
                                break
                            
                            rax_16 = var_a8_1
                        
                        rbx_3 -= 1
                        rdx_6 += 1
                        rdi_4 += 1
                        
                        if (rdi_4 s> rax_16)
                            break
                
                rcx_11 = var_80 + 1
                var_80 = rcx_11
                r13_3 += 1
                rax_5 = var_78_1
                r8_1 = arg1
            while (r13_3 s< rax_5)
            
            if (r12_2 != 0 || rsi_4 != 0)
                var_a4_1 += r12_2
                r13_2 = var_a8_1 - r12_2
                bool cond:4_1 = var_a8_1 == r12_2
                var_a8_1 = r13_2
                
                if (not(cond:4_1))
                    r14_1 = 0
                    var_a0_1 = 0
                    rbx_1 = var_60_1
                    rsi = arg4
                    goto label_142b15f41
                
            label_142b16326:
                result_1 = arg3
            else
                rbx_1 = var_60_1
                r15_1 = arg2
            label_142b161bd:
                r13_2 = var_a8_1
            label_142b161c1:
                int64_t rsi_5
                
                if (var_a0_1 != 0)
                    rsi_5 = zx.q(var_a4_1)
                label_142b1628e:
                    
                    if (var_5c != 0)
                        goto label_142b1629b
                    
                    result_1 = rsi_5.d
                else
                    rsi_5 = sx.q(var_a4_1)
                    
                    if (rsi_5.d == 0)
                        goto label_142b1628e
                    
                    void* rdx_7 = &r15_1[rsi_5]
                    
                    if (var_5c != 0)
                        int32_t rax_19 = sub_142b174f0(arg1, rdx_7, r13_2)
                        
                        if (rax_19 s<= 0)
                            rbx_1 = var_60_1
                        label_142b1629b:
                            int32_t rdx_11 = var_58_1 + 1
                            int32_t rax_23
                            
                            if (rdx_11 s>= rbx_1)
                            label_142b162d1:
                                rdx_11 = 0
                                char* rcx_19 = nullptr
                                
                                if (*var_68_1 == 0)
                                    do
                                        rdx_11 += 1
                                        rcx_19 = &rcx_19[1]
                                    while (*(rcx_19 + var_68_1) == 0)
                                
                                *(rcx_19 + var_68_1) = 0
                                var_5c -= 1
                                rax_23 = rbx_1 - var_58_1 + rdx_11
                            else
                                void* r8_6 = sx.q(rdx_11) + var_68_1
                                
                                while (*r8_6 == 0)
                                    rdx_11 += 1
                                    r8_6 += 1
                                    
                                    if (rdx_11 s>= rbx_1)
                                        goto label_142b162d1
                                
                                *(sx.q(rdx_11) + var_68_1) = 0
                                var_5c -= 1
                                rax_23 = rdx_11 - var_58_1
                            
                            var_58_1 = rdx_11
                            var_a4_1 = rsi_5.d + rax_23
                            r13_2 -= rax_23
                            var_a8_1 = r13_2
                            r14_1 = 0
                            var_a0_1 = 0
                            rbx_1 = var_60_1
                            r8_1 = arg1
                            rax_5 = var_78_1
                            rsi = arg4
                            continue
                        else
                            if (rax_19 != r13_2)
                                var_a4_1 = rsi_5.d + rax_19
                                r13_2 -= rax_19
                                var_a8_1 = r13_2
                                int32_t rdx_9 = var_58_1 + rax_19
                                rbx_1 = var_60_1
                                
                                if (rdx_9 s>= rbx_1)
                                    rdx_9 -= rbx_1
                                
                                char* rcx_17 = sx.q(rdx_9)
                                
                                if (*(rcx_17 + var_68_1) != 0)
                                    *(rcx_17 + var_68_1) = 0
                                    var_5c -= 1
                                    rbx_1 = var_60_1
                                
                                var_58_1 = rdx_9
                                r14_1 = 0
                                var_a0_1 = 0
                                r8_1 = arg1
                                rax_5 = var_78_1
                                rsi = arg4
                                continue
                            
                        label_142b16326_1:
                            result_1 = arg3
                    else
                        uint32_t rax_18 = sub_142aa0780(arg1, rdx_7, r13_2, 1)
                        r14_1 = rax_18
                        var_a0_1 = rax_18
                        
                        if (rax_18 != r13_2 && rax_18 != 0)
                            var_a4_1 = rsi_5.d + rax_18
                            r13_2 -= rax_18
                            var_a8_1 = r13_2
                            rbx_1 = var_60_1
                            r8_1 = arg1
                            rax_5 = var_78_1
                            rsi = arg4
                            continue
                        
                        result_1 = rsi_5.d + rax_18
            
            if (var_68_1 == &var_54)
                break
            
            sub_142a7dcd0(var_68_1)
            break
    
    result = zx.q(result_1)
else
    result = sub_142b16f30(arg1, arg2, arg3)

__security_check_cookie(rax_1 ^ &var_d8)
return result
