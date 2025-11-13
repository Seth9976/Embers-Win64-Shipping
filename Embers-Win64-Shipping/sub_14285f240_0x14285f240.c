// 函数: sub_14285f240
// 地址: 0x14285f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rcx = **(arg1 + 8)
void* const r14_1

if (rcx == 0x10000)
    r14_1 = &data_1434dbff0
label_14285f2b1:
    int32_t r13_1 = 0
    *arg2 = 0
    int32_t rbp_1 = 1
    
    if (arg4 != 0)
        *arg4 = 0
    
    int32_t r15_1 = 0
    
    while (*r14_1 != 0)
        int64_t rax_3 = *(r14_1 + 8)
        
        if (rax_3 != 0)
            int32_t* rax_5 = rax_3()
            
            if (rbp_1 == 1 && r15_1 == 0)
                r15_1 = *r14_1
            
            int32_t rdx = arg1[0x173]
            int32_t rbx_1 = *rax_5
            
            if (rdx == 0 || rbx_1 == rdx)
            label_14285f3c1:
                
                if (sub_1428546e0(arg1, 9, 0, rbx_1, 0) == 0)
                    rbp_1 = 1
                else
                    int32_t rdx_1 = arg1[0x174]
                    
                    if (rdx_1 != 0 && rbx_1 != rdx_1)
                        int32_t rax_10
                        
                        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                            if (rdx_1 == 0x100)
                                rdx_1 = 0xff00
                            
                            if (rbx_1 == 0x100)
                                rbx_1 = 0xff00
                            
                            rax_10 = 1
                            
                            if (rbx_1 s> rdx_1)
                                rax_10 = -1
                        else
                            rax_10 = 1
                            
                            if (rbx_1 s< rdx_1)
                                rax_10 = -1
                        
                        if (rax_10 s<= 0 && (rax_5[2] & arg1[0x171]) == 0 && ((rax_5[1].b & 2) == 0
                                || (*(*(arg1 + 0x488) + 0x1c) & 0x30000) == 0))
                            goto label_14285f450
                        
                        rbp_1 = 1
                    else if ((rax_5[2] & arg1[0x171]) != 0 ||
                            ((rax_5[1].b & 2) != 0 && (*(*(arg1 + 0x488) + 0x1c) & 0x30000) != 0))
                        rbp_1 = 1
                    else
                    label_14285f450:
                        
                        if (rbp_1 != 0)
                            if (arg4 != 0 && r15_1 != 0)
                                *arg4 = r15_1
                            
                            rbp_1 = 0
                            r13_1 = *rax_5
                            *arg2 = r13_1
                        else
                            *arg2 = *rax_5
            else
                int32_t rcx_2
                
                if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
                    int32_t rax_7 = rbx_1
                    
                    if (rdx == 0x100)
                        rdx = 0xff00
                    
                    if (rbx_1 == 0x100)
                        rax_7 = 0xff00
                    
                    rcx_2 = 1
                    
                    if (rax_7 s> rdx)
                        rcx_2 = -1
                else
                    rcx_2 = 1
                    
                    if (rbx_1 s< rdx)
                        rcx_2 = -1
                
                if (rcx_2 s>= 0)
                    goto label_14285f3c1
                
                rbp_1 = 1
        else
            r15_1 = 0
            rbp_1 = 1
        
        r14_1 += 0x18
    
    *arg3 = r13_1
    
    if (r13_1 == 0)
        return 0xbf
else
    if (rcx == 0x1ffff)
        r14_1 = &data_1434dc080
        goto label_14285f2b1
    
    int32_t rax_1 = *arg1
    *arg3 = rax_1
    *arg2 = rax_1
    
    if (arg4 != 0)
        return 0x44
return 0
