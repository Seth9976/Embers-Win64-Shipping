// 函数: sub_142389c40
// 地址: 0x142389c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
EnterCriticalSection(rbx + 0x10)
int32_t rsi = *(rbx + 0x58)
*(rbx + 0x58) = 3
void* rcx_1 = arg1[1]
int64_t* rdx = *(rcx_1 + 0x3c8)

if (rdx != 0)
    (*(*rdx + 0x28))(rdx)
    rcx_1 = arg1[1]

*(rcx_1 + 0x58) = rsi
int64_t result = LeaveCriticalSection(rcx_1 + 0x10)

if (arg1 == 0)
    return result

return (*(*arg1 + 0x10))(arg1, 1)
