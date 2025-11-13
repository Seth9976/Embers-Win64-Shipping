// 函数: sub_142ae77c0
// 地址: 0x142ae77c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 8)
int64_t r12
r12.b = 0
int32_t i_1 = r14 - 1

if (r14 - 1 s>= 0)
    int64_t r15_1 = sx.q(i_1) << 3
    int32_t i_2
    
    do
        int32_t rdi_1 = 0
        int64_t rbx_2 = *(r15_1 + *(arg1 + 0x10))
        
        if (*(arg2 + 0x20) != 0)
            if (*(arg2 + 8) s<= 0)
                goto label_142ae7868
            
            while ((*(arg2 + 0x20))(rbx_2, *(*(arg2 + 0x10) + (sx.q(rdi_1) << 3))) == 0)
                rdi_1 += 1
                
                if (rdi_1 s>= *(arg2 + 8))
                    goto label_142ae7868
            
            goto label_142ae7864
        
        int64_t rdx_2 = sx.q(*(arg2 + 8))
        int64_t rcx_1 = 0
        
        if (rdx_2 s<= 0)
        label_142ae7868:
            
            if (i_1 s>= 0)
                int32_t rcx_2 = *(arg1 + 8)
                
                if (i_1 s< rcx_2)
                    int32_t i = i_1
                    int64_t r9_1 = *(r15_1 + *(arg1 + 0x10))
                    
                    if (i_1 s< rcx_2 - 1)
                        int64_t rdx_3 = r15_1
                        
                        do
                            int64_t* rcx_3 = *(arg1 + 0x10)
                            rdx_3 += 8
                            i += 1
                            *(rcx_3 + rdx_3 - 8) = *(rcx_3 + rdx_3)
                        while (i s< *(arg1 + 8) - 1)
                    
                    *(arg1 + 8) -= 1
                    
                    if (r9_1 != 0)
                        int64_t rax_10 = *(arg1 + 0x18)
                        
                        if (rax_10 != 0)
                            rax_10(r9_1)
            
            r12.b = 1
        else
            int32_t* rax_4 = *(arg2 + 0x10)
            
            while (rbx_2.d != *rax_4)
                rdi_1 += 1
                rcx_1 += 1
                rax_4 = &rax_4[2]
                
                if (rcx_1 s>= rdx_2)
                    goto label_142ae7868
            
        label_142ae7864:
            
            if (rdi_1 s< 0)
                goto label_142ae7868
        
        r15_1 -= 8
        i_2 = i_1
        i_1 -= 1
    while (i_2 - 1 s>= 0)

return zx.q(r12.b)
