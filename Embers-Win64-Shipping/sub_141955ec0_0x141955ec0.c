// 函数: sub_141955ec0
// 地址: 0x141955ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection_1 = data_143f01c30
int32_t rdi = 0

if (lpCriticalSection_1 == 0)
    CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x28)
    lpCriticalSection_1 = lpCriticalSection
    
    if (lpCriticalSection == 0)
        lpCriticalSection_1 = nullptr
    else
        InitializeCriticalSection(lpCriticalSection)
        SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
    
    data_143f01c30 = lpCriticalSection_1

EnterCriticalSection(lpCriticalSection_1)
HGLRC i = wglGetCurrentContext()
int64_t r9 = sx.q(data_143f01c28)
int32_t result_1 = 0
int32_t result

if (r9.d s<= 0)
label_141955fd2:
    data_143effc98(1, &result_1)
    result = result_1
else
    int64_t* r10_1 = data_143f01c20
    int64_t rdx = 0
    int64_t* rcx_3 = r10_1
    
    while (*rcx_3 != i)
        rdi += 1
        rdx += 1
        rcx_3 = &rcx_3[2]
        
        if (rdx s>= r9)
            goto label_141955fd2
    
    void* rcx_6 = &r10_1[sx.q(rdi) * 2]
    result_1 = *(rcx_6 + 8)
    int32_t rax_4 = r9.d - rdi - 1
    
    if (rax_4 s>= 1)
        rax_4 = 1
    
    if (rax_4 != 0)
        memcpy(rcx_6, &r10_1[sx.q(r9.d - rax_4) * 2], rax_4 << 4)
        r9 = zx.q(data_143f01c28)
    
    data_143f01c28 = r9.d - 1
    sub_1405a5010(&data_143f01c20)
    result = result_1
    
    if (result == 0)
        goto label_141955fd2

*arg1 = result
*arg2 = i

if (lpCriticalSection_1 == 0)
    return result

return LeaveCriticalSection(lpCriticalSection_1)
