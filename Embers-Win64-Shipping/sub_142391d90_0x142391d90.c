// 函数: sub_142391d90
// 地址: 0x142391d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool z

if (0 == *(arg1 + 0x128))
    *(arg1 + 0x128) = 0
    z = true
else
    *(arg1 + 0x128)
    z = false

uint64_t result

if (not(z))
    result.b = 0
    return result

if (*(arg1 + 0x138) != 0)
    int64_t* rcx = *(arg1 + 0x130)
    (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
    *(arg1 + 0x138) = 0

result.b = 1
return result
