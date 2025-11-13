// 函数: sub_142ad98d0
// 地址: 0x142ad98d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = arg5
int32_t r15 = -1
int64_t rbp = sx.q(arg3)
int32_t r14 = 0
int32_t rdi = 0

if (r12 s> 0)
    int16_t* rbx_1 = arg4 + 8
    
    do
        int16_t rax_2 = *rbx_1
        int32_t var_34 = 0
        int32_t var_38 = 0
        arg5 = 0
        int32_t r9_1
        
        if (rax_2 s< 0)
            r9_1 = *(rbx_1 + 4)
        else
            r9_1 = sx.d(rax_2) s>> 5
        
        int16_t* r8
        
        if ((rax_2.b & 0x11) == 0)
            r8 = &rbx_1[1]
            
            if ((rax_2.b & 2) == 0)
                r8 = *(rbx_1 + 0x10)
        else
            r8 = nullptr
        
        int16_t rax_3 = *(arg2 + 8)
        int32_t rdx_1
        
        if (rax_3 s< 0)
            rdx_1 = *(arg2 + 0xc)
        else
            rdx_1 = sx.d(rax_3) s>> 5
        
        void* rax_4
        
        if ((rax_3.b & 0x11) == 0)
            rax_4 = arg2 + 0xa
            
            if ((rax_3.b & 2) == 0)
                rax_4 = *(arg2 + 0x18)
        else
            rax_4 = nullptr
        
        j_sub_142a8f0d0(rax_4 + (rbp << 1), rdx_1 - rbp.d, r8, r9_1, 0, &var_38, &arg5, &var_34)
        int16_t rcx_1 = *rbx_1
        int32_t rax_6
        
        if (rcx_1 s< 0)
            rax_6 = *(rbx_1 + 4)
        else
            rax_6 = sx.d(rcx_1) s>> 5
        
        int32_t r9_2 = arg5
        int32_t rax_15
        
        if (r9_2 == rax_6)
            rax_15 = var_38
        else
            int32_t rax_8
            
            if (rcx_1 s< 0)
                rax_8 = *(rbx_1 + 4)
            else
                rax_8 = sx.d(rcx_1) s>> 5
            
            int32_t rax_10
            
            if (rcx_1 s< 0)
                rax_10 = *(rbx_1 + 4)
            else
                rax_10 = sx.d(rcx_1) s>> 5
            
            if (rax_8 - 1 u>= rax_10)
                rax_15 = 0
            else
                void* rdx_3 = &rbx_1[1]
                
                if ((rcx_1.b & 2) == 0)
                    rdx_3 = *(rbx_1 + 0x10)
                
                if (*(rdx_3 + (sx.q(rax_8 - 1) << 1)) != 0x2e)
                    rax_15 = 0
                else
                    int32_t rax_13
                    
                    if (rcx_1 s< 0)
                        rax_13 = *(rbx_1 + 4)
                    else
                        rax_13 = sx.d(rcx_1) s>> 5
                    
                    if (r9_2 == rax_13 - 1)
                        rax_15 = var_38
                    else
                        rax_15 = 0
        
        if (rax_15 s> r14)
            r14 = rax_15
            r15 = rdi
        
        rdi += 1
        rbx_1 = &rbx_1[0x20]
    while (rdi s< r12)
    
    if (r15 s>= 0)
        *arg6 = r15
        return zx.q(r14 + rbp.d)

return zx.q(neg.d(rbp.d))
