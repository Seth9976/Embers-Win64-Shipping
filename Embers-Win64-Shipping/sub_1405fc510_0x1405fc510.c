// 函数: sub_1405fc510
// 地址: 0x1405fc510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* arg_8 = arg1 + 0x28
EnterCriticalSection(arg1 + 0x28)
void* rbp = *(arg1 + 0x60)
enum WIN32_ERROR rsi_1

if (rbp != 0)
    CRITICAL_SECTION* arg_20 = rbp + 0x20
    EnterCriticalSection(rbp + 0x20)
    
    if (0f f== *(rbp + 0x88) || *(rbp + 0x90) != 0)
    label_1405fc5d5:
        enum WIN32_ERROR rax_4 = (*(*(rbp + 0x10) + 0x30))(rbp + 0x10, 0x12d, &data_1434cb1d0, 0, 0)
        rsi_1 = rax_4
        
        if (rax_4 s>= NO_ERROR)
            rsi_1 = (*(*(rbp + 0x10) + 0x30))(rbp + 0x10, 0x131, &data_1434cb1d0, 0, 0)
    else
        timeBeginPeriod(1)
        HANDLE rax_1 = CreateWaitableTimerW(nullptr, 0, nullptr)
        *(rbp + 0x90) = rax_1
        
        if (rax_1 != 0)
            goto label_1405fc5d5
        
        enum WIN32_ERROR rax_2 = GetLastError()
        rsi_1 = rax_2
        
        if (rax_2 s> NO_ERROR)
            rsi_1 = zx.d(rax_2.w) | 0x80070000
        
        if (rsi_1 s>= NO_ERROR)
            goto label_1405fc5d5
    
    if (rbp != -0x20)
        LeaveCriticalSection(rbp + 0x20)
else
    rsi_1 = 0xc00d3e85

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

return zx.q(rsi_1)
