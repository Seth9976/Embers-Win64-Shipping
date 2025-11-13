// 函数: sub_142432a90
// 地址: 0x142432a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
bool z

if (0 == data_143f5e628)
    data_143f5e628 = 0
    z = true
else
    result = zx.q(data_143f5e628)
    z = false

if (not(z))
    result = EnterCriticalSection(arg1 + 0x30)
    
    if (*(arg1 + 0x6c) != 0)
        result = ov_halfrate(*(arg1 + 0x10), zx.q(arg2))
    
    if (arg1 != -0x30)
        return LeaveCriticalSection(arg1 + 0x30)

return result
