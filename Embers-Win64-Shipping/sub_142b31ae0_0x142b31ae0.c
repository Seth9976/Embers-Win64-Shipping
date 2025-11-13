// 函数: sub_142b31ae0
// 地址: 0x142b31ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg3

if (*arg8 s> 0)
    int32_t* rax
    rax.b = 0
    return rax

int32_t rax_1 = sub_142a4a4f0(arg5, 0, 1)
int16_t rcx_1 = *(arg5 + 8)
int32_t rdi = rax_1
int32_t rax_3

if (rcx_1 s< 0)
    rax_3 = *(arg5 + 0xc)
else
    rax_3 = sx.d(rcx_1) s>> 5

if (rdi == rax_3)
    rax_3.b = 0
else
    if ((*(arg5 + 8) & 1) == 0)
        int32_t rax_5
        
        if (rcx_1 s< 0)
            rax_5 = *(arg5 + 0xc)
        else
            rax_5 = sx.d(rcx_1) s>> 5
        
        int32_t rdx
        
        if (rdi s>= 0)
            rdx = rdi
            
            if (rdi s> rax_5)
                rdx = rax_5
        else
            rdx = 0
        
        int32_t rax_6 = rax_5 - rdx
        void* r9 = arg5 + 0xa
        int32_t r8 = 0x7fffffff
        
        if (rax_6 s< 0x7fffffff)
            r8 = rax_6
        
        if ((rcx_1.b & 2) == 0)
            r9 = *(arg5 + 0x18)
        
        rax_3 = sub_142a48fb0(arg2, r14, 0x7fffffff, r9, rdx, r8)
    else
        rax_3.b = not.b(*(arg2 + 8))
        rax_3.b &= 1
    
    if (rax_3.b != 0)
        sub_142a4a980(arg6, arg2, 0, r14)
        sub_142a48580(sub_142a4a980(arg7, arg2, 0, r14 - rdi), arg4)
        int32_t rbp_1 = -1
        uint64_t r12
        r12.b = 0
        uint64_t r15
        r15.b = 0
        
        while (true)
            if (rbp_1 s>= 0)
                goto label_142b31c4b
            
            if (r14 s< sub_142a4a1f0(arg2))
                int32_t rax_8 = sub_142a486d0(arg2, r14)
                rbp_1 = rax_8
                int64_t* rcx_9 = *(arg1 + 8)
                int64_t r8_1 = *rcx_9
                r12 = zx.q((*(r8_1 + 0x48))(rcx_9, zx.q(rax_8), r8_1))
            label_142b31c4b:
                
                if (rdi s< sub_142a4a1f0(arg5))
                    int32_t rax_10 = sub_142a486d0(arg5, rdi)
                    int64_t* rcx_12 = *(arg1 + 8)
                    int64_t r8_2 = *rcx_12
                    rax_3 = (*(r8_2 + 0x48))(rcx_12, zx.q(rax_10), r8_2)
                    r15 = zx.q(rax_3.b)
                    
                    if (rax_3.b != 0 && r12.b u>= rax_3.b)
                        if (rax_3.b u< r12.b)
                            sub_142a48580(arg6, rax_10)
                            int32_t rcx_14
                            rcx_14.b = rax_10 u> 0xffff
                            rdi += rcx_14 + 1
                            continue
                        else if (rax_10 == rbp_1)
                            sub_142a48580(arg6, rax_10)
                            int32_t rcx_17
                            rcx_17.b = rax_10 u> 0xffff
                            rbp_1 = -1
                            r14 += rcx_17 + 1
                            rdi += rcx_17 + 1
                            continue
                    
                    rax_3.b = 0
                    break
                    break
            
            if (rbp_1 s< 0)
                int16_t rax_12 = *(arg5 + 8)
                
                if (rax_12 s< 0)
                    rax_3 = *(arg5 + 0xc)
                else
                    rax_3 = sx.d(rax_12) s>> 5
                
                if (rdi s< rax_3)
                    sub_142a48d00(arg6, arg5, rdi, 0x7fffffff)
            else
                if (r12.b u< r15.b)
                    rax_3.b = 0
                    break
                    break
                
                sub_142a48d00(arg6, arg2, r14, 0x7fffffff)
                sub_142a48d00(arg7, arg2, r14, 0x7fffffff)
            
            rax_3.b = 1
            break
    else
        rax_3.b = 0

return rax_3
