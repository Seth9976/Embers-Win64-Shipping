// 函数: sub_1418e14b0
// 地址: 0x1418e14b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
arg3.b = 1
int32_t i = 0
int32_t i_1 = 0
void* const* result

if (arg1[0x22] s> 0)
    void* result_1 = &arg1[0x18]
    int64_t r10_1 = 0
    int64_t var_48_1 = 0
    
    do
        result = *(result_1 + 0x20)
        int32_t rbp_1 = 0x8040
        int32_t rbx_1 = 0x8040
        
        if (result != 0)
            result_1 = result
        
        void* rsi_1 = *(result_1 + r10_1)
        int32_t rcx = *arg1
        
        if (rcx == 0)
            rbp_1 = 0x40
            rbx_1 = 0x20
        label_1418e1561:
            
            if (rsi_1 != 0)
                uint64_t rcx_5
                uint64_t rdx_1
                
                if (*(rsi_1 + 0x50) != 0)
                    int64_t r14_1 = sx.q(rdi[1].d)
                    int32_t rax = (r14_1 + 1).d
                    rdi[1].d = rax
                    
                    if (rax s> *(rdi + 0xc))
                        sub_1407c3b60(rdi)
                        i = i_1
                        r10_1 = var_48_1
                    
                    void* rax_1 = *(rsi_1 + 0x50)
                    arg3 = r14_1 * 0x38 + *rdi
                    
                    if ((*(rax_1 + 0x34) & 0x100) != 0 && rbx_1 == 0x20)
                        rbx_1 = 1
                    
                    rdx_1 = zx.q(*(rax_1 + 0x18))
                    rcx_5 = zx.q(*(rax_1 + 0x70))
                    result = *(rax_1 + 0x68)
                label_1418e15c1:
                    *(arg3 + 4) = 0
                    arg3[3] = 0
                    *(arg3 + 0x18) = 0
                    *arg3 = 0x2c
                    arg3[4] = rbp_1
                    arg3[5] = rbx_1
                    *(arg3 + 0x20) = result
                    *(arg3 + 0x28) = rcx_5
                    *(arg3 + 0x30) = rdx_1
                    arg3.b = 0
                else if (*(rsi_1 + 0x28) == 0)
                    if (*(rsi_1 + 0x20) != 0)
                        int64_t r14_4 = sx.q(rdi[1].d)
                        int32_t rax_10 = (r14_4 + 1).d
                        rdi[1].d = rax_10
                        
                        if (rax_10 s> *(rdi + 0xc))
                            sub_1407c3b60(rdi)
                            i = i_1
                            r10_1 = var_48_1
                        
                        void* rax_11 = *(rsi_1 + 0x20)
                        arg3 = r14_4 * 0x38 + *rdi
                        
                        if ((*(rax_11 + 0x3c) & 0x100) == 0)
                        label_1418e1740:
                            rdx_1 = zx.q(*(rax_11 + 0x1c))
                            rcx_5 = zx.q(*(rax_11 + 0x78))
                            result = *(rax_11 + 0x70)
                        else
                            if (rbp_1 != 0x20)
                                if (rbx_1 == 0x20)
                                    rbx_1 = 1
                                
                                goto label_1418e1740
                            
                            rcx_5 = zx.q(*(rax_11 + 0x78))
                            rbp_1 = 1
                            rdx_1 = zx.q(*(rax_11 + 0x1c))
                            result = *(rax_11 + 0x70)
                        
                        goto label_1418e15c1
                    
                    if (*(rsi_1 + 0x58) != 0)
                        int64_t r14_5 = sx.q(rdi[1].d)
                        int32_t rax_12 = (r14_5 + 1).d
                        rdi[1].d = rax_12
                        
                        if (rax_12 s> *(rdi + 0xc))
                            sub_1407c3b60(rdi)
                            r10_1 = var_48_1
                        
                        result = *(rsi_1 + 0x58)
                        arg3 = zx.q(*(result + 0x1c))
                        int32_t* r9_1 = r14_5 * 0x38 + *rdi
                        uint64_t rdx_7 = zx.q(result[0xf].d)
                        int64_t rcx_15 = result[0xe]
                        *(r9_1 + 4) = 0
                        r9_1[3] = 0
                        *(r9_1 + 0x18) = 0
                        *r9_1 = 0x2c
                        r9_1[4] = rbp_1
                        r9_1[5] = rbx_1
                        *(r9_1 + 0x20) = rcx_15
                        *(r9_1 + 0x28) = rdx_7
                        *(r9_1 + 0x30) = arg3
                        i = i_1
                        arg3.b = 0
                else
                    int64_t r14_2 = sx.q(arg4[1].d)
                    int32_t rax_2 = (r14_2 + 1).d
                    arg4[1].d = rax_2
                    
                    if (rax_2 s> *(arg4 + 0xc))
                        sub_140775520(arg4)
                    
                    int32_t* r14_3 = *arg4 + r14_2 * 0x48
                    int64_t* rcx_8 = *(rsi_1 + 0x28)
                    void* rax_5 = (*(*rcx_8 + 0x48))(rcx_8)
                    int32_t rsi_2
                    
                    if (arg1[0x26] - 1 u<= 1)
                        rsi_2 = sbb.d(rsi_1.d, rsi_1.d, ((*(rax_5 + 0x78)).b & 6) != 0) + 5
                    else
                        rsi_2 = 1
                    
                    int32_t* rax_7
                    rax_7, arg3 = sub_1418e1230(arg2, *(rax_5 + 0x18), 0)
                    r10_1 = var_48_1
                    int32_t rcx_12 = *rax_7
                    
                    if (rcx_12 == 2)
                        rbp_1 = 0x180
                    
                    *(r14_3 + 4) = 0
                    r14_3[3] = 0
                    __builtin_memset(&r14_3[8], 0, 0x28)
                    *r14_3 = 0x2d
                    r14_3[4] = rbp_1
                    r14_3[5] = rbx_1
                    r14_3[6] = rcx_12
                    r14_3[7] = rsi_2
                    *(r14_3 + 0x28) = *(rax_5 + 0x18)
                    r14_3[0xc] = *(rax_5 + 0x78)
                    r14_3[0xe] = *(rax_5 + 0x70)
                    r14_3[0x10] = 1
                    *(r14_3 + 0x20) = -1
                    *rax_7 = rsi_2
                    i = i_1
                    arg3.b = 0
        else
            if (rcx == 1)
                rbp_1 = 0x20
                rbx_1 = 0x40
                goto label_1418e1561
            
            if (rcx == 2)
            label_1418e1546:
                rbp_1 = 0x60
                rbx_1 = 0x60
                goto label_1418e1561
            
            if (rcx != 3)
                if (rcx != 4)
                    goto label_1418e1561
                
                goto label_1418e1546
        
        i += 1
        result_1 = &arg1[0x18]
        r10_1 += 8
        i_1 = i
        var_48_1 = r10_1
    while (i s< arg1[0x22])

result.b = arg3.b == 0
return result
