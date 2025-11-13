// 函数: sub_142384c80
// 地址: 0x142384c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x580)
int64_t* r8 = *(arg1 + 0x340)
void* r9 = &r8[sx.q(*(arg1 + 0x348))]
int64_t* result

if (r8 == r9)
label_142384ce8:
    void* rdi_1 = *(arg1 + 0x208)
    int64_t* rcx_1 = *(rdi_1 + 0x58)
    
    if (rcx_1 == 0)
        bool z_1
        
        if (0 == *(rdi_1 + 0x48))
            *(rdi_1 + 0x48) = 0
            z_1 = true
        else
            *(rdi_1 + 0x48)
            z_1 = false
        
        if (not(z_1))
            sub_1423ae170(rdi_1 + 8)
            *(rdi_1 + 0x48) -= 1
        
        goto label_142384d3c
    
    if ((*(*rcx_1 + 0x18))(rcx_1, rdi_1, r8, r9) == 0)
    label_142384d3c:
        
        if (*(rdi_1 + 0x58) != 0)
            int64_t* rcx_5 = *(rdi_1 + 0x50)
            (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
            *(rdi_1 + 0x58) = 0
    else
        sub_1423ae170(rdi_1 + 8)
        *(rdi_1 + 0x48) -= 1
        int64_t* rcx_3 = *(rdi_1 + 0x50)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        *(rdi_1 + 0x58) = 0
    
    int64_t* rax_6 = j_sub_140a82f30(0xb8)
    int64_t* rdi_2 = rax_6
    
    if (rax_6 == 0)
        rdi_2 = nullptr
    else
        void* rdx_2 = *(arg1 + 0x208) + 8
        *rax_6 = arg2
        rax_6[1].w = 0
        sub_142380870(&rax_6[2], rdx_2)
        rdi_2[8].b = 0
        void* rcx_7 = &rdi_2[0xf]
        __builtin_memset(&rdi_2[9], 0, 0x30)
        *(rcx_7 + 0x10) = 0
        *(rcx_7 + 0x18) = 0
        *(rcx_7 + 0x1c) = 0x80
        void* rax_7 = *(rcx_7 + 0x10)
        
        if (rax_7 != 0)
            rcx_7 = rax_7
        
        *rcx_7 = 0
        *(rcx_7 + 8) = 0
        rdi_2[0x13].d = 0xffffffff
        *(rdi_2 + 0x9c) = 0
        rdi_2[0x15] = 0
        rdi_2[0x16].d = 0
        void* rax_8 = *rdi_2
        
        if (rax_8 != 0)
            *(rax_8 + 0x1f4) &= 0xef
    
    int64_t rcx_8 = *(arg1 + 0x340)
    int64_t rdx_3 = sx.q(*(arg1 + 0x348))
    int64_t* rsi_1 = rdx_3 << 3
    void* rax_9 = rsi_1 + rcx_8
    
    if (rax_9 == rcx_8)
    label_142384e3f:
        int32_t rax_10 = (rdx_3 + 1).d
        *(arg1 + 0x348) = rax_10
        
        if (rax_10 s> *(arg1 + 0x34c))
            sub_1405a4d70(arg1 + 0x340)
        
        result = *(arg1 + 0x340)
        *(rsi_1 + result) = rdi_2
    else
        while (true)
            rax_9 -= 8
            
            if (*rax_9 == 0)
                break
            
            if (rax_9 == rcx_8)
                goto label_142384e3f
        
        int32_t result_1 = ((rax_9 - rcx_8) s>> 3).d
        
        if (result_1 == 0xffffffff)
            goto label_142384e3f
        
        result = sx.q(result_1)
        *(rcx_8 + (result << 3)) = rdi_2
else
    while (true)
        result = *r8
        
        if (result != 0 && *result == arg2)
            break
        
        r8 = &r8[1]
        
        if (r8 == r9)
            goto label_142384ce8

if (arg1 == -0x580)
    return result

return LeaveCriticalSection(arg1 + 0x580) __tailcall
