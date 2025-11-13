// 函数: sub_142b69060
// 地址: 0x142b69060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int16_t result = sub_142af42a0(rbx, arg2)

if (result u>= *(rbx + 0xe) && result != 0xfe00 && (*(rbx + 0x1e) u> result || result u> 0xfc00))
    result.b = 0
    return result

result.b = 1
return result
