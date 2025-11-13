// 函数: sub_142bdeb30
// 地址: 0x142bdeb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15_1 = arg4 - arg2
int32_t r14_1 = arg5 - arg3
int32_t rdi = arg2
uint64_t result

if (r14_1 s<= 0 || arg5 s< arg6 || arg3 s> arg7)
    result.b = 0
else
    int32_t r12_1 = 0
    char rcx_1
    int32_t rbp_2
    
    if (arg3 s>= arg6)
        rcx_1 = (*arg1).b
        rbp_2 = arg3 s>> rcx_1
        result = zx.q(arg1[1] - 1) & zx.q(arg3)
    else
        uint32_t rax = sub_142b93dd0(r15_1, arg6 - arg3, r14_1)
        rcx_1 = (*arg1).b
        rdi += rax
        rbp_2 = arg6 s>> rcx_1
        result = 0
    
    int32_t rbx_2
    
    if (arg5 s<= arg7)
        rbx_2 = arg5 s>> rcx_1
        r12_1 = (arg1[1] - 1) & arg5
    else
        rbx_2 = arg7 s>> rcx_1
    
    if (result.d s<= 0)
        if (*(arg1 + 0x6b) != 0)
            *(arg1 + 0x30) -= 4
            *(arg1 + 0x6b) = 0
        
        goto label_142bdec05
    
    if (rbp_2 == rbx_2)
        result.b = 0
    else
        rdi += sub_142b93dd0(r15_1, arg1[1] - result.d, r14_1).d
        rbp_2 += 1
    label_142bdec05:
        result.b = r12_1 == 0
        bool cond:0_1 = *(arg1 + 0x6a) == 0
        *(arg1 + 0x6b) = result.b
        
        if (not(cond:0_1))
            *(*(arg1 + 0x70) + 0x20) = rbp_2
            *(arg1 + 0x6a) = 0
        
        int32_t i = rbx_2 - rbp_2 + 1
        
        if (*(arg1 + 0x30) + (sx.q(i) << 2) u< *(arg1 + 0x28))
            int32_t rcx_5 = arg1[1]
            int32_t rdx_6
            uint32_t r8_3
            int32_t r9
            
            if (r15_1 s<= 0)
                r8_3 = neg.d(sub_142b93e30(rcx_5, neg.d(r15_1), r14_1))
                rdx_6 = mods.dp.d(sx.q(neg.d(r15_1 * arg1[1])), r14_1)
                r9 = -1
            else
                r8_3 = sub_142b93e30(rcx_5, r15_1, r14_1)
                r9 = 1
                rdx_6 = mods.dp.d(sx.q(r15_1 * arg1[1]), r14_1)
            
            int32_t* rcx_6 = *(arg1 + 0x30)
            result = zx.q(neg.d(r14_1))
            
            for (; i s> 0; i -= 1)
                *rcx_6 = rdi
                rcx_6 = &rcx_6[1]
                rdi += r8_3
                int32_t temp14_1 = result.d
                result = zx.q(result.d + rdx_6)
                
                if (temp14_1 + rdx_6 s>= 0)
                    result = zx.q(result.d - r14_1)
                    rdi += r9
            
            *(arg1 + 0x30) = rcx_6
            result.b = 0
        else
            arg1[0xe] = 0x62
            result.b = 1

return result
