// 函数: sub_141c69550
// 地址: 0x141c69550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = EnterCriticalSection(arg1 + 0xb8)
int64_t* rcx_1 = *(arg1 + 0x60)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x18))(rcx_1)
    int64_t* rcx_2 = *(arg1 + 0x60)
    uint64_t r15
    r15.b = 0
    int32_t rax_2 = (*(*rcx_2 + 0x10))(rcx_2)
    int32_t arg_8
    
    if (rax_2 == 0)
        int64_t* rcx_4 = *(arg1 + 0x60)
        arg_8 = 0
        (*(*rcx_4 + 0x30))(rcx_4, &arg_8)
        int32_t rax_5 = arg_8
        int64_t* r14_1 = *(*(arg1 + 0x28) + sx.q(*(arg1 + 0x50)) * 0x10)
        int64_t rsi_1 = sx.q(r14_1[1].d)
        
        if (rax_5 s> rsi_1.d)
            r14_1[1].d = rax_5
            
            if (rax_5 s> *(r14_1 + 0xc))
                sub_140775270(r14_1)
            
            memset(*r14_1 + (rsi_1 << 2), 0, sx.q(rax_5 - rsi_1.d) << 2)
        else if (rax_5 s< rsi_1.d && rax_5 != rsi_1.d)
            r14_1[1].d = rax_5
            sub_1407758e0(r14_1)
    else if (rax_2 == 2)
        int64_t* rcx_3 = *(arg1 + 0x60)
        arg_8.b = 0
        (*(*rcx_3 + 0x28))(rcx_3, &arg_8)
        r15 = zx.q(arg_8.b)
    int64_t* rcx_9 = *(arg1 + 0x60)
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)
    
    *(arg1 + 0x60) = 0
    result = sub_141c72080(arg1, r15.b)

if (*(arg1 + 0x60) == 0)
    int32_t r8_4 = *(arg1 + 0x50) + 1
    *(arg1 + 0x50) = r8_4
    
    if (r8_4 s> 2)
        *(arg1 + 0x50) = 0
        r8_4 = 0
    
    int32_t rax_8 = *(arg1 + 0xe0)
    char r9_1
    
    if ((rax_8.b & 4) == 0)
        r9_1 = 0
    else
        r9_1 = 1
        *(arg1 + 0xe0) = rax_8 & 0xfffffffb
    
    result = sub_141c69e10(arg1, *(arg1 + 0x68), r8_4, r9_1)
    
    if (*(arg1 + 0x60) == 0)
        result = sub_141c72080(arg1, result)

if (arg1 == -0xb8)
    return result

return LeaveCriticalSection(arg1 + 0xb8) __tailcall
