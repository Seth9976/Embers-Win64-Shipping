// 函数: sub_140774790
// 地址: 0x140774790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)
void* result_1 = arg1
uint32_t rdx_2 = (*(arg1 + 0x18) + 0x1f) u>> 5

if (result != 0)
    result_1 = result

if (rdx_2 u> 8)
    result = memset(result_1, 0, zx.q(rdx_2) << 2)
else if (rdx_2 != 0)
    __builtin_memset(result_1, 0, zx.q(rdx_2) << 2)
    *(arg1 + 0x18) = 0
    return 0

*(arg1 + 0x18) = 0
return result
