// 函数: sub_142b7c070
// 地址: 0x142b7c070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (*arg4 s> 0)
    return zx.q(arg2)

if ((*(arg3 + 8) & 1) == 0)
    *(arg3 + 8) &= 0x1f
else
    *(arg3 + 8) = 2

while (true)
label_142b7c0e0:
    void* rcx = *(arg1 + 0x10)
    int32_t rsi_1 = rdi
    int16_t rax_2 = *(rcx + 8)
    int32_t rax_4
    
    if (rax_2 s< 0)
        rax_4 = *(rcx + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5
    
    if (rdi s< rax_4)
        int16_t rdx = *(rcx + 8)
        int32_t rax_6
        
        if (rdx s< 0)
            rax_6 = *(rcx + 0xc)
        else
            rax_6 = sx.d(rdx) s>> 5
        
        int16_t r8
        
        if (rdi u>= rax_6)
            r8 = -1
        else
            void* rdx_1 = rcx + 0xa
            
            if ((rdx.b & 2) == 0)
                rdx_1 = *(rcx + 0x18)
            
            r8 = *(rdx_1 + (sx.q(rdi) << 1))
        
        uint32_t rbx_1 = zx.d(r8)
        rdi += 1
        uint64_t rax_9
        
        if (rbx_1 - 0x21 u<= 0x5d)
            rax_9 = zx.q(rbx_1 - 0x30)
        
        int16_t arg_20
        
        if (rbx_1 - 0x21 u<= 0x5d && (rax_9.d u> 0x2a || not(test_bit(0x7fffffe03ff, rax_9)))
                && rbx_1 - 0x61 u> 0x19)
            char const* const rax_27
            
            if (rbx_1 == 0x27)
                int16_t rax_11 = *(rcx + 8)
                int32_t rax_13
                
                if (rax_11 s< 0)
                    rax_13 = *(rcx + 0xc)
                else
                    rax_13 = sx.d(rax_11) s>> 5
                
                if (rdi s< rax_13)
                    int16_t rdx_2 = *(rcx + 8)
                    int32_t rax_15
                    
                    if (rdx_2 s< 0)
                        rax_15 = *(rcx + 0xc)
                    else
                        rax_15 = sx.d(rdx_2) s>> 5
                    
                    if (rdi u< rax_15)
                        void* rcx_1
                        
                        if ((rdx_2.b & 2) == 0)
                            rcx_1 = *(rcx + 0x18)
                        else
                            rcx_1 = rcx + 0xa
                        
                        if (*(rcx_1 + (sx.q(rdi) << 1)) == 0x27)
                            arg_20 = 0x27
                            sub_142a48d70(arg3, &arg_20, 0, 1)
                            rdi += 1
                            continue
                
                int64_t rbx_2 = sx.q(rdi) * 2
                
                while (true)
                    void* rax_18 = *(arg1 + 0x10)
                    int16_t rcx_3 = *(rax_18 + 8)
                    int32_t rcx_5
                    
                    if (rcx_3 s< 0)
                        rcx_5 = *(rax_18 + 0xc)
                    else
                        rcx_5 = sx.d(rcx_3) s>> 5
                    
                    if (rdi == rcx_5)
                        if (*arg4 s> 0)
                            return zx.q(rdi)
                        
                        rax_27 = "quoted literal text missing terminating apostrophe"
                        break
                    
                    int16_t rdx_4 = *(rax_18 + 8)
                    int32_t rcx_7
                    
                    if (rdx_4 s< 0)
                        rcx_7 = *(rax_18 + 0xc)
                    else
                        rcx_7 = sx.d(rdx_4) s>> 5
                    
                    int16_t rdx_5
                    
                    if (rdi u>= rcx_7)
                        rdx_5 = -1
                    else
                        void* rcx_8 = rax_18 + 0xa
                        
                        if ((rdx_4.b & 2) == 0)
                            rcx_8 = *(rax_18 + 0x18)
                        
                        rdx_5 = *(rbx_2 + rcx_8)
                    
                    uint32_t r8_1 = zx.d(rdx_5)
                    rdi += 1
                    rbx_2 += 2
                    
                    if (r8_1 == 0x27)
                        int16_t rcx_9 = *(rax_18 + 8)
                        int32_t rcx_11
                        
                        if (rcx_9 s< 0)
                            rcx_11 = *(rax_18 + 0xc)
                        else
                            rcx_11 = sx.d(rcx_9) s>> 5
                        
                        if (rdi s>= rcx_11)
                            goto label_142b7c0e0
                        
                        int16_t rdx_6 = *(rax_18 + 8)
                        int32_t rcx_13
                        
                        if (rdx_6 s< 0)
                            rcx_13 = *(rax_18 + 0xc)
                        else
                            rcx_13 = sx.d(rdx_6) s>> 5
                        
                        if (rdi u>= rcx_13)
                            goto label_142b7c0e0
                        
                        void* rax_19
                        
                        if ((rdx_6.b & 2) == 0)
                            rax_19 = *(rax_18 + 0x18)
                        else
                            rax_19 = rax_18 + 0xa
                        
                        if (*(rbx_2 + rax_19) != 0x27)
                            goto label_142b7c0e0
                        
                        rdi += 1
                        rbx_2 += 2
                    
                    arg_20 = r8_1.w
                    sub_142a48d70(arg3, &arg_20, 0, 1)
                
            label_142b7c345:
                *arg4 = 3
                bool cond:5_1 = *(arg1 + 0x28) == 0
                *(arg1 + 0x30) = rax_27
                
                if (not(cond:5_1))
                    sub_142b7c7c0(arg1)
                
                break
            
            if (rbx_1 == 0x5c)
                int16_t rax_20 = *(rcx + 8)
                int32_t rax_22
                
                if (rax_20 s< 0)
                    rax_22 = *(rcx + 0xc)
                else
                    rax_22 = sx.d(rax_20) s>> 5
                
                if (rdi == rax_22)
                    if (*arg4 s> 0)
                        break
                    
                    rax_27 = "backslash escape at the end of the rule string"
                else
                    int32_t rax_23 = sub_142a486d0(rcx, rdi)
                    sub_142a48580(arg3, rax_23)
                    int32_t rax_24
                    rax_24.b = rax_23 u> 0xffff
                    rdi += rax_24 + 1
                    continue
                
                goto label_142b7c345
        else if (sub_142b13730(rbx_1) == 0)
            arg_20 = rbx_1.w
            sub_142a48d70(arg3, &arg_20, 0, 1)
            continue
    
    int32_t rbx_4 = 0
    
    if (sub_142a4a1f0(arg3) s> 0)
        while (true)
            int32_t rax_29 = sub_142a486d0(arg3, rbx_4)
            char const* const rax_35
            
            if ((rax_29 & 0xfffff800) == 0xd800)
                if (*arg4 s> 0)
                    break
                
                rax_35 = "string contains an unpaired surrogate"
            else if (rax_29 - 0xfffd u<= 2)
                if (*arg4 s> 0)
                    break
                
                rax_35 = "string contains U+FFFD, U+FFFE or U+FFFF"
            else
                int32_t rax_32
                rax_32.b = rax_29 u> 0xffff
                rbx_4 += rax_32 + 1
                
                if (rbx_4 s>= sub_142a4a1f0(arg3))
                    break
                
                continue
            
            *arg4 = 3
            bool cond:4_1 = *(arg1 + 0x28) == 0
            *(arg1 + 0x30) = rax_35
            
            if (not(cond:4_1))
                sub_142b7c7c0(arg1)
            
            break
    
    return zx.q(rsi_1)

return zx.q(rdi)
