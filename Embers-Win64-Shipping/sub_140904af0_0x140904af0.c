// 函数: sub_140904af0
// 地址: 0x140904af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t rbp = arg2
int32_t r15 = arg3
EnterCriticalSection(arg1 + 0x18)
int64_t rcx_1 = sx.q(*(arg1 + 0x150))

if (rcx_1.d != 0)
    int32_t rsi_1 = 0
    int32_t r12_1 = 0
    bool r8 = **(arg1 + 0x148) != r15
    int64_t rbx_1 = 0
    int32_t arg_8
    arg_8.b = r8
    
    do
        int64_t r9 = sx.q(rsi_1)
        rbx_1 += 1
        rsi_1 += 1
        
        if (rbx_1 s< rcx_1)
            int32_t* rcx_2 = *(arg1 + 0x148) + (rbx_1 << 2)
            
            do
                int32_t rax_3
                rax_3.b = *rcx_2 != r15
                
                if (zx.d(r8) != rax_3)
                    break
                
                rsi_1 += 1
                rbx_1 += 1
                rcx_2 = &rcx_2[1]
            while (rbx_1 s< rcx_1)
        
        int32_t rbp_2 = rsi_1 - r9.d
        
        if (r8 != 0)
            if (r12_1 != r9.d)
                int64_t rcx_3 = *(arg1 + 0x148)
                memmove(rcx_3 + (sx.q(r12_1) << 2), rcx_3 + (r9 << 2), rbp_2 << 2)
                r8 = arg_8.b
            
            r12_1 += rbp_2
        
        r8 ^= 1
        arg_8.b = r8
    while (rbx_1 s< rcx_1)
    
    *(arg1 + 0x150) = r12_1
    
    if (rcx_1.d - r12_1 s> 0 && *arg4 != 0)
        if (*(arg1 + 0x168) == 0)
            sub_140900b90(arg1 + 0x40, &arg_18, arg4)
        else
            void* rsi_2 = *(arg1 + 0x100)
            EnterCriticalSection(rsi_2 + 0x120)
            int64_t rbp_3 = *(*arg4 + 0x50)
            
            if (rbp_3 u<= *(rsi_2 + 0x118))
                sub_140901860(rsi_2, rbp_3)
                int32_t* rax_8 = j_sub_140a82f30(0x38)
                
                if (rax_8 == 0)
                    rax_8 = nullptr
                else
                    *rax_8 = r15
                    *(rax_8 + 8) = *arg4
                    void* rcx_8 = arg4[1]
                    *(rax_8 + 0x10) = rcx_8
                    
                    if (rcx_8 != 0)
                        *(rcx_8 + 8) += 1
                        r15 = arg_18
                    
                    __builtin_memset(&rax_8[6], 0, 0x20)
                
                int32_t* var_78 = rax_8
                int64_t var_70 = *(arg1 + 0x128)
                int32_t var_68_1 = r15
                int64_t* var_60 = &var_70
                void** var_58_1 = &var_78
                sub_1408ff050(rsi_2 + 0xc0, &arg_8, &var_60, nullptr)
                sub_1409048f0(rsi_2, arg1 + 0x128, var_78)
                *(rsi_2 + 0x110) += rbp_3
            
            if (rsi_2 != -0x120)
                LeaveCriticalSection(rsi_2 + 0x120)
    
    rbp = arg2

int64_t rsi_3 = sx.q(*(arg1 + 0x160))
int32_t rax_10 = (rsi_3 + 1).d
*(arg1 + 0x160) = rax_10

if (rax_10 s> *(arg1 + 0x164))
    sub_1405a4d70(arg1 + 0x158)

int64_t result = *(arg1 + 0x158)
*(result + (rsi_3 << 3)) = rbp

if (arg1 == -0x18)
    return result

return LeaveCriticalSection(arg1 + 0x18)
