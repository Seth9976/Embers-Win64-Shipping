// 函数: sub_1429e0d60
// 地址: 0x1429e0d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[1].d
int32_t rbx = 1
arg1[5].d = 0

if (rax s< 1)
    CRITICAL_SECTION* lpCriticalSection = sub_1429dddd0(1, 0x38)
    *arg1 = lpCriticalSection
    
    if (lpCriticalSection == 0)
        return 0
    
    InitializeCriticalSectionEx(lpCriticalSection, 0, 0)
    InitializeConditionVariable(*arg1 + 0x28)
    EnterCriticalSection(*arg1)
    void* rbx_1 = *arg1
    uintptr_t hThread = _beginthreadex(nullptr, 0, sub_1429e0f80, arg1, 0, nullptr)
    *(rbx_1 + 0x30) = hThread
    int32_t rbx_2
    
    if (hThread != 0)
        SetThreadPriority(hThread, THREAD_PRIORITY_ABOVE_NORMAL)
        rbx_2 = 0
    else
        rbx_2 = 1
    
    rbx = rbx_2 ^ 1
    
    if (rbx != 0)
        arg1[1].d = 1
    
    LeaveCriticalSection(*arg1)
    
    if (rbx == 0)
        DeleteCriticalSection(*arg1)
        sub_1429dde60(*arg1)
        *arg1 = 0
        return 0
else if (rax s> 1)
    rbx = sub_1429e0d10(arg1)

return zx.q(rbx)
