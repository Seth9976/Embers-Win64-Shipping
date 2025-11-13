// 函数: sub_142096100
// 地址: 0x142096100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = EnterCriticalSection(arg1 + 8)
void* i = *(arg1 + 0x40)

for (void* rbp_2 = (sx.q(*(arg1 + 0x48)) << 5) + i; i != rbp_2; i += 0x20)
    int64_t var_28
    result = sub_140bb6ec0(*(i + 0x10), sub_140b63b70(arg2 + 8, &var_28))
    *(arg1 + 0xb0) |= result
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        result = sub_140a74f90(rcx_3)

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8) __tailcall
