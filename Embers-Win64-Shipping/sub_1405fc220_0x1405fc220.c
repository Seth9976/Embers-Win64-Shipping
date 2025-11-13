// 函数: sub_1405fc220
// 地址: 0x1405fc220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void* arg_8 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
void* rsi = *(arg1 + 0x48)
int32_t rsi_1

if (rsi != 0)
    CRITICAL_SECTION* arg_18 = rsi + 0x20
    EnterCriticalSection(rsi + 0x20)
    
    if (*(rsi + 0x48) != 0)
        *(rsi + 0x60) = 1
        rsi_1 = (*(*(rsi + 0x10) + 0x30))(rsi + 0x10, 0x131, &data_1434cb1d0, 0, 0)
        
        if (rsi != -0x20)
            LeaveCriticalSection(rsi + 0x20)
    else
        if (rsi != -0x20)
            LeaveCriticalSection(rsi + 0x20)
        
        rsi_1 = -0x3ff2c17b
else
    rsi_1 = -0x3ff2c17b

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return zx.q(rsi_1)
