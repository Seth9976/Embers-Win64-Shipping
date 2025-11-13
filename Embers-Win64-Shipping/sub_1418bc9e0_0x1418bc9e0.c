// 函数: sub_1418bc9e0
// 地址: 0x1418bc9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0x20)
int32_t r8_1 = r8 - 1
void* const result

if (r8 - 1 s< 0)
label_1418bca34:
    void* result_3 = j_sub_140a82f30(0x110)
    void* const result_2 = result_3
    
    if (result_3 == 0)
        result_2 = nullptr
    else
        int64_t rcx = *(arg1 + 0x50)
        *(result_3 + 0x28) = 0
        *(result_3 + 0x2c) = 5
        char rax_2 = *(result_3 + 0x2d)
        *(result_2 + 0x38) = rcx
        *(result_2 + 0x30) = 0
        void* rcx_1 = result_2 + 0xd0
        __builtin_memset(result_2 + 0x40, 0, 0x68)
        *(result_2 + 0x2d) = (((rax_2 & 0xc1) | arg2 << 5) & 0xbf) | 1
        *(result_2 + 0xa8) = arg1
        __builtin_memset(result_2 + 0xb0, 0, 0x20)
        *(rcx_1 + 0x1c) = 0x80
        void* rax_3 = *(rcx_1 + 0x10)
        
        if (rax_3 != 0)
            rcx_1 = rax_3
        
        __builtin_memset(rcx_1, 0, 0x1c)
        *(result_2 + 0xf0) = 0xffffffff
        *(result_2 + 0xf4) = 0
        *(result_2 + 0x100) = 0
        *(result_2 + 0x108) = 0
        CRITICAL_SECTION* lpCriticalSection = *(result_2 + 0xa8) + 0x28
        EnterCriticalSection(lpCriticalSection)
        sub_1418bb6f0(result_2)
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        *(result_2 + 0x90) = sub_1418bc110(*(result_2 + 0x38) + 0x438, 0)
    
    int64_t rsi_2 = sx.q(*(arg1 + 0x10))
    int32_t rcx_13 = (rsi_2 + 1).d
    *(arg1 + 0x10) = rcx_13
    
    if (rcx_13 s> *(arg1 + 0x14))
        sub_1405a4d70(arg1 + 8)
    
    result = result_2
    *(*(arg1 + 8) + (rsi_2 << 3)) = result_2
else
    int64_t r10_1 = *(arg1 + 0x18)
    int64_t r9_1 = sx.q(r8_1)
    
    while (true)
        void* result_1 = *(r10_1 + (r9_1 << 3))
        
        if ((*(result_1 + 0x2d) u>> 5 & 1) == arg2)
            int32_t rdx = *(arg1 + 0x20)
            int32_t rax_7 = rdx - r8_1 - 1
            
            if (rax_7 s>= 1)
                rax_7 = 1
            
            if (rax_7 != 0)
                memcpy(r10_1 + (sx.q(r8_1) << 3), r10_1 + (sx.q(rdx - rax_7) << 3), rax_7 << 3)
                rdx = *(arg1 + 0x20)
            
            *(arg1 + 0x20) = rdx - 1
            sub_1405c53d0(arg1 + 0x18)
            sub_1418bb6f0(result_1)
            int64_t rsi_1 = sx.q(*(arg1 + 0x10))
            int32_t rcx_10 = (rsi_1 + 1).d
            *(arg1 + 0x10) = rcx_10
            
            if (rcx_10 s> *(arg1 + 0x14))
                sub_1405a4d70(arg1 + 8)
            
            result = result_1
            *(*(arg1 + 8) + (rsi_1 << 3)) = result_1
            break
        
        r8_1 -= 1
        int64_t temp1_1 = r9_1
        r9_1 -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_1418bca34

return result
