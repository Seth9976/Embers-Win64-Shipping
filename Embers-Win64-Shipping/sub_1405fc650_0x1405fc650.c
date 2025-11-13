// 函数: sub_1405fc650
// 地址: 0x1405fc650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* arg_8 = arg1 + 0x28
EnterCriticalSection(arg1 + 0x28)
void* rsi = *(arg1 + 0x60)
int32_t rsi_1

if (rsi != 0)
    (*(*(rsi + 0x10) + 0x60))(rsi + 0x10)
    void* arg_18 = rsi + 0x20
    EnterCriticalSection(rsi + 0x20)
    timeEndPeriod(1)
    HANDLE hObject = *(rsi + 0x90)
    
    if (hObject != 0)
        CloseHandle(hObject)
        *(rsi + 0x90) = 0
    
    rsi_1 = (*(*(rsi + 0x10) + 0x30))(rsi + 0x10, 0x12e, &data_1434cb1d0, 0, 0)
    
    if (rsi != -0x20)
        LeaveCriticalSection(rsi + 0x20)
else
    rsi_1 = -0x3ff2c17b

if (arg1 != -0x28)
    LeaveCriticalSection(arg1 + 0x28)

return zx.q(rsi_1)
