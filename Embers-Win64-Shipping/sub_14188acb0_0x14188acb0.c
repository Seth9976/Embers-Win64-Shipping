// 函数: sub_14188acb0
// 地址: 0x14188acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x90))
    *(arg1 + 0x90) = 0
    z = true
else
    *(arg1 + 0x90)
    z = false

uint64_t result

if (not(z))
    EnterCriticalSection(arg1 + 0x48)
    int32_t rbx_1 = *(arg1 + 0x80)
    LeaveCriticalSection(arg1 + 0x48)
    
    if (rbx_1 == 0)
        result.b = 1
        return result

result.b = 0
return result
