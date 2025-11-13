// 函数: sub_1405ff030
// 地址: 0x1405ff030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2

if (arg2 == 0)
    return 0x80004003

CRITICAL_SECTION* arg_10 = &arg1[3]
EnterCriticalSection(&arg1[3])
int32_t rsi_1

if (arg1[8] != 0)
    int32_t rax_3 = (*(*arg1 + 0x18))(arg1, arg2, 0)
    rsi_1 = rax_3
    
    if (rax_3 s>= 0)
        sub_1405ed110(&arg1[9], arg2)
        rsi_1 = 0
else
    rsi_1 = -0x3ff2c17b

if (arg1 != -0x18)
    LeaveCriticalSection(&arg1[3])

return zx.q(rsi_1)
