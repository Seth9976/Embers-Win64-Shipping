// 函数: sub_142bf3870
// 地址: 0x142bf3870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || *arg1 == 0)
    int64_t rax
    rax.b = 0
    return rax

CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 8)
int32_t var_48
int32_t var_48_1 = var_48

for (; lpCriticalSection_1 == 0; lpCriticalSection_1 = *(arg1 + 8))
    CRITICAL_SECTION* lpCriticalSection = sub_140dc0ea0(0x38, 1)
    lpCriticalSection_1 = lpCriticalSection
    
    if (lpCriticalSection == 0)
        return lpCriticalSection
    
    InitializeCriticalSection(lpCriticalSection)
    lpCriticalSection_1[1].DebugInfo = 0
    *(lpCriticalSection_1 + 0x30) = 0
    bool z_1
    
    if (0 == *(arg1 + 8))
        *(arg1 + 8) = lpCriticalSection_1
        z_1 = true
    else
        *(arg1 + 8)
        z_1 = false
    
    if (z_1)
        break
    
    sub_142bf2560(&lpCriticalSection_1[1], lpCriticalSection_1)
    DeleteCriticalSection(lpCriticalSection_1)
    j_sub_140a74f90(lpCriticalSection_1)

return sub_142bf7a00(lpCriticalSection_1, arg2, arg3, arg4, arg5)
