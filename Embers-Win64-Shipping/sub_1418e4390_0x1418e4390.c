// 函数: sub_1418e4390
// 地址: 0x1418e4390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
sub_1418c2c90(*arg1, arg2)
int64_t result

if (*(rdi + 0x19) == 0)
    EnterCriticalSection(&arg1[0x37])
    int64_t rdx_5 = *(rdi + 0x50)
    
    if (rdx_5 == 0)
        goto label_1418e449b
    
    data_143efb888(*(*(rdi + 0x308) + 8), rdx_5, 0)
label_1418e4489:
    *(rdi + 0x50) = 0
label_1418e449b:
    CRITICAL_SECTION* lpCriticalSection = *(*(rdi + 0x308) + 0x1b00) + 0x230
    result = EnterCriticalSection(lpCriticalSection)
    
    if (lpCriticalSection != 0)
        result = LeaveCriticalSection(lpCriticalSection)
else
    EnterCriticalSection(&arg1[0x37])
    int32_t arg_8
    sub_1418e0ab0(&arg1[0x3c], &arg_8, rdi + 0x4b0)
    int64_t rax_1 = sx.q(arg_8)
    void* const r14_1
    
    if (rax_1.d == 0xffffffff)
        r14_1 = nullptr
    else
        r14_1 = arg1[0x3c] + rax_1 * 0x28
    
    sub_1418ec0d0(&arg1[0x3c], rdi + 0x4b0)
    *(rdi + 0x19) = 0
    void** rax_3 = r14_1 + 0x18
    
    if (r14_1 == 0)
        rax_3 = nullptr
    
    rdi = *rax_3
    
    if (arg1[0x5b].b == 0)
        int64_t rdx_4 = *(rdi + 0x50)
        
        if (rdx_4 == 0)
            goto label_1418e449b
        
        data_143efb888(*(*(rdi + 0x308) + 8), rdx_4, 0)
        goto label_1418e4489
    
    result = sub_1418e39e0(arg1, rdi)

if (arg1 == -0x1b8)
    return result

return LeaveCriticalSection(&arg1[0x37])
