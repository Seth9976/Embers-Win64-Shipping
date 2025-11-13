// 函数: sub_140a80fb0
// 地址: 0x140a80fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
uint32_t result

if (rbx != 0 && *(rbx + 0x60) != 0 && GetCurrentThreadId() != *(*(rbx + 0x60) + 0x44))
    result.b = 1
    return result

result.b = 0
return result
