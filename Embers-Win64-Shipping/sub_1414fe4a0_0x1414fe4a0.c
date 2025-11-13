// 函数: sub_1414fe4a0
// 地址: 0x1414fe4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result_2 = zx.d(arg5)
uint64_t result = zx.q(result_2)
void* rbx_1 = zx.q(arg4) * 0x110 + arg2

if (result_2 != *(rbx_1 + 0x100))
    int32_t result_1 = *(rbx_1 + 0x104)
    *(rbx_1 + 0x100) = result.d
    
    if (result_1 u< arg3)
        goto label_1414fe582
    
    CRITICAL_SECTION* lpCriticalSection = *(*(arg1 + 0x88) + (zx.q(arg4.w) << 3)) + 0x20
    
    if (result_1 u< 0x80)
        if (TryEnterCriticalSection(lpCriticalSection) != 0)
            goto label_1414fe51a
        
        result_1 = *(rbx_1 + 0x104)
    label_1414fe582:
        result = zx.q(result_1)
        *(rbx_1 + (result << 1)) = result_2.w
        *(rbx_1 + 0x104) += 1
    else
        EnterCriticalSection(lpCriticalSection)
    label_1414fe51a:
        int32_t rbp_1 = *arg1
        sub_14151d980(lpCriticalSection, rbp_1, result_2.w)
        uint64_t rdi = 0
        
        if (*(rbx_1 + 0x104) u> 0)
            do
                sub_14151d980(lpCriticalSection, rbp_1, *(rbx_1 + (rdi << 1)))
                rdi = zx.q(rdi.d + 1)
            while (rdi.d u< *(rbx_1 + 0x104))
        
        LeaveCriticalSection(lpCriticalSection)
        result = zx.q(*(rbx_1 + 0x104) + 1)
        *(rbx_1 + 0x108) += result.d
        *(rbx_1 + 0x104) = 0

return result
