// 函数: sub_1418a6e00
// 地址: 0x1418a6e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x40))
    *(arg1 + 0x40) = 0
    z = true
else
    *(arg1 + 0x40)
    z = false

if (not(z))
    *(arg1 + 0x44) += 1

int64_t* rcx = *(arg1 + 0x20)
(*(*rcx + 0x40))(rcx, arg2, 0xa)
int64_t result = EnterCriticalSection(arg1 + 0x78)
*(arg1 + 0xb8) = 0

if (*(arg1 + 0xbc) != 0)
    result = sub_1405947f0(arg1 + 0xb0, 0)

*(arg1 + 0xc0) = 0

if (arg1 == -0x78)
    return result

return LeaveCriticalSection(arg1 + 0x78)
