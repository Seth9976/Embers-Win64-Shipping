// 函数: sub_142065ae0
// 地址: 0x142065ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
int64_t var_38 = r15
int64_t i_1 = 2
int64_t* result = arg1 + 8
int64_t* result_1 = result
int64_t i

do
    int64_t r14_1 = *result
    
    if (r14_1 != 0)
        int64_t rcx_2 = sx.q(arg2[1].d)
        
        if (rcx_2.d != 0)
            int32_t r12_1 = 0
            int32_t rdi_1 = 0
            int64_t rbx_1 = 0
            r15.b = **arg2 != r14_1
            
            do
                int64_t r9_1 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< rcx_2)
                    int64_t rcx_3 = *arg2 + (rbx_1 << 3)
                    
                    do
                        int32_t rax_3
                        rax_3.b = *rcx_3 != r14_1
                        
                        if (zx.d(r15.b) != rax_3)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_3 += 8
                    while (rbx_1 s< rcx_2)
                
                int32_t rsi_2 = rdi_1 - r9_1.d
                
                if (r15.b != 0)
                    if (r12_1 != r9_1.d)
                        int64_t rcx_4 = *arg2
                        memmove(rcx_4 + (sx.q(r12_1) << 3), rcx_4 + (r9_1 << 3), rsi_2 << 3)
                    
                    r12_1 += rsi_2
                
                r15.b ^= 1
            while (rbx_1 s< rcx_2)
            
            arg2[1].d = r12_1
    
    char rdx_2 = *(arg1 + 0x84)
    void* rax_6 = arg1 + 0x40
    char rcx_6 = rdx_2
    
    if (rdx_2 == 0)
        rax_6 = nullptr
    
    if (rax_6 != 0)
        int64_t r14_2 = *(rax_6 + 8)
        
        if (r14_2 != 0)
            int64_t r8_3 = sx.q(arg2[1].d)
            
            if (r8_3.d != 0)
                int32_t r12_2 = 0
                int32_t rdi_2 = 0
                int64_t rbx_2 = 0
                r15.b = **arg2 != r14_2
                
                do
                    int64_t r9_2 = sx.q(rdi_2)
                    rbx_2 += 1
                    rdi_2 += 1
                    
                    if (rbx_2 s< r8_3)
                        int64_t rcx_7 = *arg2 + (rbx_2 << 3)
                        
                        do
                            int32_t rax_9
                            rax_9.b = *rcx_7 != r14_2
                            
                            if (zx.d(r15.b) != rax_9)
                                break
                            
                            rdi_2 += 1
                            rbx_2 += 1
                            rcx_7 += 8
                        while (rbx_2 s< r8_3)
                    
                    int32_t rsi_4 = rdi_2 - r9_2.d
                    
                    if (r15.b != 0)
                        if (r12_2 != r9_2.d)
                            int64_t rcx_8 = *arg2
                            memmove(rcx_8 + (sx.q(r12_2) << 3), rcx_8 + (r9_2 << 3), rsi_4 << 3)
                        
                        r12_2 += rsi_4
                    
                    r15.b ^= 1
                while (rbx_2 s< r8_3)
                
                arg2[1].d = r12_2
                rcx_6 = *(arg1 + 0x84)
    
    void* rax_12 = arg1 + 0x60
    
    if (rcx_6 == 0)
        rax_12 = nullptr
    
    if (rax_12 != 0)
        int64_t r14_3 = *(rax_12 + 8)
        
        if (r14_3 != 0)
            int64_t rcx_10 = sx.q(arg2[1].d)
            
            if (rcx_10.d != 0)
                int32_t r12_3 = 0
                int32_t rdi_3 = 0
                int64_t rbx_3 = 0
                r15.b = **arg2 != r14_3
                
                do
                    int64_t r9_3 = sx.q(rdi_3)
                    rbx_3 += 1
                    rdi_3 += 1
                    
                    if (rbx_3 s< rcx_10)
                        int64_t rcx_11 = *arg2 + (rbx_3 << 3)
                        
                        do
                            int32_t rax_15
                            rax_15.b = *rcx_11 != r14_3
                            
                            if (zx.d(r15.b) != rax_15)
                                break
                            
                            rdi_3 += 1
                            rbx_3 += 1
                            rcx_11 += 8
                        while (rbx_3 s< rcx_10)
                    
                    int32_t rsi_6 = rdi_3 - r9_3.d
                    
                    if (r15.b != 0)
                        if (r12_3 != r9_3.d)
                            int64_t rcx_12 = *arg2
                            memmove(rcx_12 + (sx.q(r12_3) << 3), rcx_12 + (r9_3 << 3), rsi_6 << 3)
                        
                        r12_3 += rsi_6
                    
                    r15.b ^= 1
                while (rbx_3 s< rcx_10)
                
                arg2[1].d = r12_3
    
    result = &result_1[4]
    i = i_1
    i_1 -= 1
    result_1 = result
while (i != 1)
return result
