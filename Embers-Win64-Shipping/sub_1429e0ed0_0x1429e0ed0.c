// 函数: sub_1429e0ed0
// 地址: 0x1429e0ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *arg1

if (lpCriticalSection == 0)
    return 

EnterCriticalSection(lpCriticalSection)
int32_t rax_1 = arg1[1].d

if (rax_1 s>= 1)
    if (rax_1 != 1)
        do
            CRITICAL_SECTION* CriticalSection = *arg1
            SleepConditionVariableCS(&CriticalSection[1], CriticalSection, 0xffffffff)
        while (arg1[1].d != 1)
    
    arg1[1].d = 0
    WakeConditionVariable(*arg1 + 0x28)

LeaveCriticalSection(*arg1)
HANDLE rdi_1 = *(*arg1 + 0x30)

if (WaitForSingleObjectEx(rdi_1, 0xffffffff, 0) == WAIT_OBJECT_0)
    CloseHandle(rdi_1)

DeleteCriticalSection(*arg1)
sub_1429dde60(*arg1)
*arg1 = 0
