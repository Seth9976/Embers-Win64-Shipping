// 函数: sub_142bdc650
// 地址: 0x142bdc650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t* rbp_1 = *(arg1 + 0x10)
int32_t r10_1 = *(arg1 + 4)
int32_t i_1 = arg3
int32_t* rdi_1 = arg2 + 0x1c
int32_t i

do
    int32_t r9 = *rdi_1
    int32_t rbx_1 = rdi_1[5]
    
    if ((r9.b & 0x10) == 0)
        int32_t rcx = sx.d(rdi_1[1].b)
        int32_t rax
        
        if (rcx != arg5)
            rax = neg.d(arg5)
        
        if (rcx != arg5 && rcx != rax)
            rcx = sx.d(*(rdi_1 + 5))
            
            if ((rcx == arg5 || rcx == rax) && rcx != 0)
                goto label_142bdc6da
            
            goto label_142bdc77c
        
        if (rcx == 0)
        label_142bdc77c:
            
            if ((r9.b & 0x40) != 0)
                rax = 0x80
                int32_t rcx_3 = 0x100
                
                if (arg5 != 2)
                    rax = 0x100
                
                if (arg5 != 2)
                    rcx_3 = 0x80
                
                int32_t* r8_2
                int32_t r9_3
                
                if ((r9 & rax) != 0)
                    int32_t rcx_4 = 0
                    
                    if (r10_1 != 0)
                        int64_t* rdx_2 = rbp_1
                        
                        do
                            r8_2 = *rdx_2
                            rax = rbx_1 - *r8_2
                            
                            if (rax s< arg4 && neg.d(rax) s< arg4)
                                r9_3 = r9 | 0x210
                                goto label_142bdc81c
                            
                            rcx_4 += 1
                            rdx_2 = &rdx_2[1]
                        while (rcx_4 u< r10_1)
                else if ((rcx_3 & r9) != 0)
                    int32_t rcx_5 = 0
                    
                    if (r10_1 != 0)
                        int64_t* rdx_3 = rbp_1
                        
                        do
                            r8_2 = *rdx_3
                            rax = rbx_1 - r8_2[1] - *r8_2
                            
                            if (rax s< arg4 && neg.d(rax) s< arg4)
                                r9_3 = r9 | 0x410
                            label_142bdc81c:
                                *rdi_1 = r9_3
                                *(rdi_1 + 0xc) = r8_2
                                break
                            
                            rcx_5 += 1
                            rdx_3 = &rdx_3[1]
                        while (rcx_5 u< r10_1)
                
                if (*(rdi_1 + 0xc) == 0)
                    int32_t r8_3 = 0
                    
                    if (r10_1 != 0)
                        int64_t* rdx_4 = rbp_1
                        
                        do
                            int32_t* r9_4 = *rdx_4
                            int32_t rcx_6 = *r9_4
                            
                            if (rbx_1 s>= rcx_6 && rbx_1 s<= rcx_6 + r9_4[1])
                                *(rdi_1 + 0xc) = r9_4
                                break
                            
                            r8_3 += 1
                            rdx_4 = &rdx_4[1]
                        while (r8_3 u< r10_1)
        else
        label_142bdc6da:
            
            if (rcx == arg5)
                int32_t rcx_1 = 0
                
                if (r10_1 != 0)
                    int64_t* rdx = rbp_1
                    
                    do
                        int32_t* r8 = *rdx
                        rax = rbx_1 - *r8
                        
                        if (rax s< arg4 && neg.d(rax) s< arg4)
                            *(rdi_1 + 0xc) = r8
                            *rdi_1 = r9 | 0x210
                            break
                        
                        rcx_1 += 1
                        rdx = &rdx[1]
                    while (rcx_1 u< r10_1)
            else if (rcx == neg.d(arg5))
                int32_t rcx_2 = 0
                
                if (r10_1 != 0)
                    int64_t* rdx_1 = rbp_1
                    
                    do
                        int32_t* r8_1 = *rdx_1
                        rax = rbx_1 - r8_1[1] - *r8_1
                        
                        if (rax s< arg4 && neg.d(rax) s< arg4)
                            *(rdi_1 + 0xc) = r8_1
                            *rdi_1 = r9 | 0x410
                            break
                        
                        rcx_2 += 1
                        rdx_1 = &rdx_1[1]
                    while (rcx_2 u< r10_1)
    
    rdi_1 = &rdi_1[0x10]
    i = i_1
    i_1 -= 1
while (i != 1)
