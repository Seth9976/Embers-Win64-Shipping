// 函数: sub_142b76b60
// 地址: 0x142b76b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r12 = arg7
int32_t rsi = arg3
int32_t rbp = arg2

if (*r12 s> 0)
    return 0

arg7.b = 1
char var_44 = 0

while (true)
    char rax_2 = (*(arg1 + 0x18)).b
    void* r14_1
    
    if ((rax_2 & 0x11) == 0)
        r14_1 = arg1 + 0x1a
        
        if ((rax_2 & 2) == 0)
            r14_1 = *(arg1 + 0x28)
    else
        r14_1 = nullptr
    
    int16_t rax_3 = *(arg1 + 0x18)
    int32_t rdx_1
    
    if (rax_3 s< 0)
        rdx_1 = *(arg1 + 0x1c)
    else
        rdx_1 = sx.d(rax_3) s>> 5
    
    int16_t* rax_5 = sub_142b138d0(r14_1 + (sx.q(rsi) << 1), rdx_1 - rsi)
    int16_t rax_6 = *(arg1 + 0x18)
    int32_t rdi_3 = ((rax_5 - r14_1) s>> 1).d
    uint64_t rax_8
    
    if (rax_6 s< 0)
        rax_8 = zx.q(*(arg1 + 0x1c))
    else
        rax_8 = zx.q(sx.d(rax_6) s>> 5)
    
    bool rdx_3 = rdi_3 == rax_8.d
    int32_t rax_10
    void* rcx_2
    
    if (rdi_3 != rax_8.d)
        int16_t rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 s< 0)
            rax_10 = *(arg1 + 0x1c)
        else
            rax_10 = sx.d(rcx_1) s>> 5
        
        if (rdi_3 u< rax_10)
            rcx_2 = arg1 + 0x1a
            
            if ((rcx_1.b & 2) == 0)
                rcx_2 = *(arg1 + 0x28)
    
    uint64_t result
    void* rcx_10
    int32_t r8_5
    
    if (rdi_3 == rax_8.d || (rdi_3 u< rax_10 && *(rcx_2 + (sx.q(rdi_3) << 1)) == 0x7d))
        if (arg4 s> 0 || ***(arg1 + 0x50) == 0)
            rax_8.b = 1
        else
            rax_8 = 0
        
        if (rdx_3 != rax_8.b)
            if (var_44 != 0)
                return zx.q(rdi_3)
            
            sub_142b77300(arg1, arg6, 0)
            *r12 = 0x1010f
            break
        
    label_142b76f9b:
        r8_5 = arg3
    label_142b76fa0:
        rcx_10 = arg1
    label_142b76fa6:
        sub_142b77300(rcx_10, arg6, r8_5)
        result = 0
        *r12 = 0x10107
    else
        void* rcx_6
        int32_t rsi_1
        int32_t r8
        
        if (((rbp - 3) & 0xfffffffd) != 0)
        label_142b76d13:
            char rax_16 = (*(arg1 + 0x18)).b
            void* r14_2
            
            if ((rax_16 & 0x11) == 0)
                r14_2 = arg1 + 0x1a
                
                if ((rax_16 & 2) == 0)
                    r14_2 = *(arg1 + 0x28)
            else
                r14_2 = nullptr
            
            int16_t rax_17 = *(arg1 + 0x18)
            int32_t rdx_7
            
            if (rax_17 s< 0)
                rdx_7 = *(arg1 + 0x1c)
            else
                rdx_7 = sx.d(rax_17) s>> 5
            
            rsi_1 = ((sub_142b13770(r14_2 + (sx.q(rdi_3) << 1), rdx_7 - rdi_3) - r14_2) s>> 1).d
            int32_t rbp_2 = rsi_1 - rdi_3
            
            if (rsi_1 == rdi_3)
                goto label_142b76f9b
            
            if (((arg2 - 3) & 0xfffffffd) == 0 && rbp_2 == 6)
                int16_t rax_22 = *(arg1 + 0x18)
                int32_t rax_24
                
                if (rax_22 s< 0)
                    rax_24 = *(arg1 + 0x1c)
                else
                    rax_24 = sx.d(rax_22) s>> 5
                
                if (rsi_1 s>= rax_24)
                    goto label_142b76e6c
                
                int32_t var_68_2 = 0
                char rax_25 = sub_142a48fb0(arg1 + 0x10, rdi_3, 7, u"offset:", 0, 7)
                
                if (rax_25 != 0)
                    goto label_142b76e6c
                
                rcx_10 = arg1
                
                if (arg7.b == rax_25)
                    r8_5 = arg3
                    goto label_142b76fa6
                
                int32_t rax_26 = sub_142b77510(rcx_10, rsi_1 + 1)
                int32_t rax_27 = sub_142b77460(arg1, rax_26)
                rsi = rax_27
                
                if (rax_27 == rax_26)
                    goto label_142b76f9b
                
                rcx_6 = arg1
                
                if (rax_27 - rax_26 s> 0xffff)
                    r8 = rax_26
                else
                    var_68_2.q = arg6
                    arg5 = sub_142b76460(rcx_6, rax_26, rax_27, 0, arg5, nullptr, r12)
                    
                    if (*r12 s> 0)
                        break
                    
                    rbp = arg2
                    arg7.b = 0
                    continue
                
                goto label_142b76f41
            
            if (rbp_2 s<= 0xffff)
            label_142b76e6c:
                sub_142b74dc0(arg1, 0xb, rdi_3, rbp_2.w, 0, r12)
                char r14_4 = var_44
                
                if (sub_142a48fb0(arg1 + 0x10, rdi_3, rbp_2, u"other", 0, 5) == 0)
                    r14_4 = 1
                
                var_44 = r14_4
                goto label_142b76eaf
            
            sub_142b77300(arg1, arg6, rdi_3)
            result = 0
            *r12 = 8
        else
            int16_t rcx_3 = *(arg1 + 0x18)
            int32_t rax_13
            
            if (rcx_3 s< 0)
                rax_13 = *(arg1 + 0x1c)
            else
                rax_13 = sx.d(rcx_3) s>> 5
            
            if (rdi_3 u>= rax_13)
                goto label_142b76d13
            
            void* rcx_4 = arg1 + 0x1a
            
            if ((rcx_3.b & 2) == 0)
                rcx_4 = *(arg1 + 0x28)
            
            if (*(rcx_4 + (sx.q(rdi_3) << 1)) != 0x3d)
                goto label_142b76d13
            
            int32_t rax_15 = sub_142b77460(arg1, rdi_3 + 1)
            rsi_1 = rax_15
            int32_t r9_1 = rax_15 - rdi_3
            
            if (r9_1 == 1)
                goto label_142b76f9b
            
            r8 = rdi_3
            rcx_6 = arg1
            
            if (r9_1 s<= 0xffff)
                int32_t var_68_1 = 0
                var_68_1.q = arg6
                sub_142b76460(arg1, rdi_3 + 1, rsi_1, 0, 
                    sub_142b74dc0(rcx_6, 0xb, r8, r9_1.w, 0, r12), var_68_1, r12)
            label_142b76eaf:
                
                if (*r12 s> 0)
                    break
                
                int32_t rax_29 = sub_142b77510(arg1, rsi_1)
                int16_t rax_30 = *(arg1 + 0x18)
                int32_t rcx_18
                
                if (rax_30 s< 0)
                    rcx_18 = *(arg1 + 0x1c)
                else
                    rcx_18 = sx.d(rax_30) s>> 5
                
                if (rax_29 != rcx_18 && sub_142a4a1a0(arg1 + 0x10, rax_29) == 0x7b)
                    rbp = arg2
                    int32_t rax_32
                    rax_32, arg5 = sub_142b766f0(arg1, rax_29, 1, arg4 + 1, rbp, arg6, r12)
                    rsi = rax_32
                    
                    if (*r12 s> 0)
                        break
                    
                    arg7.b = 0
                    continue
                
                r8_5 = rdi_3
                goto label_142b76fa0
            
        label_142b76f41:
            sub_142b77300(rcx_6, arg6, r8)
            result = 0
            *r12 = 8
    return result

return 0
