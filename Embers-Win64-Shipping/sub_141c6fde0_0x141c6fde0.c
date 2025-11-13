// 函数: sub_141c6fde0
// 地址: 0x141c6fde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x198
int64_t result = EnterCriticalSection(lpCriticalSection)

if (arg4 != 0)
    sub_141c6cec0(arg1 + 0x130)
    *(arg1 + 0x130) = arg4
    int64_t rdi_1 = 0
    *(arg1 + 0x120) = 0
    int64_t* arg_8
    int64_t* rax_1 = (*(*arg2 + 0x260))(arg2, &arg_8)
    
    if (arg1 + 0x180 != rax_1)
        int64_t* rcx_3 = *(arg1 + 0x180)
        *(arg1 + 0x180) = *rax_1
        *rax_1 = 0
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
    
    int64_t* rcx_4 = arg_8
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
    
    int64_t r8 = *(arg1 + 0x180)
    
    if (r8 != 0)
        int64_t* rax_5 = (*(*arg4 + 0x28))(arg4, &arg_8, r8)
        
        if (arg1 + 0x170 != rax_5)
            int64_t* rcx_7 = *(arg1 + 0x170)
            *(arg1 + 0x170) = *rax_5
            *rax_5 = 0
            
            if (rcx_7 != 0)
                (**rcx_7)(rcx_7, 1)
        
        int64_t* rcx_8 = arg_8
        
        if (rcx_8 != 0)
            (**rcx_8)(rcx_8, 1)
        
        if (*(arg1 + 0x170) != 0)
            int64_t** r14_1 = *arg3
            uint64_t r12_2 = sx.q(arg3[1].d) << 3 u>> 3
            
            if (r14_1 u> &r14_1[arg3[1]])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    int64_t* rbp_1 = *r14_1
                    
                    if (rbp_1 != 0)
                        int64_t r13_1 = sx.q(*(arg1 + 0x190))
                        arg_8 = *(arg1 + 0x180)
                        int32_t rax_11 = (r13_1 + 1).d
                        *(arg1 + 0x190) = rax_11
                        
                        if (rax_11 s> *(arg1 + 0x194))
                            sub_1405a4f90(arg1 + 0x188)
                        
                        sub_141c4e8c0((r13_1 << 4) + *(arg1 + 0x188), *(arg1 + 0x130), arg_8, rbp_1)
                    
                    r14_1 = &r14_1[1]
                    rdi_1 += 1
                while (rdi_1 != r12_2)
                
                lpCriticalSection = arg1 + 0x198
            
            sub_141c6f7a0(arg1)
            result = sub_141c6fc50(arg1)
        else
            result = sub_141c72400(arg1)
    else
        result = sub_141c72400(arg1)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
