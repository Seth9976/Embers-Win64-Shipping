// 函数: sub_142b46980
// 地址: 0x142b46980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2

if (*arg3 s<= 0)
    if (arg2 == 0)
        goto label_142b469ba
    
    int64_t r9_1 = sx.q(arg2[1].d)
    
    if (r9_1.d != 0)
        arg4 = zx.q(r9_1.d) & 0x80000003
        
        if (arg4.d s< 0)
            arg4 = zx.q(((arg4.d - 1) | 0xfffffffc) + 1)
        
        if (arg4.d == 0)
            if (r9_1.d s> 2)
                int64_t rcx_3 = 2
                int32_t rdx_1 = (r9_1 - 2).d
                
                do
                    int32_t r10_1
                    
                    if (rcx_3 s< 0 || r9_1.d s<= 0 || rdx_1 s<= 0)
                        r10_1 = 0
                    else
                        r10_1 = *(rbx[3] + (rcx_3 << 2))
                    
                    arg4 = rcx_3 + 1
                    int32_t r8
                    
                    if (arg4 s< 0 || r9_1.d s<= 0)
                        r8 = 0
                    else
                        arg4 = zx.q(rdx_1 - 1)
                        
                        if (arg4.d s<= 0)
                            r8 = 0
                        else
                            arg4 = rbx[3]
                            r8 = *(arg4 + (rcx_3 << 2) + 4)
                    
                    if (r10_1 s>= r8)
                        *arg3 = 1
                        goto label_142b46a0e
                    
                    rdx_1 -= 4
                    rcx_3 += 4
                while (rcx_3 s< r9_1)
            
            goto label_142b469ba
        
        *arg3 = 1
    else
        arg4 = (**arg2)(rbx, zx.q((r9_1 + 1).d))
        rbx = nullptr
    label_142b469ba:
        
        if (*arg3 s<= 0)
            int64_t* rcx_1 = *(arg1 + 8)
            
            if (rcx_1 != 0)
                arg4 = (**rcx_1)(rcx_1, 1)
            
            *(arg1 + 8) = rbx
            *(arg1 + 0x10) = neg.d(sbb.d(arg4.d, arg4.d, rbx != 0)) - 1
            return 

label_142b46a0e:

if (rbx != 0)
    (**rbx)(rbx, 1)
