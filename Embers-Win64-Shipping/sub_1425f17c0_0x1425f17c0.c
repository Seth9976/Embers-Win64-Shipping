// 函数: sub_1425f17c0
// 地址: 0x1425f17c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg2 + 0x18)

if (rdx != 0)
    (*(*(arg1 + 0x50) + 0xd8))(*(arg1 + 0x58), rdx)
    *(arg2 + 0x18) = 0

int64_t rdx_1 = *(arg2 + 0x10)

if (rdx_1 != 0)
    (*(*(arg1 + 0x50) + 0x100))(*(arg1 + 0x58), rdx_1)
    *(arg2 + 0x10) = 0

int64_t* result = sub_1405d16e0(arg2 + 0x28, nullptr)
int64_t* rcx_3 = *(arg2 + 0x30)

if (rcx_3 != 0)
    result = (*(*rcx_3 + 0x10))(rcx_3)
    *(arg2 + 0x30) = 0

if (*(arg2 + 0x50) == 0)
    return result

return sub_1405d16e0(arg2 + 0x50, nullptr)
