// 函数: sub_142446b20
// 地址: 0x142446b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    data_143f5e628
    z = false

if (z)
    uint64_t result
    result.b = 0
    return result

EnterCriticalSection(arg1 + 0x30)
uint64_t rsi

if (*(arg1 + 0x10) != 0)
    *(arg1 + 0x18) = 0
    int64_t (* var_28)(int64_t arg1, int32_t arg2, int32_t arg3, void* arg4) = sub_14243de20
    *(arg1 + 0x20) = 0
    int64_t (* var_18_1)() = sub_140594890
    *(arg1 + 8) = arg2
    int64_t var_20_1 = 0
    int64_t var_10_1 = 0
    char rax = sub_1424364c0(arg1, &var_28, arg3)
    rsi = zx.q(rax)
    *(arg1 + 0x6c) = rax
else
    rsi.b = 0

if (arg1 != -0x30)
    LeaveCriticalSection(arg1 + 0x30)

return zx.q(rsi.b)
