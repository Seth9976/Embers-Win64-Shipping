// 函数: sub_1422dccb0
// 地址: 0x1422dccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x20)
void* result = *(arg1 + 0x10)
*(result + 0x30) = 5

if (arg1 != -0x20)
    result = LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0x90) -= 1
int64_t* rcx_2 = *(arg1 + 0x98)

if (rcx_2 == 0)
    return result

return (*(*rcx_2 + 0x10))(rcx_2)
